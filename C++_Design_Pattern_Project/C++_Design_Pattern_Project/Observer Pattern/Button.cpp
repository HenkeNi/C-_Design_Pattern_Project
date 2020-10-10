//
//  Button.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-10-05.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Button.hpp"

namespace burger_program {

void Button::attach(IObserver *observer)
{
    if (observer)
        m_observer.push_back(observer);
}

void Button::detach(IObserver *observer)
{
    m_observer.remove(observer);
}

void Button::notify()
{
    std::list<IObserver*>::iterator iterator = m_observer.begin(); // iterator
    
    while (iterator != m_observer.end())
    {
        (*iterator)->update();
        ++iterator;
    }
}

void Button::pressButton()
{
    notify();
}

}
