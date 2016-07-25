cmake_minimum_required(VERSION 3.4)
project(ossfuzz-example)

add_library(example library.cc)
add_executable(ossfuzz-example main.cc)
target_link_libraries (ossfuzz-example example)
