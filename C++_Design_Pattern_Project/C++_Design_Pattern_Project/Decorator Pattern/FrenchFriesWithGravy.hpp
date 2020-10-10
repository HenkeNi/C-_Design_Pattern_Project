//
//  FrenchFriesWithGravy.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef FrenchFriesWithGravy_hpp
#define FrenchFriesWithGravy_hpp

#include "FrenchFriesDecorator.hpp"
#include <stdio.h>

namespace burger_program {

class FrenchFriesWithGravy : public FrenchFriesDecorator
{
  
public:
    FrenchFriesWithGravy(IFrenchFries &decorator)
        : FrenchFriesDecorator{ decorator }
    {
    }
    
    virtual void snackOn() const override;
    
};

}

#endif /* FrenchFriesWithGravy_hpp */
