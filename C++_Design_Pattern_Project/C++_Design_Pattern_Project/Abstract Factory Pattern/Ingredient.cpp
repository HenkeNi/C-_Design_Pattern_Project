//
//  Ingredient.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Ingredient.hpp"
#include <iostream>

namespace burger_program {

// overloading of << operator; enables printing of an instance of the class
std::ostream& operator<< (std::ostream &out, const Ingredient &i)
{
    out << i.m_productName << ' ' << i.m_productVolume << i.m_unitOfMeasurement << '\n';
    return out;
}


}
