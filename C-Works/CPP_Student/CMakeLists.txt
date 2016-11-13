cmake_minimum_required(VERSION 3.6)
project(CPP_Student)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp Student.cpp Student.h)
add_executable(CPP_Student ${SOURCE_FILES})