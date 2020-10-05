//
//  Shoe.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-10-03.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Shoe.hpp"

namespace burger_program {

void Shoe::addMaterial(const std::string& material)
{
    m_materials.push_back(material);
}


}
