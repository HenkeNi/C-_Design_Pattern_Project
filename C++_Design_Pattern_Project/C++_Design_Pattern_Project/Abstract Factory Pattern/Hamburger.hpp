//
//  Hamburger.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Hamburger_hpp
#define Hamburger_hpp

#include "IFoodItem.hpp"
#include "Ingredient.hpp"
#include "NutritionFact.hpp"
#include <memory>
#include <stdio.h>
#include <string>
#include <vector>

namespace burger_program {

// abstract class (implements interface IFoodItem - but don't override its methods)
class Hamburger : public IFoodItem
{
    using ingredientsList_t = std::vector<std::unique_ptr<Ingredient>>; // type alias
    
protected:
    std::string m_burgerName;
    ingredientsList_t m_ingredients; // array of smart pointers to Ingredients class - (composition / owns resource)
    NutritionFact m_nutritionFact;  // NutritionFact member (composition)
    bool m_isEaten{ false };
    
public:
    Hamburger()
    {
    }
    
    // setter methods
    Hamburger& setBurgerName(const std::string &name);
    Hamburger& setNutritionFact(const NutritionFact &fact);
    Hamburger& addIngredient(const std::string &productName, double volume, const std::string &unit);
    Hamburger& addIngredient(std::unique_ptr<Ingredient> ingredient);
    
    NutritionFact& getNutritionFact() { return m_nutritionFact; } // returns reference to m_nutritionFact
    
    void displayIngredients()   const; // prints ingredienses
    void displayNutritionFact() const; // prints nutrition fact
    
    friend std::ostream& operator<< (std::ostream &out, const Hamburger &burger); // enables printing instance of class directly
};

}

#endif /* Hamburger_hpp */
