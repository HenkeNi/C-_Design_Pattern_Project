//
//  VegetarianBurgerFactory.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-29.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "VegetarianBurgerFactory.hpp"
#include "VegoBurger.hpp"
#include "Ingredient.hpp"
#include <vector>
#include <memory>
#include <iostream>

namespace burger_program {

std::unique_ptr<Hamburger> VegetarianBurgerFactory::makePlainBurger() const
{
    // smart pointer pointing to a VegoBurger class allocated on the heap
    auto vegoBurger{ std::make_unique<VegoBurger>() };
    
    // add ingredients to burger
    vegoBurger->setBurgerName("Vego-Burger 90g")
               .addIngredient("Sesame bun", 45, "g")
               .addIngredient("Vego Beef", 90, "g")
               .addIngredient("Yellow Onion", 25, "g")
               .addIngredient("Iceberg", 34, "g")
               .addIngredient("Roma", 14, "g");

    // set NutritionFact
    vegoBurger->setNutritionFact(NutritionFact{}.setKcal(289).setCarbohydrates(31.3).setFat(21.8).setSodium(1.6).setProtein(17.7));
    return vegoBurger;
}


std::unique_ptr<Hamburger> VegetarianBurgerFactory::makeCheeseBurger() const
{
    auto vegoCheese{ std::make_unique<VegoBurger>() };
    
    vegoCheese->setBurgerName("Vego-Cheeseburger")
               .addIngredient("Potato Bun", 90, "g")
               .addIngredient("Vego Beef", 100, "g")
               .addIngredient("Cheddar Cheese", 30, "g")
               .addIngredient("Colman's", 100, "ml")
               .addIngredient("Heinz", 100, "ml")
               .addIngredient("Yellow Onion", 3, "slices")
               .addIngredient("Pickles", 5, "pcs");
        
    vegoCheese->setNutritionFact(NutritionFact{}.setKcal(312).setCarbohydrates(34.3).setFat(29.8).setSodium(2.4).setProtein(21.4));
    return vegoCheese;

}


std::unique_ptr<Hamburger> VegetarianBurgerFactory::makeDoubleDeluxeBurger() const
{
    auto vegoDeluxe{ std::make_unique<VegoBurger>() };
    
    vegoDeluxe->setBurgerName("Vego-Deluxe")
               .addIngredient("Full-Grain Bun", 90, "g")
               .addIngredient("Vego Beef", 120, "g")
               .addIngredient("Cheddar Cheese", 30, "g")
               .addIngredient("Pepper Jack Cheese", 30, "g")
               .addIngredient("White Onion", 10, "g")
               .addIngredient("Pickles", 6, "pcs")
               .addIngredient("Red Tomatoes", 8, "slices");

    vegoDeluxe->setNutritionFact(NutritionFact{}.setKcal(428).setCarbohydrates(37.1).setFat(33.4).setSodium(2.8).setProtein(29.4));
    return vegoDeluxe;
}

}
