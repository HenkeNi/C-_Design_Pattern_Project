//
//  VegetarianBurgerFactory.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-29.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "VegetarianBurgerFactory.hpp"

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
#include "VegoBurger.hpp"

#include <vector>
#include <memory>
#include <iostream>

namespace burger_program {

std::unique_ptr<Hamburger> VegetarianBurgerFactory::makePlainBurger() const
{
    std::vector<std::unique_ptr<Ingredient>> ingredients{};
    
    ingredients.push_back(std::make_unique<Bun>("Sesame bun", 90));
    ingredients.push_back(std::make_unique<Patty>("Vego Beef", 100));
    ingredients.push_back(std::make_unique<Onion>("Yellow Onion", 5));
    ingredients.push_back(std::make_unique<Lettuce>("Iceberg", 34));
    ingredients.push_back(std::make_unique<Tomato>("Roma", 14));
    
    //return std::make_unique<Hamburger>("Vego-Burger", std::move(ingredients));
    return std::make_unique<VegoBurger>("Vego-Burger");
}


std::unique_ptr<Hamburger> VegetarianBurgerFactory::makeCheeseBurger() const
{
    std::vector<std::unique_ptr<Ingredient>> ingredients{};

    ingredients.push_back(std::make_unique<Bun>("Potato Bun", 90));
    ingredients.push_back(std::make_unique<Patty>("Vego Beef", 100));
    ingredients.push_back(std::make_unique<Cheese>("Cheddar Cheese", 30));
    ingredients.push_back(std::make_unique<Mustard>("Colman's", 10));
    ingredients.push_back(std::make_unique<Ketchup>("Heinz", 10));
    ingredients.push_back(std::make_unique<Onion>("Yellow Onion", 10));
    ingredients.push_back(std::make_unique<Pickle>(7));
        
    //return std::make_unique<Hamburger>("Vego-Cheeseburger",std::move(ingredients));
    return std::make_unique<VegoBurger>("Vego-Cheeseburger");

}


std::unique_ptr<Hamburger> VegetarianBurgerFactory::makeDoubleExtraBurger() const
{
    std::vector<std::unique_ptr<Ingredient>> ingredients{};

    ingredients.push_back(std::make_unique<Bun>("Full-Grain Bun", 90));
    ingredients.push_back(std::make_unique<Patty>("Vego Beef", 120));
    ingredients.push_back(std::make_unique<Cheese>("Cheddar Cheese", 30));
    ingredients.push_back(std::make_unique<Cheese>("Pepper Jack Cheese", 30));
    ingredients.push_back(std::make_unique<Onion>("White Onion", 10));
    ingredients.push_back(std::make_unique<Pickle>(7));
    ingredients.push_back(std::make_unique<Tomato>("Red Tomatoes", 8));
    
    //return std::make_unique<Hamburger>("Double Deluxe", std::move(ingredients));
    return std::make_unique<VegoBurger>("Vego-Deluxe");

}

}
