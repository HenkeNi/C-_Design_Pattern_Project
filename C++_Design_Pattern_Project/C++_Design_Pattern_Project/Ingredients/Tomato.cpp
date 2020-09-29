//
//  Tomato.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Tomato.hpp"

namespace burger_program {

void Tomato::setIngredientNutrition()
{
    auto tomatoNutrition{ std::make_unique<NutritionFact>() };
    tomatoNutrition->setKcal(18).setFat(0).setSodium(0).setCarbohydrates(2).setProtein(1);
    
    setNutritionFact(std::move(tomatoNutrition));
}

}
