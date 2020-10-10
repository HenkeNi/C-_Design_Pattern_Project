//
//  BeefBurger.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "BeefBurger.hpp"
#include <iostream>

namespace burger_program {

void BeefBurger::eat() 
{
    // if burger is already eaten or not
    m_isEaten ? std::cout << "You already ate it, remember?" : std::cout << "Nom nom, the " << m_burgerName << " was very nice and juicy\n";
    m_isEaten = true;
}



}
