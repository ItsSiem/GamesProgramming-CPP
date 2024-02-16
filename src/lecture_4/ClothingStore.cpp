//
// Created by itssiem on 2/16/24.
//

#include "ClothingStore.h"

#include <iostream>
#include <sstream>

#include "Jacket.h"
#include "Trousers.h"

ClothingStore::ClothingStore(std::string name) {
    m_name = name;
    m_num_articles = 0;
}

void ClothingStore::addArticle(std::string article) {
    // Parse article string
    std::string type;
    std::string brand;
    std::string model;
    int pockets;
    std::string hood;

    std::istringstream istr(article);
    istr >> type >> brand >> model;

    if(type == "jacket") {
        istr >> hood;
        m_articles[m_num_articles++] = new Jacket(brand, model, (hood == "true"));
    }
    if (type == "trousers") {
        istr >> pockets;
        m_articles[m_num_articles++] = new Trousers(brand, model, pockets);
    }
}

std::string ClothingStore::toString() {
    std::ostringstream ostr;
    ostr << m_name << " has " << m_num_articles << " articles";
    return ostr.str();
}

void ClothingStore::printArticles() {
    for (int i = 0; i < m_num_articles; ++i) {
        std::cout << m_articles[i]->toString() << std::endl;
    }
}


