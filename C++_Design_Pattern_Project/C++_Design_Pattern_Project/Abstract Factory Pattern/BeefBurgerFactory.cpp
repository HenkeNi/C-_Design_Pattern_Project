//
//  BeefBurgerFactory.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-29.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "BeefBurgerFactory.hpp"

#include "Bun.hpp"
#include "Cheese.hpp"
#include "Ketchup.hpp"
#include "Mustard.hpp"
#include "Onion.hpp"
#include "Patty.hpp"
#include "Pickle.hpp"
#include "Lettuce.hpp"
#include "Tomato.hpp"

#include "NutritionFact.hpp"

#include <vector>
#include <memory>
#include <iostream>

namespace burger_program {

std::unique_ptr<Hamburger> BeefBurgerFactory::makePlainBurger() const
{
    std::vector<std::unique_ptr<Ingredient>> ingredients{};
    
    ingredients.push_back(std::make_unique<Bun>("Sesame bun", 90, false));
    ingredients.push_back(std::make_unique<Patty>("Ground Beef", 120, false));
    ingredients.push_back(std::make_unique<Ketchup>("Heintz", 5));
    ingredients.push_back(std::make_unique<Lettuce>("Iceberg", 34));
    ingredients.push_back(std::make_unique<Tomato>("Roma", 14));
    
    return std::make_unique<Hamburger>("Hamburger", std::move(ingredients));
}


std::unique_ptr<Hamburger> BeefBurgerFactory::makeCheeseBurger() const
{
    std::vector<std::unique_ptr<Ingredient>> ingredients{};

    ingredients.push_back(std::make_unique<Bun>("Potato Bun", 90, false));
    ingredients.push_back(std::make_unique<Patty>("Ground Beef", 120, false));
    ingredients.push_back(std::make_unique<Cheese>("Cheddar Cheese", 30, false));
    ingredients.push_back(std::make_unique<Mustard>("Colman's", 10));
    ingredients.push_back(std::make_unique<Ketchup>("Heinz", 10));
    ingredients.push_back(std::make_unique<Onion>("Yellow Onion", 10));
    ingredients.push_back(std::make_unique<Pickle>(7));
        
    return std::make_unique<Hamburger>("Cheeseburger",std::move(ingredients));
}


std::unique_ptr<Hamburger> BeefBurgerFactory::makeDoubleExtraBurger() const
{
    std::vector<std::unique_ptr<Ingredient>> ingredients{};

    ingredients.push_back(std::make_unique<Bun>("Brioche Bun", 90, false));
    ingredients.push_back(std::make_unique<Patty>("Ground Chuck Steak", 120, false));
    ingredients.push_back(std::make_unique<Cheese>("Cheddar Cheese", 30, false));
    ingredients.push_back(std::make_unique<Cheese>("Pepper Jack Cheese", 30, false));
    ingredients.push_back(std::make_unique<Onion>("White Onion", 10));
    ingredients.push_back(std::make_unique<Pickle>(7));
    ingredients.push_back(std::make_unique<Tomato>("Red Tomatoes", 8));
    
    return std::make_unique<Hamburger>("Double Deluxe", std::move(ingredients));
}

}
