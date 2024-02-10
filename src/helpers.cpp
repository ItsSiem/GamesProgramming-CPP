#include "helpers.h"

#include <iostream>

void printIntArray(int array[], int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
