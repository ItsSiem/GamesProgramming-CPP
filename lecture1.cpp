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

int findIndex(int array[], int length, int value) {
    for (int i = 0; i < length; i++) {
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}

void swap(int* ap, int* bp) {
    int temp= *ap;
    *ap = *bp;
    *bp = temp;
}

void sortArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if(array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}

// Sauce: https://en.wikipedia.org/wiki/Euclidean_algorithm#Implementations
int greatestCommonDivisor(int a, int b) {
    if (b == 0) {
        return a;
    }
    return greatestCommonDivisor(b, a % b);
}

int leastCommonMultiple(int a, int b) {
    return (a * b) / greatestCommonDivisor(a, b);
}
