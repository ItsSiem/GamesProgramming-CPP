//
// Created by itssiem on 2/16/24.
//

#ifndef TROUSERS_H
#define TROUSERS_H
#include "Article.h"


class Trousers : public Article{
private:
    int m_num_pockets;
public:
    Trousers(std::string brand, std::string model, int num_pockets);
    std::string toString();
};



#endif //TROUSERS_H
