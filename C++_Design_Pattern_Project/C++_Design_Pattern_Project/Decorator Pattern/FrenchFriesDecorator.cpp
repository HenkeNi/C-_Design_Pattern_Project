//
//  FrenchFriesDecorator.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "FrenchFriesDecorator.hpp"

namespace burger_program {

void FrenchFriesDecorator::snackOn() const
{
    m_decorator.snackOn();
}

}
