//
//  Mustard.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Mustard.hpp"

namespace burger_program {

void Mustard::setIngredientNutrition()
{
    NutritionFact mustardNutrition{};
    mustardNutrition.setKcal(66).setFat(6).setSodium(1).setCarbohydrates(5).setProtein(4);
    
    setNutritionFact(std::make_unique<NutritionFact>(mustardNutrition));
}

}
