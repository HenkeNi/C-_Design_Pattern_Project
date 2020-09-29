//
//  Onion.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Onion.hpp"

namespace burger_program {

void Onion::setIngredientNutrition()
{
     auto lettuceNutrition{ std::make_unique<NutritionFact>() };
       lettuceNutrition->setKcal(14).setFat(0).setSodium(0).setCarbohydrates(1).setProtein(2);
       
       setNutritionFact(std::move(lettuceNutrition));
}

}
