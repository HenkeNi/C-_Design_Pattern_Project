//
//  NutritionFact.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "NutritionFact.hpp"
#include <iostream>

namespace burger_program {


std::ostream& operator<< (std::ostream& out, const NutritionFact &f)
{
    out << "Nutrition Fact: " 
        << "\n\tKcal: " << f.m_kcalPerGram
        << "\n\tCarbs: " << f.m_carbohydratesPerGram
        << "\n\tFat: " << f.m_totalFatPerGram
        << "\n\tSalt: " << f.m_sodiumPerGram
        << "\n\tProtein: " << f.m_proteinPerGram;
    
    return out;
}

NutritionFact& NutritionFact::setKcal(int kcal)
{
    m_kcalPerGram = kcal; // TODO: assert kcal not less than 0??
    return *this;
}

NutritionFact& NutritionFact::setFat(double fat)
{
    m_totalFatPerGram = fat;
    return *this;
}

NutritionFact& NutritionFact::setSodium(double sodium)
{
    m_sodiumPerGram = sodium;
    return *this;
}

NutritionFact& NutritionFact::setCarbohydrates(double carbs)
{
    m_carbohydratesPerGram = carbs;
    return *this;
}

NutritionFact& NutritionFact::setProtein(double protein)
{
    m_proteinPerGram = protein;
    return *this;
}


}
