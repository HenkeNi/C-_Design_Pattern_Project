//
//  IBurgerFactory.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef IBurgerFactory_hpp
#define IBurgerFactory_hpp

#include "Hamburger.hpp"
#include <stdio.h>

namespace burger_program {

class IBurgerFactory
{
public:
    virtual ~IBurgerFactory(){}
    virtual std::unique_ptr<Hamburger> makePlainBurger()       const = 0;
    virtual std::unique_ptr<Hamburger> makeCheeseBurger()      const = 0;
    virtual std::unique_ptr<Hamburger> makeDoubleExtraBurger() const = 0;
};

}

#endif /* IBurgerFactory_hpp */
