cmake_minimum_required(VERSION 3.6)
project(Solving)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp solver.cpp solver.h)
add_executable(Solving ${SOURCE_FILES})