//
//  Bacon.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-29.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Bacon.hpp"

namespace burger_program {

void Bacon::setIngredientNutrition()
{
    NutritionFact baconNutrition{};
    baconNutrition.setKcal(450).setFat(42).setSodium(2).setCarbohydrates(1).setProtein(37);
    
    setNutritionFact(std::make_unique<NutritionFact>(baconNutrition));
}

}
