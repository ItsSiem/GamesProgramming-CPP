//
// Created by itssiem on 2/13/24.
//

#include <cstdlib>
#include <iostream>

// vvv Practice during lecture vvv
int myCompare(const void* a, const void* b) {
    int aValue = * (int *) a;
    int bValue = * (int *) b;
    return aValue - bValue;
}

void qSortCall() {
    int a[] = {7, 1, 5, 2, 3};
    qsort((void*)a, 5, sizeof(int), myCompare);
    for(int i = 0; i < 5; i++) {
        std::cout << a[i] << std::endl;
    }
}

// vvv Exercises vvv

void exerciseOne() {
    // Create pointers and assign memory
    int* p = new int;
    int* q = new int;
    int* r;

    // Set values
    *p = 2;
    *q = 3;
    std::cout << "p=" << *p << ", q=" << *q << std::endl;

    // Swap pointers
    r = p;
    p = q;
    q = r;

    std::cout << "p=" << *p << ", q=" << *q << std::endl;

    // Free memory
    delete p;
    p = nullptr;
    delete q;
    q = nullptr;
}

int* createSequence(int n) {
    int* a = new int[n];
    for (int i = 0; i < n; ++i) {
        a[i] = i + 1;
    }
    return a;
}

void exerciseTwo() {
    int n = 10;
    int* array = createSequence(n);

    for (int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete array;
    array = nullptr;
}

int** createPascalsTriangle(int n) {
    int** rows = new int*[n];
    for (int i = 0; i < n; ++i) {
        rows[i] = new int[i + 1];
        rows[i][0] = 1;
        rows[i][i] = 1;
        for (int j = 1; j < i; ++j) {
            rows[i][j] = rows[i-1][j] + rows[i-1][j-1];
        }
    }
    return rows;
}

void printPascalsTriangle(int** p, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            std::cout << p[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void cleanPascalsTriangle(int** p, int n) {
    for (int i = 0; i < n; ++i) {
        delete p[i];
        p[i] = nullptr;
    }
    delete p;
    p = nullptr;
}

void lectureThreeExercises() {
    std::cout << "Exercise 1" << std::endl;
    exerciseOne();

    std::cout << std::endl << "Exercise 2" << std::endl;
    exerciseTwo();

    std::cout << std::endl << "Exercise 3" << std::endl;
    int n = 8;
    int** p = createPascalsTriangle(n);
    printPascalsTriangle(p, n);
    cleanPascalsTriangle(p, n);
}
