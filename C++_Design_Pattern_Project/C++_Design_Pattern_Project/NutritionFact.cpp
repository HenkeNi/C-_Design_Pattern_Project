//
//  NutritionFact.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "NutritionFact.hpp"


namespace burger_program {

NutritionFact& NutritionFact::setKcal(int kcal)
{
    m_kcalPerGram = kcal; // TODO: assert kcal not less than 0??
    return *this;
}

NutritionFact& NutritionFact::setFat(int fat)
{
    m_totalFatPerGram = fat;
    return *this;
}

NutritionFact& NutritionFact::setSodium(int sodium)
{
    m_sodiumPerGram = sodium;
    return *this;
}

NutritionFact& NutritionFact::setCarbohydrates(int carbs)
{
    m_carbohydratesPerGram = carbs;
    return *this;
}

NutritionFact& NutritionFact::setProtein(int protein)
{
    m_proteinPerGram = protein;
    return *this;
}


}
