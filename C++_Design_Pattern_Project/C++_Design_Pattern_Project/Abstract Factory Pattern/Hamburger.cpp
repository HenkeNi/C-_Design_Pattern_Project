//
//  Hamburger.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Hamburger.hpp"
#include <iostream>

namespace burger_program {

std::ostream& operator<< (std::ostream &out, const Hamburger &burger)
{
    out << burger.m_productName;
    return out;
}


Hamburger& Hamburger::setProductName(const std::string &name)
{
    m_productName = name;
    return *this;
}


Hamburger& Hamburger::addIngredient(std::unique_ptr<Ingredient> ingredient)
{
    m_ingredients.push_back(std::move(ingredient));
    return *this;
}


void Hamburger::printIngredients() const
{
    
}



}
