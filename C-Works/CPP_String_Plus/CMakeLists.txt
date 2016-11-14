cmake_minimum_required(VERSION 3.6)
project(CPP_String_Plus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp String.cpp String.h)
add_executable(CPP_String_Plus ${SOURCE_FILES})