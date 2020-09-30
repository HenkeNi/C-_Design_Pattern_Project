//
//  Lettuce.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Lettuce_hpp
#define Lettuce_hpp

#include "Ingredient.hpp"
#include <stdio.h>
#include <string>

namespace burger_program {

class Lettuce : public Ingredient
{
private:
    std::string m_lettuceSort;
    
public:
    Lettuce(const std::string &sort, int weight)
        : Ingredient{ weight }, m_lettuceSort{ sort }
    {
        setIngredientNutrition();
    }
    
    void setIngredientNutrition();
    const std::string& getLettuceSort() const { return m_lettuceSort; }
};

}

#endif /* Lettuce_hpp */
