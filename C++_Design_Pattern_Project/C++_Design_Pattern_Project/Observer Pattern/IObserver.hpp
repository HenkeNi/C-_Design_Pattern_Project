//
//  IObserver.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-10-02.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef IObserver_hpp
#define IObserver_hpp

#include <stdio.h>
#include <string>

namespace burger_program {

class IObserver
{
public:
    virtual ~IObserver(){}
    virtual void update() = 0; // pass anything from subject to observer in this function
};

}

#endif /* IObserver_hpp */
