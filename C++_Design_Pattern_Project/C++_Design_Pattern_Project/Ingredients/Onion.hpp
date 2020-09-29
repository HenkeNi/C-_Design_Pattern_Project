//
//  Onion.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Onion_hpp
#define Onion_hpp

#include "Ingredient.hpp"
#include <stdio.h>
#include <string>

namespace burger_program {

class Onion : public Ingredient
{
private:
    std::string m_onionSort;

public:
    Onion(const std::string &sort, int weight, bool isVegetarian = true)
        : Ingredient{ weight, isVegetarian }, m_onionSort{ sort }
    {
        setIngredientNutrition();
    }
    
    void setIngredientNutrition();
    const std::string& getOnionSort() const { return m_onionSort; }

};

}

#endif /* Onion_hpp */
