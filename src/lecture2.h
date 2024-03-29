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

// vvv Exercises vvv
void LectureTwoExercises();

void simplifyFraction(int numerator, int denominator);

void exerciseTwo();

bool isPalindrome(char* cstr);

void printFile(const char* filename);

struct PlayerState {
    char name[20];
    int level;
    double health;
    int experience;
};