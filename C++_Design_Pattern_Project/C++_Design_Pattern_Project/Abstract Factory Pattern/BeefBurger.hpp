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
    BeefBurger(const std::string &name)
        : Hamburger{ name }
    {
    }
    
    
    virtual void eat() const override;
    
    //virtual bool getIsVegetarian() const override { return false; }
};

}

#endif /* BeefBurger_hpp */
