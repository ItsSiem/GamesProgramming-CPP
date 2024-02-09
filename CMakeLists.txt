cmake_minimum_required(VERSION 3.20)
project(GP_CPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(GP_CPP main.cpp
        lecture1.h
        lecture1.cpp
        helpers.cpp
        helpers.h
        lecture2.cpp
        lecture2.h)
