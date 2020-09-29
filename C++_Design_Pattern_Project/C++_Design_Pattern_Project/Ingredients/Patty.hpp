//
//  Patty.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Patty_hpp
#define Patty_hpp

#include "Ingredient.hpp"
#include <stdio.h>
#include <string>

namespace burger_program {

class Patty : public Ingredient
{
private:
    std::string m_pattyType;
    
public:
    Patty(const std::string &patty, int weight, bool isVegetarian)
        : Ingredient{ weight, isVegetarian }, m_pattyType{ patty }
    {
        setIngredientNutrition();
    }
    
    void setIngredientNutrition();
    
    const std::string& getPattyType() const { return m_pattyType; }
};

}

#endif /* Patty_hpp */
