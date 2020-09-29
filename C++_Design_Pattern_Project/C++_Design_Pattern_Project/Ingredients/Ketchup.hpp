//
//  Ketchup.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Ketchup_hpp
#define Ketchup_hpp

#include "Ingredient.hpp"
#include <stdio.h>
#include <string>

namespace burger_program {

class Ketchup : public Ingredient
{
private:
    std::string m_brand; // interface or class for factory products???
    
public:
    Ketchup(const std::string &brand, int weight, bool isVegetarian = true)
        : Ingredient{ weight, isVegetarian }, m_brand{ brand }
    {
        setIngredientNutrition();
    }
    
    void setIngredientNutrition();
    const std::string& getKetchupBrand() const { return m_brand; }
};

}

#endif /* Ketchup_hpp */
