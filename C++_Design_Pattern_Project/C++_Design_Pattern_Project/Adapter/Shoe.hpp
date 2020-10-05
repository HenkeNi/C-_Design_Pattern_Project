//
//  Shoe.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-10-03.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Shoe_hpp
#define Shoe_hpp

#include <stdio.h>
#include <string>
#include <vector>

namespace burger_program {

class Shoe
{
private:
    std::vector<std::string> m_materials;
    
public:
    Shoe(const std::vector<std::string> materials)
        : m_materials{ materials }
    {
    }
    
    void addMaterial(const std::string& material);
    const std::vector<std::string>& getMaterials() const { return m_materials; }
};

}

#endif /* Shoe_hpp */
