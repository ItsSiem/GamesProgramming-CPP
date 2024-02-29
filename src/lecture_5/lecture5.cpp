//
// Created by itssiem on 2/27/24.
//

#include <iostream>
#include <ostream>

#include "MyString.h"

void lecture5_practice() {
    // vvv Practice during lecture vvv
    MyString str1("Test String");
    std::cout << "str=" << str1.toString() << std::endl;
    std::cout << "len=" << str1.length() << std::endl;

    MyString str2 = str1;
    std::cout << "str=" << str2.toString() << std::endl;
    std::cout << "len=" << str2.length() << std::endl;

    MyString str3("First");
    MyString str4("Second");
    str3 += str4;
    std::cout << "str=" << str3.toString() << std::endl;
    std::cout << "len=" << str3.length() << std::endl;

    MyString str5("First Second Third");
    str5.replace(6, 0,  MyString("First"));
    std::cout << "str=" << str5.toString() << std::endl;
    std::cout << "len=" << str5.length() << std::endl;

    MyString str6("abcdefg");
    MyString search("cde");
    std::cout << str6.toString() << " search " << search.toString() << " " << str6.search(search) << std::endl;

    MyString str7("tOuPpEr");
    std::cout << str7.toupper().toString() << std::endl;
    MyString str8("tOlOwEr");
    std::cout << str8.tolower().toString() << std::endl;

}