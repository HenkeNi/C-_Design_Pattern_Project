//
//  Tomato.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Tomato_hpp
#define Tomato_hpp

#include "Ingredient.hpp"
#include <stdio.h>
#include <string>

namespace burger_program {

class Tomato : public Ingredient
{
private:
    std::string m_tomatoSort;
    
public:
    Tomato(const std::string &sort, int weight, bool isVegetarian = true)
        : Ingredient{ weight, isVegetarian }, m_tomatoSort{ sort }
    {
        setIngredientNutrition();
    }
    
    void setIngredientNutrition();
    const std::string& getTomatoSort() const { return m_tomatoSort; }
};

}

#endif /* Tomato_hpp */
