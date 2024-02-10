cmake_minimum_required(VERSION 3.20)
project(GP_CPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(GP_CPP src/main.cpp
        src/lecture1.h
        src/lecture1.cpp
        src/helpers.cpp
        src/helpers.h
        src/lecture2.cpp
        src/lecture2.h)
