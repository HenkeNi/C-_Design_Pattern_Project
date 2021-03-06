//
//  VegoBurger.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef VegoBurger_hpp
#define VegoBurger_hpp

#include "Hamburger.hpp"
#include <stdio.h>
#include <string>

namespace burger_program {

class VegoBurger : public Hamburger
{
    
public:
    VegoBurger()
    {
    }
    
    virtual void eat() override;
};

}

#endif /* VegoBurger_hpp */
