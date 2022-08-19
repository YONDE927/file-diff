cmake_minimum_required(VERSION 3.18.0)

project(file-diff C CXX)

set(srcs "diff.cc") 
set(test-srcs "test.cc") 
add_subdirectory(./file_list)
add_library(${CMAKE_PROJECT_NAME} STATIC ${srcs})
add_executable(${CMAKE_PROJECT_NAME}-test test-srcs)
