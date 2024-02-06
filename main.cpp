#include <iostream>
#include "lecture1.h"

int main() {

    std::cout << "Exercise 1" << std::endl;
    std::cout << "add(1, 2)" << std::endl;
    std::cout << add(1, 2) << std::endl;

    std::cout << "Exercise 2" << std::endl;
    std::cout << "printEvenOrOdd(1)" << std::endl;
    printEvenOrOdd(1);
    std::cout << "printEvenOrOdd(2)" << std::endl;
    printEvenOrOdd(2);

    std::cout << "Exercise 3" << std::endl;
    std::cout << "exponent(2, 3)" << std::endl;
    std::cout << exponent(2, 4) << std::endl;
    std::cout << "exponent(2, 8)" << std::endl;
    std::cout << exponent(2, 8) << std::endl;

    std::cout << "Exercise 4" << std::endl;
    std::cout << "isPrime(3) PRIME" << std::endl;
    std::cout << isPrime(3) << std::endl;
    std::cout << "isPrime(69) PRIME" << std::endl;
    std::cout << isPrime(69) << std::endl;
    std::cout << "isPrime(420) NOT PRIME" << std::endl;
    std::cout << isPrime(420) << std::endl;

    std::cout << "Exercise 5" << std::endl;
    std::cout << "findIndex({4, 2, 1, 8}, 4, 1)" << std::endl;
    int array[] = {4, 2, 1, 8};
    std::cout << findIndex( array, 4, 1) << std::endl;

    return 0;
}
