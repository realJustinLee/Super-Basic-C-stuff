cmake_minimum_required(VERSION 3.5)
project(C_Works)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_C_FLAGS "${CMKAE_C_FLAGS} -std=c99")

set(SOURCE_FILES main.cpp main_class.cpp main_class.h)
add_executable(C_Works ${SOURCE_FILES})