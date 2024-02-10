//
// Created by itssiem on 2/6/24.
//

#include "lecture1.h"

#include <iostream>
#include <cmath>

#include "helpers.h"

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

void printExercises() {
    std::cout << "Exercise 1" << std::endl;
    std::cout << "add(1, 2)" << std::endl;
    std::cout << add(1, 2) << std::endl;

    std::cout << std::endl;

    std::cout << "Exercise 2" << std::endl;
    std::cout << "printEvenOrOdd(1)" << std::endl;
    printEvenOrOdd(1);
    std::cout << "printEvenOrOdd(2)" << std::endl;
    printEvenOrOdd(2);

    std::cout << std::endl;

    std::cout << "Exercise 3" << std::endl;
    std::cout << "exponent(2, 3)" << std::endl;
    std::cout << exponent(2, 4) << std::endl;
    std::cout << "exponent(2, 8)" << std::endl;
    std::cout << exponent(2, 8) << std::endl;

    std::cout << std::endl;

    std::cout << "Exercise 4" << std::endl;
    std::cout << "isPrime(3) PRIME" << std::endl;
    std::cout << isPrime(3) << std::endl;
    std::cout << "isPrime(69) PRIME" << std::endl;
    std::cout << isPrime(69) << std::endl;
    std::cout << "isPrime(420) NOT PRIME" << std::endl;
    std::cout << isPrime(420) << std::endl;

    std::cout << std::endl;

    std::cout << "Exercise 5" << std::endl;
    std::cout << "findIndex({4, 2, 1, 8}, 4, 1)" << std::endl;
    int exFive[] = {4, 2, 1, 8};
    std::cout << findIndex( exFive, 4, 1) << std::endl;

    std::cout << std::endl;

    std::cout << "Exercise 6" << std::endl;
    std::cout << "sortArray({5, 4, 1, 7 ,6}, 5)" << std::endl;
    int exSix[] = {5, 4, 1, 7 ,6};
    printIntArray(exSix, 5);
    sortArray(exSix, 5);
    printIntArray(exSix, 5);

    std::cout << std::endl;

    std::cout << "Exercise 7" << std::endl;
    std::cout << "greatestCommonDivisor(24, 8)" << std::endl;
    std::cout << greatestCommonDivisor(24, 8) << std::endl;
    std::cout << "greatestCommonDivisor(105, 252)" << std::endl;
    std::cout << greatestCommonDivisor(105, 252) << std::endl;
    std::cout << "greatestCommonDivisor(13, 29)" << std::endl;
    std::cout << greatestCommonDivisor(13, 29) << std::endl;

    std::cout << std::endl;

    std::cout << "Exercise 8" << std::endl;
    std::cout << "leastCommonMultiple(24, 8)" << std::endl;
    std::cout << leastCommonMultiple(24, 8) << std::endl;
    std::cout << "leastCommonMultiple(105, 252)" << std::endl;
    std::cout << leastCommonMultiple(105, 252) << std::endl;
    std::cout << "leastCommonMultiple(13, 29)" << std::endl;
    std::cout << leastCommonMultiple(13, 29) << std::endl;
}