//
//  VegetarianBurgerFactory.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-29.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "VegetarianBurgerFactory.hpp"
#include "VegoBurger.hpp"
#include "Bun.hpp"
#include "Cheese.hpp"
#include "Ketchup.hpp"
#include "Mustard.hpp"
#include "Onion.hpp"
#include "Patty.hpp"
#include "Pickle.hpp"
#include "Lettuce.hpp"
#include "Tomato.hpp"
#include <vector>
#include <memory>
#include <iostream>

namespace burger_program {

std::unique_ptr<Hamburger> VegetarianBurgerFactory::makePlainBurger() const
{
    auto vegoBurger{ std::make_unique<VegoBurger>() };
    
    vegoBurger->setProductName("Vego-Burger 90g")
               .addIngredient(std::make_unique<Bun>("Sesame bun", 45))
               .addIngredient(std::make_unique<Patty>("Vego Beef", 90))
               .addIngredient(std::make_unique<Onion>("Yellow Onion", 5))
               .addIngredient(std::make_unique<Lettuce>("Iceberg", 34))
               .addIngredient(std::make_unique<Tomato>("Roma", 14));

    return vegoBurger;
}


std::unique_ptr<Hamburger> VegetarianBurgerFactory::makeCheeseBurger() const
{
    auto vegoCheese{ std::make_unique<VegoBurger>() };
    
    vegoCheese->setProductName("Vego-Cheeseburger")
               .addIngredient(std::make_unique<Bun>("Potato Bun", 90))
               .addIngredient(std::make_unique<Patty>("Vego Beef", 100))
               .addIngredient(std::make_unique<Cheese>("Cheddar Cheese", 30))
               .addIngredient(std::make_unique<Mustard>("Colman's", 10))
               .addIngredient(std::make_unique<Ketchup>("Heinz", 10))
               .addIngredient(std::make_unique<Onion>("Yellow Onion", 10))
               .addIngredient(std::make_unique<Pickle>(7));
        
    return vegoCheese;

}


std::unique_ptr<Hamburger> VegetarianBurgerFactory::makeDoubleDeluxeBurger() const
{
    auto vegoDeluxe{ std::make_unique<VegoBurger>() };
    
    vegoDeluxe->setProductName("Vego-Deluxe")
               .addIngredient(std::make_unique<Bun>("Full-Grain Bun", 90))
               .addIngredient(std::make_unique<Patty>("Vego Beef", 120))
               .addIngredient(std::make_unique<Cheese>("Cheddar Cheese", 30))
               .addIngredient(std::make_unique<Cheese>("Pepper Jack Cheese", 30))
               .addIngredient(std::make_unique<Onion>("White Onion", 10))
               .addIngredient(std::make_unique<Pickle>(7))
               .addIngredient(std::make_unique<Tomato>("Red Tomatoes", 8));

    return vegoDeluxe;
}

}
