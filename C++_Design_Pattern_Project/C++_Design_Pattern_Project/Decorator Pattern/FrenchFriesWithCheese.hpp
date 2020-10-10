//
//  FrenchFriesWithCheese.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef FrenchFriesWithCheese_hpp
#define FrenchFriesWithCheese_hpp

#include "FrenchFriesDecorator.hpp"
#include "IFrenchFries.hpp"
#include <stdio.h>

namespace burger_program {

class FrenchFriesWithCheese : public FrenchFriesDecorator
{
  
public:
    FrenchFriesWithCheese(IFrenchFries &decorator)
        : FrenchFriesDecorator{ decorator }
    {
    }
    
    virtual void snackOn() const override;
};

}

#endif /* FrenchFriesWithCheese_hpp */
