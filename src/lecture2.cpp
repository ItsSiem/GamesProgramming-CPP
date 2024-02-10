//
// Created by itssiem on 2/9/24.
//

#include "lecture2.h"
#include "lecture1.h"
#include <fstream>
#include <iostream>

// vvv Practice during lecture vvv
void printStudents(const char filename[]) {
    Student student;

    std::ifstream file;
    file.open(filename, std::ios::binary);

    if (file.fail()) {
        std::cerr << filename << " could not be opened" << std::endl;
        return;
    }

    file.read((char *) &student, sizeof(student));
    while (!file.eof()) {
        std::cout << student.name << std::endl;
        std::cout << student.number << std::endl;
        std::cout << student.birth.day << " " << student.birth.month << " " << student.birth.year << std::endl;
        std::cout << std::endl;
        file.read((char *) &student, sizeof(student));
    }
    file.close();
}

// vvv Exercises vvv

void simplifyFraction(int numerator, int denominator) {
    int gcd = greatestCommonDivisor(numerator, denominator);
    std::cout << "Fraction(" << numerator << "/" << denominator << ") = " << numerator / gcd << "/" << denominator / gcd << std::endl;
}


void LectureTwoExercises() {
    std::cout << "Exercise 1" << std::endl;
    simplifyFraction(48, 18);
    simplifyFraction(7, 4);
    simplifyFraction(15, 90);

    std::cout << "Exercise 2" << std::endl;

    std::cout << "Exercise 3" << std::endl;

    std::cout << "Exercise 4" << std::endl;

    std::cout << "Exercise 5" << std::endl;
}