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

void exerciseTwo() {
    char names[3][7] = { "Albert", "Alan", "Chris" };
    int count = 0;
    for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
        for (int j = 0; j < sizeof(names[0]) / sizeof(char); j++) {
            char c = names[i][j];

            // If the current character is a NULL and the previous character was an ascii character
            if(c == '\0') {
                std::cout << std::endl;
                count++;
                break;
            }
            std::cout << c;
        }
    }

    std::cout << "Names: " << count << std::endl;
}

void LectureTwoExercises() {
    std::cout << "Exercise 1" << std::endl;
    simplifyFraction(48, 18);
    simplifyFraction(7, 4);
    simplifyFraction(15, 90);

    std::cout << "Exercise 2" << std::endl;
    exerciseTwo();

    std::cout << "Exercise 3" << std::endl;

    std::cout << "Exercise 4" << std::endl;

    std::cout << "Exercise 5" << std::endl;
}