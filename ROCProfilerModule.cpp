//==============================================================================
// Copyright (c) 2017 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools
/// \file
/// \brief  This class manages the dynamic loading of ROCProfiler entry points
//==============================================================================

#include <string>
#include "ROCProfilerModule.h"

#if defined(_WIN64) || defined(_WIN32)
    #pragma message("ROCProfiler does not support Windows")
#else
    const char* ROCProfilerModule::s_defaultModuleName = "librocprofiler64.so";
#endif

ROCProfilerModule::ROCProfilerModule(void) : m_isModuleLoaded(false)
{
    Initialize();
    LoadModule();
}

ROCProfilerModule::~ROCProfilerModule(void)
{
    UnloadModule();
}

void ROCProfilerModule::Initialize()
{
#define X(SYM) SYM = nullptr;
    ROC_PROFILER_API_TABLE;
#undef X

    m_isModuleLoaded = false;
}

void ROCProfilerModule::UnloadModule()
{
    m_dynamicLibraryHelper.UnloadModule();
    Initialize();
}

bool ROCProfilerModule::LoadModule(const std::string& moduleName)
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
        ROC_PROFILER_API_TABLE;
#undef X
#undef MAKE_STRING

        // Check if we initialized all the function pointers
#define X(SYM) && SYM != nullptr
        m_isModuleLoaded = true ROC_PROFILER_API_TABLE;

#undef X

    }

    return m_isModuleLoaded;
}
