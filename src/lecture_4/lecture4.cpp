//
// Created by itssiem on 2/16/24.
//

#include "lecture4.h"

#include <iostream>
#include <ostream>

#include "ClothingStore.h"

void printLecturePractice() {
    ClothingStore store("Wehkamp");
    store.addArticle("trousers Levi's 501 5");
    store.addArticle("trousers PME Commander 6");
    store.addArticle("jacket G-star Anorak true");
    store.addArticle("jacket G-star Harrington false");
    std::cout << store.toString() << std::endl;;
    store.printArticles();
}
