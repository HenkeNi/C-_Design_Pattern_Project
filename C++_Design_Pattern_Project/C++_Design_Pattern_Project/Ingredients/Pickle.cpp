//
//  Pickle.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Pickle.hpp"

namespace burger_program {

void Pickle::setIngredientNutrition()
{
    NutritionFact pickleNutrition{};
    pickleNutrition.setKcal(39).setFat(0).setSodium(0).setCarbohydrates(6).setProtein(1);
    
    setNutritionFact(std::make_unique<NutritionFact>(pickleNutrition));
}

}
