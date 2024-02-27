//
// Created by itssiem on 2/27/24.
//

#include "MyString.h"

#include <iostream>
#include <ostream>
#include <sstream>

MyString::MyString() {
    std::cout << "Called MyString default constructor" << std::endl;
    str = nullptr;
    len = 0;
}

MyString::MyString(const char *s) {
    std::cout << "Called MyString char* constructor" << std::endl;
    len = 0;
    while (s[len] != '\0') {
        len++;
    }
    str = new char[len + 1];
    for (int i = 0; i <= len; ++i) {
        str[i] = s[i];
    }
}

MyString::MyString(const MyString &s) {
    std::cout << "Called MyString reference constructor" << std::endl;
    len = s.len;
    str = new char[len];
    for (int i = 0; i <= len; ++i) {
        str[i] = s.str[i];
    }
}

MyString::~MyString() {
    delete[] str;
    str = nullptr;
    len = 0;
}

MyString &MyString::operator=(const MyString &s) {
    std::cout << "MyString::operator=(const MyString&)" << std::endl;
    if (str != nullptr) {
        delete[] str;
    }
    len = s.len;
    str = new char[len];
    for (int i = 0; i <= len; ++i) {
        str[i] = s.str[i];
    }
    return *this;
}


char* MyString::toString() {
    return str;
}

int MyString::length() {
    return len;
}

