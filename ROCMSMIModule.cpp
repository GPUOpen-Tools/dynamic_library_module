//==============================================================================
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools
/// \file
/// \brief  This class manages the dynamic loading of ROCM_SMI entry points
//==============================================================================

#include <string>
#include "ROCMSMIModule.h"

#if defined(_WIN64) || defined(_WIN32)
    #pragma message("ROCMSMI does not support Windows")
    const char* ROCMSMIModule::s_defaultModuleName = "";
#else
    const char* ROCMSMIModule::s_defaultModuleName = "librocm_smi64.so";
#endif

ROCMSMIModule::ROCMSMIModule(void) : m_isModuleLoaded(false)
{
    Initialize();
    LoadModule();
}

ROCMSMIModule::~ROCMSMIModule(void)
{
    UnloadModule();
}

void ROCMSMIModule::Initialize()
{
#define X(SYM) SYM = nullptr;
    ROCM_SMI_API_TABLE;
#undef X

    m_isModuleLoaded = false;
}

void ROCMSMIModule::UnloadModule()
{
    m_dynamicLibraryHelper.UnloadModule();
    Initialize();
}

bool ROCMSMIModule::LoadModule(const std::string& moduleName)
{
    // Load from specified module
    bool bLoaded = m_dynamicLibraryHelper.LoadModule(moduleName);

    if (!bLoaded)
    {
        // Load from deafult module
        bLoaded = m_dynamicLibraryHelper.LoadModule(s_defaultModuleName);
    }

    if (bLoaded)
    {

#define MAKE_STRING(s) ""#s
#define X(SYM) SYM = reinterpret_cast<SYM##_fn_t>(m_dynamicLibraryHelper.GetProcAddress(MAKE_STRING(SYM)));
        ROCM_SMI_API_TABLE;
#undef X
#undef MAKE_STRING

        // Check if we initialized all the function pointers
#define X(SYM) && SYM != nullptr
        m_isModuleLoaded = true ROCM_SMI_API_TABLE;

#undef X

    }

    return m_isModuleLoaded;
}
