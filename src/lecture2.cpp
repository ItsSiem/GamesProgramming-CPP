//
// Created by itssiem on 2/9/24.
//

#include "lecture2.h"

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

