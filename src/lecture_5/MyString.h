//
// Created by itssiem on 2/27/24.
//

#ifndef MYSTRING_H
#define MYSTRING_H
#include <string>


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
    char* toString();
    int length();
};



#endif //MYSTRING_H
