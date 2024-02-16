#ifndef ARTICLE_H
#define ARTICLE_H
#include <string>
//
// Created by itssiem on 2/16/24.
//
class Article {
public:
        virtual std::string toString() = 0;
protected:
        Article(std::string brand, std::string model);
        std::string m_brand;
        std::string m_model;
};
#endif // ARTICLE_H
