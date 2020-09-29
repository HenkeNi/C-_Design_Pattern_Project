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


void Hamburger::printIngredients() const
{
    
}

void Hamburger::eat() const
{
    std::cout << "Nom nom";
}

}
