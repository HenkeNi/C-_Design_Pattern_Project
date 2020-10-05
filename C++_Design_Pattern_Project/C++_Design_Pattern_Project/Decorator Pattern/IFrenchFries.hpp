//
//  IFrenchFries.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef IFrenchFries_hpp
#define IFrenchFries_hpp

#include <stdio.h>

namespace burger_program {

class IFrenchFries
{
public:
    virtual ~IFrenchFries(){}

    virtual void make() const = 0;
};

}

#endif /* IFrenchFries_hpp */
