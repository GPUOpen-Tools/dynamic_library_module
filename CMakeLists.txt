## Copyright (c) 2025 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.25)

project(DYNAMIC_LIBRARY_MODULE LANGUAGES CXX)

add_library(dynamic_library_module STATIC)
add_library(AMD::dynamic_library_module ALIAS dynamic_library_module)
target_sources(dynamic_library_module
    PRIVATE
        DynamicLibraryModule.cpp
    PUBLIC
        FILE_SET public_headers
        TYPE HEADERS
        BASE_DIRS .
        FILES
            DynamicLibraryModule.h
)
