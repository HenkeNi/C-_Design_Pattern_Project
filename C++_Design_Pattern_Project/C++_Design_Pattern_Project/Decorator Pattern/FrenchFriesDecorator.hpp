//
//  FrenchFriesDecorator.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef FrenchFriesDecorator_hpp
#define FrenchFriesDecorator_hpp

#include "IFrenchFries.hpp"
#include <stdio.h>

namespace burger_program {

class FrenchFriesDecorator : public IFrenchFries
{
protected:
    IFrenchFries& m_decorator;
    
public:
    FrenchFriesDecorator(IFrenchFries &decorator)
        : m_decorator{ decorator }
    {
    }
    
    virtual void snackOn() const override;
};


}

#endif /* FrenchFriesDecorator_hpp */
