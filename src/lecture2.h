//
// Created by itssiem on 2/9/24.
//

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

void printStudents(const char filename[]);
