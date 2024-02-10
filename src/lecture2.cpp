//
// Created by itssiem on 2/9/24.
//

#include "lecture2.h"

#include <cstring>

#include "lecture1.h"
#include <fstream>
#include <iostream>
#include <sstream>

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

bool isPalindrome(char *cstr) {

    int length = strlen(cstr);

    char reverse[length];
    reverse[length] = '\0';
    for (int i = 0; length-- > 0; i++) {
        reverse[i] = cstr[length];
    }

    length = strlen(cstr);
    for (int i = 0; i <= length; ++i) {
        char a = reverse[i];
        char b = cstr[i];
        if (a != b) {
            return false;
        }
    }
    return true;
}

void printFile(const char *filename) {
    std::ifstream file;
    file.open(filename);
    if (file.fail()) {
        std::cerr << "Could not open " << filename << std::endl;
    }

    std::string buf;
    while (getline(file, buf)) {
        std::cout << buf << std::endl;
    }
}

void savePlayerStates(char *filename, PlayerState *states, int stateSize) {
    std::ofstream file(filename);
    for (int i = 0; i < stateSize; ++i) {
        file.write((char *) &states[i], sizeof(PlayerState));
    }
    file.close();
}

void loadPlayerStates(char *filename) {
    PlayerState player;
    std::ifstream saveFile(filename, std::ios::binary);
    std::ofstream namesFile("names.txt");
    if(saveFile.fail()) {
        std::cerr << "Could not open " << filename << std::endl;
    }

    saveFile.read((char *) &player, sizeof(player));
    while(!saveFile.eof()) {
        namesFile << player.name << std::endl;
        saveFile.read((char *) &player, sizeof(player));
    }
}

void printPlayer(PlayerState player) {
    std::cout << player.name << std::endl;
    std::cout << player.level << " LVL" << std::endl;
    std::cout << player.experience << " EXP" << std::endl;
    std::cout << player.health << " HP" << std::endl;
}

void exerciseFive() {
    PlayerState players[3];
    strcpy(players[0].name, "Player One");
    players[0].level = 1;
    players[0].health = 75;
    players[0].experience = 1500;

    strcpy(players[1].name, "Player Two");
    players[1].level = 18;
    players[1].health = 98;
    players[1].experience = 8302;

    strcpy(players[2].name, "Player Three");
    players[2].level = 58;
    players[2].health = 120;
    players[2].experience = 35420;

    for (int i = 0; i < sizeof(players) / sizeof(PlayerState); ++i) {
        printPlayer(players[i]);
        std::cout << std::endl;
    }

    savePlayerStates("game.dat", players, sizeof(players) / sizeof(PlayerState));

    loadPlayerStates("game.dat");
}

void LectureTwoExercises() {
    std::cout << "Exercise 1" << std::endl;
    simplifyFraction(48, 18);
    simplifyFraction(7, 4);
    simplifyFraction(15, 90);

    std::cout << std::endl << "Exercise 2" << std::endl;
    exerciseTwo();

    std::cout << std::endl << "Exercise 3" << std::endl;
    std::cout << "isPalindrome(abba) : "<< isPalindrome("abba") << std::endl;
    std::cout << "isPalindrome(parterretrap) : " << isPalindrome("parterretrap") << std::endl;
    std::cout << "isPalindrome(notthisone) : " << isPalindrome("notthisone") << std::endl;

    std::cout << std::endl << "Exercise 4" << std::endl;
    printFile("../src/lecture2.cpp");

    std::cout << std::endl << "Exercise 5" << std::endl;
    exerciseFive();
}