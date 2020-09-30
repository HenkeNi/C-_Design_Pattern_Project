//
//  BeefBurgerFactory.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-29.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "BeefBurgerFactory.hpp"
#include "BeefBurger.hpp"
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

std::unique_ptr<Hamburger> BeefBurgerFactory::makePlainBurger() const
{
    auto plainBurger{ std::make_unique<BeefBurger>() };
    
    plainBurger->setProductName("Hamburger 90g")
                .addIngredient(std::make_unique<Bun>("Sesame bun", 90))
                .addIngredient(std::make_unique<Patty>("Ground Beef", 120))
                .addIngredient(std::make_unique<Ketchup>("Heintz", 5))
                .addIngredient(std::make_unique<Lettuce>("Iceberg", 34))
                .addIngredient(std::make_unique<Tomato>("Roma", 14));
    
    return plainBurger;
}


std::unique_ptr<Hamburger> BeefBurgerFactory::makeCheeseBurger() const
{
    auto cheeseburger{ std::make_unique<BeefBurger>() };
    
    cheeseburger->setProductName("Cheeseburger")
                 .addIngredient(std::make_unique<Bun>("Potato Bun", 90))
                 .addIngredient(std::make_unique<Cheese>("Cheddar Cheese", 30))
                 .addIngredient(std::make_unique<Ketchup>("Heinz", 10))
                 .addIngredient(std::make_unique<Mustard>("Colman's", 10))
                 .addIngredient(std::make_unique<Onion>("Yellow Onion", 10))
                 .addIngredient(std::make_unique<Patty>("Ground Beef", 120))
                 .addIngredient(std::make_unique<Pickle>(7));
                
    return cheeseburger;
}


std::unique_ptr<Hamburger> BeefBurgerFactory::makeDoubleDeluxeBurger() const
{
    auto deluxeBurger{ std::make_unique<BeefBurger>() };
    
    deluxeBurger->setProductName("Deluxe Burger")
                 .addIngredient(std::make_unique<Bun>("Brioche Bun", 90))
                 .addIngredient(std::make_unique<Patty>("Ground Chuck Steak", 120))
                 .addIngredient(std::make_unique<Cheese>("Cheddar Cheese", 30))
                 .addIngredient(std::make_unique<Cheese>("Pepper Jack Cheese", 30))
                 .addIngredient(std::make_unique<Onion>("White Onion", 10))
                 .addIngredient(std::make_unique<Tomato>("Red Tomatoes", 8));

    return deluxeBurger;
}

}
