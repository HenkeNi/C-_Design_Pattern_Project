//
//  Ingredient.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Ingredient.hpp"

namespace burger_program {

void Ingredient::setNutritionFact(std::unique_ptr<NutritionFact> nutrition)
{
    m_nutritionFact = std::move(nutrition);
}


bool Ingredient::getIsVegetarian() const
{
    return m_isVegetarian;
}

int Ingredient::getCaloriesInKcal() const
{
    return m_nutritionFact->getKcal() * m_productWeightInGrams;
}

int Ingredient::getTotalFatInGram() const
{
    return m_nutritionFact->getFat() * m_productWeightInGrams;
}

int Ingredient::getSodiumInMilligram() const
{
    return m_nutritionFact->getSodium() * m_productWeightInGrams;
}

int Ingredient::getCarbohydratesInGram() const
{
    return m_nutritionFact->getCarbs() * m_productWeightInGrams;
}

int Ingredient::getProteinInGram() const
{
    return m_nutritionFact->getProtein() * m_productWeightInGrams;
}

}
