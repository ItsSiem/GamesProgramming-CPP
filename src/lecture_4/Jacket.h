//
// Created by itssiem on 2/16/24.
//

#ifndef JACKET_H
#define JACKET_H
#include <string>

#include "Article.h"


class Jacket : public Article{
private:
    bool m_hood;
public:
    Jacket(std::string brand, std::string model, bool hood);
    std::string toString();
};



#endif //JACKET_H
