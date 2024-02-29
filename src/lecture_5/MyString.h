//
// Created by itssiem on 2/27/24.
//

#ifndef MYSTRING_H
#define MYSTRING_H
#include <ostream>


class MyString {
private:
    char* str;
    int len;
public:
    MyString();
    MyString(const char* s);
    MyString(const MyString& s);
    ~MyString();
    MyString& operator=(const MyString&);
    MyString& operator+=(const MyString&);
    // char operator[](const int) const;
    // void replace(const int begin, const int end, const MyString&);
    // bool search(const MyString) const;
    // MyString& toupper() const;
    // MyString& tolower() const;

    char* toString();
    int length();
};

bool operator !=(const MyString&, const MyString&);
bool operator < (const MyString&, const MyString&);
bool operator > (const MyString&, const MyString&);
MyString operator+ (const MyString&, const MyString&);
std::ostream & operator<<(std::ostream, const MyString&);

#endif //MYSTRING_H
