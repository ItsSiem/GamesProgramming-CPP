cmake_minimum_required(VERSION 3.20)
project(GP_CPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(GP_CPP src/main.cpp
        src/helpers.cpp
        src/helpers.h
        src/lecture3.cpp
        src/lecture3.h)
