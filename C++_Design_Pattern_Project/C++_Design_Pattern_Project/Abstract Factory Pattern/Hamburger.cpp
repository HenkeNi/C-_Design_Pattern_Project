//
//  Hamburger.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "Hamburger.hpp"
#include <iostream>

namespace burger_program {

// what should print when an instance of the class is being printed
std::ostream& operator<< (std::ostream &out, const Hamburger &burger)
{
    out << burger.m_burgerName;
    return out;
}


Hamburger& Hamburger::setBurgerName(const std::string &name)
{
    m_burgerName = name;
    return *this;
}


Hamburger& Hamburger::setNutritionFact(const NutritionFact &fact)
{
    m_nutritionFact = std::move(fact); // steals resource (or moves using move semantics)
    return *this;
}



Hamburger& Hamburger::addIngredient(const std::string &productName, double volume, const std::string &unit)
{
    // allocates an instance of Ingredient on the heap and adds the pointer (pointing to the allocated memory) to ingredients array
    m_ingredients.push_back(std::make_unique<Ingredient>(productName, volume, unit));
    return *this;
}

Hamburger& Hamburger::addIngredient(std::unique_ptr<Ingredient> ingredient)
{
    m_ingredients.push_back(std::move(ingredient));
    return *this;
}


void Hamburger::displayIngredients() const
{
    std::cout << "Ingredients:\n";
    
    // print out all ingredients
    for (const auto &ingredient : m_ingredients)
        std::cout << "\t" << *ingredient;
}


void Hamburger::displayNutritionFact() const
{
    std::cout << m_nutritionFact << '\n';
}


}
