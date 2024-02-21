//
// Created by itssiem on 2/21/24.
//

#include "MyClass.h"

#include <iostream>

MyClass::MyClass() {
    setX(0);
    p = nullptr;
}

MyClass::MyClass(int number1, int number2) {
    setX(number1);
    p = nullptr;
    setP(number2);
}

MyClass::~MyClass() {
    delete p;
    p = nullptr;
}

void MyClass::setX(int number) {
    x = number;
}

void MyClass::setP(int number) {
    if(p == nullptr) {
        p = new int;
    }
    *p = number;
}

void MyClass::removeP() {
    delete p;
    p = nullptr;
}


void MyClass::print() {
    std::cout << "x=" << x;
    if(p != nullptr) {
        std::cout << ", *p=" << *p;
    }
    std::cout << std::endl;
}


