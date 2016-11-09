cmake_minimum_required(VERSION 3.6)
project(workermi)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp workermi.cpp workermi.h)
add_executable(workermi ${SOURCE_FILES})