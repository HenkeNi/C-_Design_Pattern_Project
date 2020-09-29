//
//  Bun.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Bun.hpp"

namespace burger_program {

void Bun::setIngredientNutrition()  
{
    auto bunNutrition{ std::make_unique<NutritionFact>()};
    bunNutrition->setKcal(309).setFat(8).setSodium(2).setCarbohydrates(50).setProtein(9);
    
    setNutritionFact(std::move(bunNutrition));
}


}
