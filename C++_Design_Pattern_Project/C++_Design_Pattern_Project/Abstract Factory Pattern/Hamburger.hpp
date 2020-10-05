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

class Hamburger : public IFoodItem
{
    using ingredientsList_t = std::vector<std::unique_ptr<Ingredient>>; // type alias
    
protected:
    std::string m_burgerName;
    ingredientsList_t m_ingredients; // array of (pointers to) Ingredients - (composition)

    //std::unique_ptr<NutritionFact> m_nutritionFact;
    NutritionFact m_nutritionFact;
    bool m_isEaten{ false };
    
public:
    Hamburger()
    {
    }
    
    
    Hamburger& setBurgerName(const std::string &name);
    Hamburger& setNutritonFact();
    Hamburger& addIngredient(const std::string &productName, double volume, const std::string &unit);
    Hamburger& addIngredient(std::unique_ptr<Ingredient> ingredient);
    
    NutritionFact& getNutritionFact() { return m_nutritionFact; }
    //std::unique_ptr<NutritionFact> setNutritionFact() { return m_nutritionFact; };
    
    void displayIngredients() const;
    void displayNutritionFact() const;
    
    friend std::ostream& operator<< (std::ostream &out, const Hamburger &burger);
};

}

#endif /* Hamburger_hpp */
