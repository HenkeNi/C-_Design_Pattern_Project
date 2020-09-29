//
//  Cheese.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-29.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Cheese.hpp"

namespace burger_program {

void Cheese::setIngredientNutrition()
{
    
    NutritionFact cheeseNutrition{};
    cheeseNutrition.setKcal(66).setFat(6).setSodium(1).setCarbohydrates(5).setProtein(4);
        
    setNutritionFact(std::make_unique<NutritionFact>(cheeseNutrition));
}

}
