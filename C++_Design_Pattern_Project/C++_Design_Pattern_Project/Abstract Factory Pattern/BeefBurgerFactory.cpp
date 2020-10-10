//
//  BeefBurgerFactory.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-29.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "BeefBurgerFactory.hpp"
#include "BeefBurger.hpp"
#include "NutritionFact.hpp"
#include <vector>
#include <memory>
#include <iostream>

namespace burger_program {

// Creates and returns a hamburger (with ingredients), and sets NutritionFact
std::unique_ptr<Hamburger> BeefBurgerFactory::makePlainBurger() const
{
    // create a (smart) pointer to dynamically allocated memory of type BeefBurger...
    auto plainBurger{ std::make_unique<BeefBurger>() };
    
    // add ingredients to burger (->, both dereference and uses the . to access member functions - same as (*burger).makeOne())
    plainBurger->setBurgerName("Hamburger 90g")
                .addIngredient("Sesame bun", 90, "g")
                .addIngredient("Ground Beef", 120, "g")
                .addIngredient("Heintz", 5, "ml")
                .addIngredient("Iceberg", 34, "g")
                .addIngredient("Roma", 14, "g");
    
    // set NutritionFact (setNutritionFact can accept a temporary NutritionFact object)
    plainBurger->setNutritionFact(NutritionFact{}.setKcal(357).setCarbohydrates(37.8).setFat(27.8).setSodium(2.6).setProtein(21.7));
    return plainBurger;
}


std::unique_ptr<Hamburger> BeefBurgerFactory::makeCheeseBurger() const
{
    auto cheeseburger{ std::make_unique<BeefBurger>() };
    
    cheeseburger->setBurgerName("Cheeseburger")
                 .addIngredient("Potato Bun", 90, "g")
                 .addIngredient("Cheddar Cheese", 30, "g")
                 .addIngredient("Heinz", 10, "ml")
                 .addIngredient("Colman's", 10, "ml")
                 .addIngredient("Yellow Onion", 10, "g")
                 .addIngredient("Ground Beef", 120, "g")
                 .addIngredient("Pickles", 7, "pcs");
            
    cheeseburger->setNutritionFact(NutritionFact{}.setKcal(446).setCarbohydrates(45.2).setFat(32.1).setSodium(3.27).setProtein(27.8));
    return cheeseburger;
}


std::unique_ptr<Hamburger> BeefBurgerFactory::makeDoubleDeluxeBurger() const
{
    auto deluxeBurger{ std::make_unique<BeefBurger>() };
    
    deluxeBurger->setBurgerName("Deluxe Burger")
                 .addIngredient("Brioche Bun", 90, "g")
                 .addIngredient("Ground Chuck Steak", 120, "g")
                 .addIngredient("Cheddar Cheese", 30, "g")
                 .addIngredient("Pepper Jack Cheese", 30, "g")
                 .addIngredient("Mustard", 10, "ml")
                 .addIngredient("White Onion", 10, "g")
                 .addIngredient("Red Tomatoes", 8, "g");

    deluxeBurger->setNutritionFact(NutritionFact{}.setKcal(789).setCarbohydrates(43.8).setFat(41.2).setSodium(3.1).setProtein(49.2));
    return deluxeBurger;
}


}
