//
//  BeefBurger.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef BeefBurger_hpp
#define BeefBurger_hpp

#include "Hamburger.hpp"
#include <stdio.h>
#include <string>

namespace burger_program {

class BeefBurger : public Hamburger
{
    
public:
    BeefBurger()
    {
    }
    
    virtual void eat() override;
};

}

#endif /* BeefBurger_hpp */
