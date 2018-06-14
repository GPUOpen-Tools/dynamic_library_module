//==============================================================================
// Copyright (c) 2017-2018 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief THIS CODE WAS HANDGENERATED
//==============================================================================

#ifndef _ROC_PROFILER_MODULE_DECLS_H_
#define _ROC_PROFILER_MODULE_DECLS_H_

#include <rocprofiler.h>

typedef decltype(rocprofiler_version_major)* rocprofiler_version_major_fn_t;
typedef decltype(rocprofiler_version_minor)* rocprofiler_version_minor_fn_t;
typedef decltype(rocprofiler_open)* rocprofiler_open_fn_t;
typedef decltype(rocprofiler_close)* rocprofiler_close_fn_t;
typedef decltype(rocprofiler_reset)* rocprofiler_reset_fn_t;
typedef decltype(rocprofiler_start)* rocprofiler_start_fn_t;
typedef decltype(rocprofiler_stop)* rocprofiler_stop_fn_t;
typedef decltype(rocprofiler_get_data)* rocprofiler_get_data_fn_t;
typedef decltype(rocprofiler_group_count)* rocprofiler_group_count_fn_t;
typedef decltype(rocprofiler_get_group)* rocprofiler_get_group_fn_t;
typedef decltype(rocprofiler_group_start)* rocprofiler_group_start_fn_t;
typedef decltype(rocprofiler_group_stop)* rocprofiler_group_stop_fn_t;
typedef decltype(rocprofiler_group_get_data)* rocprofiler_group_get_data_fn_t;
typedef decltype(rocprofiler_get_metrics)* rocprofiler_get_metrics_fn_t;
typedef decltype(rocprofiler_iterate_trace_data)* rocprofiler_iterate_trace_data_fn_t;
typedef decltype(rocprofiler_error_string)* rocprofiler_error_string_fn_t;
typedef decltype(rocprofiler_add_feature)* rocprofiler_add_feature_fn_t;
typedef decltype(rocprofiler_features_set_open)* rocprofiler_features_set_open_fn_t;
typedef decltype(rocprofiler_set_queue_callbacks)* rocprofiler_set_queue_callbacks_fn_t;
typedef decltype(rocprofiler_remove_queue_callbacks)* rocprofiler_remove_queue_callbacks_fn_t;
typedef decltype(rocprofiler_read)* rocprofiler_read_fn_t;
typedef decltype(rocprofiler_group_read)* rocprofiler_group_read_fn_t;
typedef decltype(rocprofiler_get_info)* rocprofiler_get_info_fn_t;
typedef decltype(rocprofiler_iterate_info)* rocprofiler_iterate_info_fn_t;
typedef decltype(rocprofiler_query_info)* rocprofiler_query_info_fn_t;

#endif
