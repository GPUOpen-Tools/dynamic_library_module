//==============================================================================
// Copyright (c) 2017-2019 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief THIS CODE WAS HANDGENERATED
//==============================================================================

#ifndef _ROCM_SMI_MODULE_FUNC_TABLES_H_
#define _ROCM_SMI_MODULE_FUNC_TABLES_H_

#define ROCM_SMI_API_TABLE \
    X(rsmi_init) \
    X(rsmi_shut_down) \
    X(rsmi_num_monitor_devices) \
    X(rsmi_dev_id_get) \
    X(rsmi_dev_vendor_id_get) \
    X(rsmi_dev_name_get) \
    X(rsmi_dev_vendor_name_get) \
    X(rsmi_dev_subsystem_id_get) \
    X(rsmi_dev_subsystem_name_get) \
    X(rsmi_dev_subsystem_vendor_id_get) \
    X(rsmi_dev_pci_bandwidth_get) \
    X(rsmi_dev_pci_id_get) \
    X(rsmi_dev_pci_throughput_get) \
    X(rsmi_dev_pci_bandwidth_set) \
    X(rsmi_dev_power_ave_get) \
    X(rsmi_dev_power_cap_get) \
    X(rsmi_dev_power_cap_range_get) \
    X(rsmi_dev_power_cap_set) \
    X(rsmi_dev_power_profile_set) \
    X(rsmi_dev_memory_total_get) \
    X(rsmi_dev_memory_usage_get) \
    X(rsmi_dev_fan_rpms_get) \
    X(rsmi_dev_fan_speed_get) \
    X(rsmi_dev_fan_speed_max_get) \
    X(rsmi_dev_temp_metric_get) \
    X(rsmi_dev_fan_reset) \
    X(rsmi_dev_fan_speed_set) \
    X(rsmi_dev_busy_percent_get) \
    X(rsmi_dev_perf_level_get) \
    X(rsmi_dev_overdrive_level_get) \
    X(rsmi_dev_gpu_clk_freq_get) \
    X(rsmi_dev_od_volt_info_get) \
    X(rsmi_dev_od_volt_curve_regions_get) \
    X(rsmi_dev_power_profile_presets_get) \
    X(rsmi_dev_perf_level_set) \
    X(rsmi_dev_overdrive_level_set) \
    X(rsmi_dev_gpu_clk_freq_set) \
    X(rsmi_dev_od_freq_range_set) \
    X(rsmi_version_get) \
    X(rsmi_dev_vbios_version_get) \
    X(rsmi_dev_ecc_count_get) \
    X(rsmi_dev_ecc_enabled_get) \
    X(rsmi_dev_ecc_status_get) \
    X(rsmi_status_string) \

#endif
