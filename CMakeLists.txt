cmake_minimum_required(VERSION 3.20)
project(GP_CPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(GP_CPP src/main.cpp
        src/helpers.cpp
        src/helpers.h
        src/lecture3.cpp
        src/lecture3.h
        src/lecture_4/Article.cpp
        src/lecture_4/Article.h
        src/lecture_4/ClothingStore.cpp
        src/lecture_4/ClothingStore.h
        src/lecture_4/lecture4.cpp
        src/lecture_4/lecture4.h
        src/lecture_4/Trousers.cpp
        src/lecture_4/Trousers.h
        src/lecture_4/Jacket.cpp
        src/lecture_4/Jacket.h
        src/lecture_4/MyClass.cpp
        src/lecture_4/MyClass.h
        src/lecture_4/MyStack.cpp
        src/lecture_4/MyStack.h
        src/lecture_5/MyString.cpp
        src/lecture_5/MyString.h
        src/lecture_5/lecture5.cpp
        src/lecture_5/lecture5.h)
