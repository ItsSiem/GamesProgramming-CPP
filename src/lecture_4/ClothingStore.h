//
// Created by itssiem on 2/16/24.
//
#ifndef CLOTHINGSTORE_H
#define CLOTHINGSTORE_H

#include "Article.h"

class ClothingStore {
private:
    std::string m_name;
    Article* m_articles[100];
    int m_num_articles;
public:
    ClothingStore(std::string name);
    void addArticle(std::string article);
    std::string toString();
    void printArticles();
};
#endif // CLOTHINGSTORE_H
