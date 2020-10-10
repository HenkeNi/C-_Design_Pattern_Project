//
//  Chef.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Chef.hpp"
#include <iostream>

namespace burger_program {

bool Chef::m_hasPushed = false;

void Chef::update()
{
    m_hasPushed = !m_hasPushed;
    
    m_hasPushed ? speak("Stop pushing the button!! [Someone screams froms the kitchen]\n") : speak("For crying out loud! [Voice sound angrily]\n");
}

void Chef::removeObserverFromList()
{
    m_button.detach(this);
}


void Chef::speak(const std::string &dialog) const
{
    std::cout << dialog << '\n';
}



}
