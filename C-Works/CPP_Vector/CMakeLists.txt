cmake_minimum_required(VERSION 3.6)
project(CPP_Vector)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Vector.cpp Vector.h Matrix.cpp Matrix.h)
add_executable(CPP_Vector ${SOURCE_FILES})