//
//  ISubject.h
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-10-02.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef ISubject_h
#define ISubject_h

#include "IObserver.hpp"

namespace burger_program {

class ISubject
{
public:
    virtual ~ISubject(){}
    virtual void attach(IObserver *observer) = 0;
    virtual void detach(IObserver *observer) = 0;
    virtual void notify() = 0;
};

}

#endif /* ISubject_h */
