//
// Created by itssiem on 2/27/24.
//

#include "MyString.h"

#include <iostream>
#include <ostream>
#include <sstream>

MyString::MyString() {
    // std::cout << "Called MyString default constructor" << std::endl;
    str = nullptr;
    len = 0;
}

MyString::MyString(const char *s) {
    // std::cout << "Called MyString char* constructor" << std::endl;
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
    // std::cout << "Called MyString reference constructor" << std::endl;
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
    // std::cout << "MyString::operator=(const MyString&)" << std::endl;
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

MyString &MyString::operator+=(const MyString &s) {
    MyString ostr = *this;
    int olen = len;
    delete[] str;

    len += s.len;
    str = new char[len + 1];

    int i = 0;
    while (ostr[i] != '\0') {
        str[i] = ostr[i];
        i++;
    }
    while (i <= len) {
        str[i] = s[i - olen];
        i++;
    }
    return *this;
}

char MyString::operator[](const int i) const {
    return str[i];
}

void MyString::replace(const int begin, const int end, const MyString& string) {
    // TODO: Why would we need the end index?
    for (int i = begin; i < len && i - begin < string.len; ++i) {
        str[i] = string[i - begin];
    }
}

bool MyString::search(const MyString string) const {
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < string.len; ++j) {
            if (str[i + j] != string[j]) {
                goto continue2;;
            }
        }
        return true;
        continue2:;
    }
    return false;
}


char* MyString::toString() {
    return str;
}

int MyString::length() {
    return len;
}

