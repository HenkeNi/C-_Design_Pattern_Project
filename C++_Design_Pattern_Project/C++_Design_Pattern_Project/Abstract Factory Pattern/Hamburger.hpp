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
#include <memory>
#include <stdio.h>
#include <string>
#include <vector>

namespace burger_program {

class Hamburger : public IFoodItem
{
    using ingredientsList_t = std::vector<std::unique_ptr<Ingredient>>; // type alias
    
protected:
    std::string m_productName;
    ingredientsList_t m_ingredients; // array of (pointers to) Ingredients - (composition)
    
public:
    Hamburger()
    {
    }
    
    
    Hamburger& setProductName(const std::string &name);
    Hamburger& addIngredient(std::unique_ptr<Ingredient> ingredient);
    
    
    void printIngredients() const;
    friend std::ostream& operator<< (std::ostream &out, const Hamburger &burger);
};

}

#endif /* Hamburger_hpp */
