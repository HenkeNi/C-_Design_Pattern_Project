//
//  FrenchFriesWithGravy.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "FrenchFriesWithGravy.hpp"
#include <iostream>

namespace burger_program {

void FrenchFriesWithGravy::make() const
{
    FrenchFriesDecorator::make();
    std::cout << " + gravy";
}

}
