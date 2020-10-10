//
//  PlainFrenchFries.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef PlainFrenchFries_hpp
#define PlainFrenchFries_hpp

#include "IFrenchFries.hpp"
#include <stdio.h>

namespace burger_program {

class PlainFrenchFries : public IFrenchFries
{
    
public:
    virtual void snackOn() const override;
};

}

#endif /* PlainFrenchFries_hpp */
