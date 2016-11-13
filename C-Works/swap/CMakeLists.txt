cmake_minimum_required(VERSION 3.6)
project(swap)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp declare.h function.cpp)
add_executable(swap ${SOURCE_FILES})