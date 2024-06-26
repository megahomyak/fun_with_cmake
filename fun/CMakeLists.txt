cmake_minimum_required(VERSION 3.28.3)

project(hello_world VERSION 1.0.0)
set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED True)

add_executable(a a.c)

configure_file(metadata.template.h metadata.h)
target_include_directories(a PUBLIC "${PROJECT_BINARY_DIR}")
