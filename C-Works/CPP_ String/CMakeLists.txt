cmake_minimum_required(VERSION 3.6)
project(CPP__String)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp String.cpp String.h)
add_executable(CPP__String ${SOURCE_FILES})