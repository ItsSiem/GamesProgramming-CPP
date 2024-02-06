//
// Created by itssiem on 2/6/24.
//

#include "lecture1.h"

#include <iostream>
#include <cmath>

int add(int a, int b) {
    return a + b;
}

bool isEven(int n) {
    return n % 2;
}

void printEvenOrOdd(int n) {
    if (isEven(n)) {
        std::cout << "oneven" << std::endl;
    }
    else {
        std::cout << "even" << std::endl;
    }
}

int exponent(int base, int exp) {
    if(exp == 0) {
        return 0;
    }
    return base * base + exponent(base, --exp);
}

bool isPrime(int n) {
    if (n == 1 || n == 3) {
        return true;
    }
    for (int d = 5; d < sqrt(n); d++) {
        if (n % d == 0) {
            return false;
        }
    }
    return true;
}