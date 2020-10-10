//
//  NutritionFact.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "NutritionFact.hpp"
#include <iostream>
#include <stdexcept>

namespace burger_program {


std::ostream& operator<< (std::ostream& out, const NutritionFact &f)
{
    out << "Nutrition Fact: " 
        << "\n\tKcal: " << f.m_totalKcal
        << "\n\tCarbs: " << f.m_totalCarbohydrates
        << "\n\tFat: " << f.m_totalFat
        << "\n\tSalt: " << f.m_totalSodium
        << "\n\tProtein: " << f.m_totalProtein;
    
    return out;
}

NutritionFact& NutritionFact::setKcal(int kcal)
{
    if (kcal < 0)
        throw std::runtime_error("Can't set a negative value for kcal!");
    
    m_totalKcal = kcal;
    return *this;
}

NutritionFact& NutritionFact::setFat(double fat)
{
    if (fat < 0)
        throw std::runtime_error("Can't set a negative value for fat!");
    
    m_totalFat = fat;
    return *this;
}

NutritionFact& NutritionFact::setSodium(double sodium)
{
    if (sodium < 0)
        throw std::runtime_error("Can't set a negative value for sodium!");

    m_totalSodium = sodium;
    return *this;
}

NutritionFact& NutritionFact::setCarbohydrates(double carbs)
{
    if (carbs < 0)
        throw std::runtime_error("Can't set a negative value for Carbs!");
    
    m_totalCarbohydrates = carbs;
    return *this;
}

NutritionFact& NutritionFact::setProtein(double protein)
{
    if (protein < 0)
        throw std::runtime_error("Can't set a negative value for protein!");
    
    m_totalProtein = protein;
    return *this;
}


}
