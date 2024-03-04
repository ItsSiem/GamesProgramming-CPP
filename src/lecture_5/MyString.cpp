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
    MyString concat = *this + s;
    len = concat.length();
    delete[] str;
    str = new char[len];
    // Todo: Ask how this can be done cleaner
    for (int i = 0; i <= len; ++i) {
        str[i] = concat[i];
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

char ctoupper(char c) {
    if(islower(c)) {
        return c - 32;
    }
    return c;
}

char ctolower(char c) {
    if(isupper(c)) {
        return c + 32;
    }
    return c;
}

bool isupper(char c) {
    const int ascii_upper_start = 65;
    const int ascii_upper_end = 90;
    return c >= ascii_upper_start && c <= ascii_upper_end;
}

bool islower(char c) {
    const int ascii_lower_start = 97;
    const int ascii_lower_end = 122;
    return c >= ascii_lower_start && c <= ascii_lower_end;
}

MyString &MyString::toupper() const {
    MyString* s = new MyString(str);
    for (int i = 0; i < len; ++i) {
        s->str[i] = ctoupper(str[i]);
    }
    return *s;
}

MyString &MyString::tolower() const {
    MyString* s = new MyString(str);
    for (int i = 0; i < len; ++i) {
        s->str[i] = ctolower(str[i]);
    }
    return *s;
}


char* MyString::toString() const {
    return str;
}

int MyString::length() const {
    return len;
}

bool operator ==(const MyString& a, const MyString& b) {
    if (a.length() != b.length())
        return false;
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

bool operator !=(const MyString& a, const MyString& b) {
    return !(a == b);
}

bool operator<(const MyString& a, const MyString& b) {
    int length = std::max(a.length(), b.length());
    MyString a_normalized = a.tolower();
    MyString b_normalized = b.tolower();

    while (a_normalized.length() < length) {
        a_normalized += "_";
    }
    while (b_normalized.length() < length) {
        b_normalized += "_";
    }

    // Search for the first inequality
    for (int i = 0; i < length; ++i) {
        if(a_normalized[i] != b_normalized[i]) {
            return a_normalized[i] < b_normalized[i];
        }
    }
}

bool operator>(const MyString& a, const MyString& b) {
    int length = std::max(a.length(), b.length());
    MyString a_normalized = a.tolower();
    MyString b_normalized = b.tolower();

    while (a_normalized.length() < length) {
        a_normalized += "_";
    }
    while (b_normalized.length() < length) {
        b_normalized += "_";
    }

    // Search for the first inequality
    for (int i = 0; i < length; ++i) {
        if(a_normalized[i] != b_normalized[i]) {
            return a_normalized[i] > b_normalized[i];
        }
    }
}

MyString operator+(const MyString& a, const MyString& b) {
    int length = a.length() + b.length();
    char* str = new char[length + 1];

    int i = 0;
    while (a[i] != '\0') {
        str[i] = a[i];
        i++;
    }
    while (i <= length) {
        str[i] = b[i - a.length()];
        i++;
    }
    return *new MyString(str);
}

std::ostream& operator<<(std::ostream& stream, const MyString& string) {
    stream << string.toString();
    return stream;
}
