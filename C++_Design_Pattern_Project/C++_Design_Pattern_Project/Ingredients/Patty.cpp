//
//  Patty.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Patty.hpp"

namespace burger_program {

void Patty::setIngredientNutrition()
{
    auto pattyNutrition{ std::make_unique<NutritionFact>() };
    pattyNutrition->setKcal(294).setFat(14).setSodium(414).setCarbohydrates(24).setProtein(17);
    
    setNutritionFact(std::move(pattyNutrition));
}

}
