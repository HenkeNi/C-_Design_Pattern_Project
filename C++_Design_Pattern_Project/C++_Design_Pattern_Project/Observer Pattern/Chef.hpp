//
//  Chef.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Chef_hpp
#define Chef_hpp

#include "Button.hpp"
#include "IObserver.hpp"
#include <memory>
#include <stdio.h>
#include <string>

namespace burger_program {

// Observer
class Chef : public IObserver
{
private:
    Button &m_button;
    static bool m_hasPushed;
    
    
public:
    Chef(Button &button)
    : m_button{ button }
    {
        button.attach(this);
    }

        
    virtual void update() override;

    
    void removeObserverFromList();
    
    void speak(const std::string &dialog) const;
};

}

#endif /* Chef_hpp */
