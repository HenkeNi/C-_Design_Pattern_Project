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
    using ingredientsList_t = std::vector<std::unique_ptr<Ingredient>>; // type alias for vector (array) of smart pointers of type Ingredient
    
protected:
    std::string m_productName;
    ingredientsList_t m_ingredients; // array of interfaces (polymorphism) storing an array of interfaces by value would result in object slicing
 
public:
    Hamburger(const std::string &name)
        : m_productName{ name }
    {
    }
    
    
    Hamburger& addIngredient(std::unique_ptr<Ingredient> ingredient);
        

    void printIngredients() const;
    friend std::ostream& operator<< (std::ostream &out, const Hamburger &burger);
};

}

#endif /* Hamburger_hpp */
