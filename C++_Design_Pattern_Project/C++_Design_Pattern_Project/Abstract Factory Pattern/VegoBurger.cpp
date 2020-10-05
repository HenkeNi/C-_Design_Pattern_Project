//
//  VegoBurger.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "VegoBurger.hpp"
#include <iostream>

namespace burger_program {

void VegoBurger::eat()
{
    m_isEaten ? std::cout << "You already ate it, remember?" : std::cout << "Nom nom, this " << m_burgerName << " taste a bit spongy";
    m_isEaten = true;
}

}
