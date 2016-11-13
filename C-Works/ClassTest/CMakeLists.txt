cmake_minimum_required(VERSION 3.6)
project(ClassTest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Studet.cpp Studet.h)
add_executable(ClassTest ${SOURCE_FILES})