cmake_minimum_required(VERSION 3.6)
project(Class_Clock)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Clock.cpp Clock.h)
add_executable(Class_Clock ${SOURCE_FILES})