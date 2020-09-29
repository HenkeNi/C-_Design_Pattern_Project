//
//  Pickle.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Pickle_hpp
#define Pickle_hpp

#include "Ingredient.hpp"
#include <stdio.h>

namespace burger_program {

class Pickle : public Ingredient
{
  
public:
    Pickle(int weight, bool isVegetarian = true)
        : Ingredient{ weight, isVegetarian }
    {
        setIngredientNutrition();
    }
    
    void setIngredientNutrition();
};

}

#endif /* Pickle_hpp */
