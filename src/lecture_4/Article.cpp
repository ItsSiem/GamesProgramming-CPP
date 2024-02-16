//
// Created by itssiem on 2/16/24.
//

#include "Article.h"

#include <sstream>

Article::Article(std::string brand, std::string model) {
    m_brand = brand;
    m_model = model;
}

std::string Article::toString() {
    std::ostringstream ostr;
    ostr << m_brand << " " << m_model;
    return ostr.str();
}

