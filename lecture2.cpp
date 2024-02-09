//
// Created by itssiem on 2/9/24.
//

#include "lecture2.h"

#include <fstream>
#include <iostream>

struct Date {
    int day;
    char month[30];
    int year;
};

struct Student {
    int number;
    char name[40];
    Date birth;
};

void showStudents(const char filename[]) {
    Student student;

    std::ifstream file;
    file.open(filename, std::ios::binary);
    file.read((char *) &student, sizeof(student));
    while (!file.eof()) {
        std::cout << student.name << std::endl;
        std::cout << student.number << std::endl;
        std::cout << student.birth.year << "-" << student.birth.month << "-" << student.birth.day << std::endl;
        std::cout << std::endl;
        file.read((char *) &student, sizeof(student));
    }
    file.close();

}