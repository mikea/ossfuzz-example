cmake_minimum_required(VERSION 3.4)
project(ossfuzz-example)

add_library(libexample library.cc)
add_executable(ossfuzz-example main.cc library.cc)
target_link_libraries (ossfuzz-example libexample)
