//
// Created by itssiem on 2/16/24.
//

#include "Trousers.h"

#include <sstream>

Trousers::Trousers(std::string brand, std::string model, int num_pockets): Article(brand, model) {
    m_num_pockets = num_pockets;
}

std::string Trousers::toString() {
    std::ostringstream ostr;
    ostr << m_brand << " " << m_model << " (" << m_num_pockets << ")";
    return ostr.str();
}

