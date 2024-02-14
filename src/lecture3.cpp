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

void lectureThreeExercises() {
    std::cout << "Exercise 1" << std::endl;
    exerciseOne();

    std::cout << std::endl << "Exercise 2" << std::endl;

    std::cout << std::endl << "Exercise 3" << std::endl;

}
