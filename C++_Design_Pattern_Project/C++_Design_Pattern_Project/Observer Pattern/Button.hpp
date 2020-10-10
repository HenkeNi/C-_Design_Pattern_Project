//
//  Button.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-10-05.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Button_hpp
#define Button_hpp

#include "ISubject.h"
#include <stdio.h>
#include <list>

// ADD number of times pressed button
namespace burger_program {

class Button : public ISubject
{
private:
    std::list<IObserver*> m_observer;
    
public:
    
    virtual void attach(IObserver *observer) override;
    virtual void detach(IObserver *observer) override;
    virtual void notify() override;
    
    void pressButton();
};


}

#endif /* Button_hpp */
