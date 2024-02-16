//
// Created by itssiem on 2/16/24.
//

#include "Jacket.h"

#include <sstream>

Jacket::Jacket(std::string brand, std::string model, bool hood): Article(brand, model) {
    m_hood = hood;
}

std::string Jacket::toString() {
    std::ostringstream ostr;
    std::string hooded = m_hood ? " (hooded)" : "";
    ostr << m_brand << " " << m_model << hooded;
    return ostr.str();
}
