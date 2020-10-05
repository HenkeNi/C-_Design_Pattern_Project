//
//  ShoeAdapter.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-10-03.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "ShoeAdapter.hpp"
#include <iostream>

namespace burger_program {
 
void ShoeAdapter::eat()
{
    m_isEaten ? std::cout << "You already ate it....\n" : std::cout << "Shoe taste very rubbery\n";
    m_isEaten = true;
}


void ShoeAdapter::printIngredients() const
{
    std::cout << "Shoe contains:\n";
    
    for (const auto ing : m_shoe->getMaterials())
        std::cout << "\t* " << ing << '\n';
}


void ShoeAdapter::printNutritionFact() const
{
    std::cout << m_nutrition << '\n';
}


}
