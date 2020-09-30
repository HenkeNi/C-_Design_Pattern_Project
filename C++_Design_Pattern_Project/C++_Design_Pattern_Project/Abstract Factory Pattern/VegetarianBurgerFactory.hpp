//
//  VegetarianBurgerFactory.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-29.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef VegetarianBurgerFactory_hpp
#define VegetarianBurgerFactory_hpp

#include "IBurgerFactory.hpp"
#include <stdio.h>

namespace burger_program {

class VegetarianBurgerFactory : public IBurgerFactory
{
public:
    virtual std::unique_ptr<Hamburger> makePlainBurger()        const override;
    virtual std::unique_ptr<Hamburger> makeCheeseBurger()       const override;
    virtual std::unique_ptr<Hamburger> makeDoubleDeluxeBurger() const override;
};

}

#endif /* VegetarianBurgerFactory_hpp */
