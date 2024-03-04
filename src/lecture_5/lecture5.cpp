//
// Created by itssiem on 2/27/24.
//

#include <iostream>
#include <ostream>

#include "MyString.h"

void lecture5_practice() {
    // vvv Practice during lecture vvv
    MyString str1("Test String");
    std::cout << "str=" << str1 << std::endl;
    std::cout << "len=" << str1.length() << std::endl;

    MyString str2 = str1;
    std::cout << "str=" << str2 << std::endl;
    std::cout << "len=" << str2.length() << std::endl;

    MyString str3("First");
    MyString str4("Second");
    str3 += str4;
    std::cout << "str=" << str3 << std::endl;
    std::cout << "len=" << str3.length() << std::endl;

    MyString str5("First Second Third");
    str5.replace(6, 0,  MyString("First"));
    std::cout << "str=" << str5 << std::endl;
    std::cout << "len=" << str5.length() << std::endl;

    MyString str6("abcdefg");
    MyString search("cde");
    std::cout << str6 << " search " << search << " " << str6.search(search) << std::endl;

    MyString str7("tOuPpEr");
    std::cout << str7.toupper() << std::endl;
    MyString str8("tOlOwEr");
    std::cout << str8.tolower() << std::endl;

    MyString str9("12345");
    MyString str10("12345");
    std::cout << (str9 == str10) << std::endl;

    MyString str11("abc");
    MyString str12("def");
    std::cout << (str11 + str12) << std::endl;

    MyString str13("aaa");
    MyString str14("aab");
    std::cout << (str13 < str14) << std::endl;

    MyString str15("xx");
    MyString str16("aaaaaa");
    std::cout << (str15 < str16) << std::endl;

}