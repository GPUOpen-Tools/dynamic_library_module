//==============================================================================
// Copyright (c) 2017-2019 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief THIS CODE WAS HANDGENERATED
//==============================================================================

#ifndef _ROCM_SMI_MODULE_DECLS_H_
#define _ROCM_SMI_MODULE_DECLS_H_

#include <rocm_smi.h>

typedef decltype(rsmi_init)* rsmi_init_fn_t;
typedef decltype(rsmi_shut_down)* rsmi_shut_down_fn_t;
typedef decltype(rsmi_num_monitor_devices)* rsmi_num_monitor_devices_fn_t;
typedef decltype(rsmi_dev_id_get)* rsmi_dev_id_get_fn_t;
typedef decltype(rsmi_dev_vendor_id_get)* rsmi_dev_vendor_id_get_fn_t;
typedef decltype(rsmi_dev_name_get)* rsmi_dev_name_get_fn_t;
typedef decltype(rsmi_dev_vendor_name_get)* rsmi_dev_vendor_name_get_fn_t;
typedef decltype(rsmi_dev_subsystem_id_get)* rsmi_dev_subsystem_id_get_fn_t;
typedef decltype(rsmi_dev_subsystem_name_get)* rsmi_dev_subsystem_name_get_fn_t;
typedef decltype(rsmi_dev_subsystem_vendor_id_get)* rsmi_dev_subsystem_vendor_id_get_fn_t;
typedef decltype(rsmi_dev_pci_bandwidth_get)* rsmi_dev_pci_bandwidth_get_fn_t;
typedef decltype(rsmi_dev_pci_id_get)* rsmi_dev_pci_id_get_fn_t;
typedef decltype(rsmi_dev_pci_throughput_get)* rsmi_dev_pci_throughput_get_fn_t;
typedef decltype(rsmi_dev_pci_bandwidth_set)* rsmi_dev_pci_bandwidth_set_fn_t;
typedef decltype(rsmi_dev_power_ave_get)* rsmi_dev_power_ave_get_fn_t;
typedef decltype(rsmi_dev_power_cap_get)* rsmi_dev_power_cap_get_fn_t;
typedef decltype(rsmi_dev_power_cap_range_get)* rsmi_dev_power_cap_range_get_fn_t;
typedef decltype(rsmi_dev_power_cap_set)* rsmi_dev_power_cap_set_fn_t;
typedef decltype(rsmi_dev_power_profile_set)* rsmi_dev_power_profile_set_fn_t;
typedef decltype(rsmi_dev_memory_total_get)* rsmi_dev_memory_total_get_fn_t;
typedef decltype(rsmi_dev_memory_usage_get)* rsmi_dev_memory_usage_get_fn_t;
typedef decltype(rsmi_dev_fan_rpms_get)* rsmi_dev_fan_rpms_get_fn_t;
typedef decltype(rsmi_dev_fan_speed_get)* rsmi_dev_fan_speed_get_fn_t;
typedef decltype(rsmi_dev_fan_speed_max_get)* rsmi_dev_fan_speed_max_get_fn_t;
typedef decltype(rsmi_dev_temp_metric_get)* rsmi_dev_temp_metric_get_fn_t;
typedef decltype(rsmi_dev_fan_reset)* rsmi_dev_fan_reset_fn_t;
typedef decltype(rsmi_dev_fan_speed_set)* rsmi_dev_fan_speed_set_fn_t;
typedef decltype(rsmi_dev_busy_percent_get)* rsmi_dev_busy_percent_get_fn_t;
typedef decltype(rsmi_dev_perf_level_get)* rsmi_dev_perf_level_get_fn_t;
typedef decltype(rsmi_dev_overdrive_level_get)* rsmi_dev_overdrive_level_get_fn_t;
typedef decltype(rsmi_dev_gpu_clk_freq_get)* rsmi_dev_gpu_clk_freq_get_fn_t;
typedef decltype(rsmi_dev_od_volt_info_get)* rsmi_dev_od_volt_info_get_fn_t;
typedef decltype(rsmi_dev_od_volt_curve_regions_get)* rsmi_dev_od_volt_curve_regions_get_fn_t;
typedef decltype(rsmi_dev_power_profile_presets_get)* rsmi_dev_power_profile_presets_get_fn_t;
typedef decltype(rsmi_dev_perf_level_set)* rsmi_dev_perf_level_set_fn_t;
typedef decltype(rsmi_dev_overdrive_level_set)* rsmi_dev_overdrive_level_set_fn_t;
typedef decltype(rsmi_dev_gpu_clk_freq_set)* rsmi_dev_gpu_clk_freq_set_fn_t;
typedef decltype(rsmi_dev_od_freq_range_set)* rsmi_dev_od_freq_range_set_fn_t;
typedef decltype(rsmi_version_get)* rsmi_version_get_fn_t;
typedef decltype(rsmi_dev_vbios_version_get)* rsmi_dev_vbios_version_get_fn_t;
typedef decltype(rsmi_dev_ecc_count_get)* rsmi_dev_ecc_count_get_fn_t;
typedef decltype(rsmi_dev_ecc_enabled_get)* rsmi_dev_ecc_enabled_get_fn_t;
typedef decltype(rsmi_dev_ecc_status_get)* rsmi_dev_ecc_status_get_fn_t;
typedef decltype(rsmi_status_string)* rsmi_status_string_fn_t;

#endif
