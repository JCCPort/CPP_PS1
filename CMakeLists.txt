cmake_minimum_required(VERSION 3.5)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_library(untitled library.cpp library.h "cmake-build-debug/Problem_1.cpp")

add_executable(Euler main.cpp Problem_1.cpp library.cpp Problem_2.cpp Problem_6.cpp main.cpp Project_5.cpp cmake-build-debug/Project_7.cpp cmake-build-debug/Problem_4.cpp Problem_3.cpp)