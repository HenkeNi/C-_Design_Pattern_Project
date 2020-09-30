//
//  Bacon.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-29.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Bacon_hpp
#define Bacon_hpp

#include "Ingredient.hpp"
#include <stdio.h>
#include <string>

namespace burger_program {

class Bacon : public Ingredient
{
private:
    std::string m_baconType;
    
public:
    Bacon(const std::string &type, int weight)
        : Ingredient{ weight },m_baconType{ type }
    {
        setIngredientNutrition();
    }
    
    void setIngredientNutrition();
    
    const std::string& getBaconType() const { return m_baconType; }
};

}

#endif /* Bacon_hpp */
