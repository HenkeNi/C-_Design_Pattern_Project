//
//  Ketchup.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Ketchup.hpp"

namespace burger_program {


void Ketchup::setIngredientNutrition()
{
    NutritionFact ketchupNutrition{};
    ketchupNutrition.setKcal(111).setFat(6).setSodium(0).setCarbohydrates(26).setProtein(1);
    
    setNutritionFact(std::make_unique<NutritionFact>(ketchupNutrition));
}

}
