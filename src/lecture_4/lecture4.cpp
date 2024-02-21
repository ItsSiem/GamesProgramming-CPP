//
// Created by itssiem on 2/16/24.
//

#include "lecture4.h"

#include <iostream>
#include <ostream>

#include "ClothingStore.h"
#include "MyClass.h"

void printLecturePractice() {
    std::cout << "vvv Practice during lecture vvv" << std::endl;

    ClothingStore store("Wehkamp");
    store.addArticle("trousers Levi's 501 5");
    store.addArticle("trousers PME Commander 6");
    store.addArticle("jacket G-star Anorak true");
    store.addArticle("jacket G-star Harrington false");
    std::cout << store.toString() << std::endl;;
    store.printArticles();

    std::cout << "vvv Exercies Lecture 4 vvv" << std::endl;
    std::cout << "Exercise 1" << std::endl;
    MyClass test1;
    test1.print();
    MyClass test2(1, 2);
    test2.print();
    test1.setX(20);
    test1.print();
    test1.setP(30);
    test1.print();
}
