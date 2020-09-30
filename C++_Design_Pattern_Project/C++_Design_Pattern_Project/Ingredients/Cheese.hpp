//
//  Cheese.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-29.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Cheese_hpp
#define Cheese_hpp

#include "Ingredient.hpp"
#include <stdio.h>
#include <string>

namespace burger_program {

class Cheese : public Ingredient
{
private:
    std::string m_cheeseType;
    
public:
    Cheese(const std::string &type, int weight)
        : Ingredient{ weight }, m_cheeseType{ type }
    {
        setIngredientNutrition();
    }
    
    void setIngredientNutrition();
    
    const std::string& getCheeseType() const { return m_cheeseType; }
    
};

}

#endif /* Cheese_hpp */
