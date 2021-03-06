//
//  FrenchFriesWithCheese.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "FrenchFriesWithCheese.hpp"
#include <iostream>

namespace burger_program {

void FrenchFriesWithCheese::snackOn() const
{
    FrenchFriesDecorator::snackOn();
    std::cout << " with cheese";
}

}
