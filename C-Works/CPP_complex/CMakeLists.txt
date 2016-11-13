cmake_minimum_required(VERSION 3.6)
project(CPP_complex)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp complex.cpp complex.h)
add_executable(CPP_complex ${SOURCE_FILES})