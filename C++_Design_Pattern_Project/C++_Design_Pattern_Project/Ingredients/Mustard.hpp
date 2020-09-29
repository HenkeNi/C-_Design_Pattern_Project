//
//  Mustard.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Mustard_hpp
#define Mustard_hpp

#include "Ingredient.hpp"
#include <stdio.h>
#include <string>

namespace burger_program {

class Mustard : public Ingredient
{
private:
    std::string m_brand;
    
public:
    Mustard(const std::string &brand, int weight, bool isVegetarian = true)
        : Ingredient{ weight, isVegetarian }, m_brand{ brand }
    {
        setIngredientNutrition();
    }
    
    void setIngredientNutrition();
    const std::string& getMustardBrand() const { return m_brand; }
};

}

#endif /* Mustard_hpp */
