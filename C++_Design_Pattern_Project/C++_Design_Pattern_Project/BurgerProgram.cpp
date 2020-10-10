//
//  BurgerProgram.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-10-04.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#include "BurgerProgram.hpp"
#include "Hamburger.hpp"
#include "IBurgerFactory.hpp"
#include "BeefBurgerFactory.hpp"
#include "VegetarianBurgerFactory.hpp"

#include "PlainFrenchFries.hpp"
#include "FrenchFriesWithGravy.hpp"
#include "FrenchFriesWithCheese.hpp"

#include "Shoe.hpp"
#include "ShoeAdapter.hpp"

#include "Button.hpp"
#include "Chef.hpp"

#include <iostream>

namespace burger_program {

// TODO: Make function that accepts array of function pointers, and input valu -> iterates over array and when it match value
// TODO: Have inspect function that works for all IFoodItems (make IFrenchFries derive from IFoodItem)

void mainMenu()
{
        
    int input = 0;
    std::cout << "Welcome to the Burger Program!\nFeel free to order something\n\n";
        
    do {
        showMainMenuOptions();
        input = getUserInput<int>();
        
        switch (input) {
            case 1:
                orderBurger();
                break;
            case 2:
                orderFries();
                break;
            case 3:
                orderSecretMenu();
                break;
            case 4:
                pushRandomButton();
                break;
            case 5:
                std::cout << "Thank you, please come again.";
                return;
            default:
                std::cout << "Please select a valid option!\n\n";
                break;
        }
    } while(true);
}


void showMainMenuOptions()
{
    std::cout <<
    "Options:\n"
    "1. Order A Burger\n"
    "2. Order Fries\n"
    "3. Order secret menu\n"
    "4. Press Random button on the wall\n"
    "5. Exit\n\n";
}



void orderBurger()
{
    std::unique_ptr<IBurgerFactory> factory;
    std::unique_ptr<Hamburger> burger{ nullptr };
    
    int input = 0;
    
    do {
        showOrderBurgerMenu();
        
        input = getUserInput<int>();
        
        switch (input) {
            case 1:
                factory = std::make_unique<BeefBurgerFactory>();
                burger = factory->makePlainBurger();
                break;
            case 2:
                factory = std::make_unique<BeefBurgerFactory>();
                burger = factory->makeCheeseBurger();
                break;
            case 3:
                factory = std::make_unique<BeefBurgerFactory>();
                burger = factory->makeDoubleDeluxeBurger();
                break;
            case 4:
                factory = std::make_unique<VegetarianBurgerFactory>();
                burger = factory->makePlainBurger();
                break;
            case 5:
                factory = std::make_unique<VegetarianBurgerFactory>();
                burger = factory->makeCheeseBurger();
                break;
            case 6:
                factory = std::make_unique<VegetarianBurgerFactory>();
                burger = factory->makeDoubleDeluxeBurger();
                break;
            case 7:
                std::cout << "Never mind, I think I order something else...\n";
                return;
            default:
                std::cout << "Not a valid option!\n";
                break;
        }
        
        if (burger != nullptr)
        {
            inspectBurger(burger.get());
            return;
        }
        
    } while(true);
}



void showOrderBurgerMenu()
{
    std::cout << "[Burger Menu]\nBeef Burgers:\n\t1. Hamburger 90g\n\t2. Cheeseburger\n\t3. Deluxe Burger\n\nVegetarian Burgers:\n\t4. Vego-Burger\n\t5. Vego-Cheese\n\t6. Vego-Deluxe\n\t7. Go back\n\n";
}




void inspectBurger(Hamburger *burger)
{
    int input;
    
    do {
        std::cout << "\nWhat to do with your burger?\n1. eat\n2. check ingredients\n3. check nutrition fact\n4. Go back\n";
        input = getUserInput<int>();
        
        switch (input) {
            case 1:
                burger->eat();
                break;
            case 2:
                burger->displayIngredients();
                break;
            case 3:
                burger->displayNutritionFact();
                break;
            case 4:
                return;
            default:
                std::cout << "invalid input";
                break;
        }
    } while (true);
}



// TODO: FIX! (SPLIT INTO MORE FUNCTIONS...)
void orderFries()
{
    // TODO: ADD nutritionfact??

    auto fries{ std::make_unique<PlainFrenchFries>() };
    

    std::cout << "Do you want to add cheese to your fries? \n1. Yes \n2. No\n";
    std::unique_ptr<FrenchFriesWithCheese> cheeseFries;
    
    int input;
    
    do {
        input = getUserInput<int>();
                
        if (input == 2)
        {
            inspectFries(fries.get());
            return;
        }
        
    } while (input != 1);
    
    cheeseFries = std::make_unique<FrenchFriesWithCheese>(*fries);
    
    

    std::unique_ptr<FrenchFriesWithGravy> gravyFries;
    std::cout << "Do you want to add gravy to your fries? \n1. Yes\n2. No\n";
    
    do {
        input = getUserInput<int>();

        switch (input) {
            case 1:
                gravyFries = std::make_unique<FrenchFriesWithGravy>(*cheeseFries);
                inspectFries(gravyFries.get());
                return;;
            case 2:
                inspectFries(cheeseFries.get());
                return;;
            default:
                std::cout << "invalid input\n";
                break;
        }
    } while (true);
}



void inspectFries(IFrenchFries *fries)
{
    fries->snackOn();
    std::cout << '\n';
}


void orderSecretMenu()
{
    
    std::vector<std::string> materials { "Rubber", "Leather", "Plastic" };
    
    auto shoe = std::make_shared<Shoe>(materials);
    ShoeAdapter shoeAdapt{ shoe };
    
    std::cout << "[Secret Menu apparently consisted of a shoe...]\n";
    
    int input;
    
    do {
        std::cout << "\n1. Eat Shoe\n2. Check ingredients\n3. Check Nutrition Fact\n4. Go back\n\n";
        input = getUserInput<int>();
        
        switch (input) {
            case 1:
                shoeAdapt.eat();
                break;
            case 2:
                shoeAdapt.printIngredients();
                break;
            case 3:
                shoeAdapt.printNutritionFact();
                break;
            case 4:
                return;
            default:
                break;
        }
        
    } while (true);
}


void pushRandomButton()
{
    Button *button = new Button;
    Chef *chef = new Chef(*button);
    button->pressButton();
    
    delete chef;
    delete button;
}



template<typename T>
T getUserInput()
{
    while (true)
    {
        std::cout << "Enter option: ";
        T input;
        std::cin >> input;
           
        std::cout << '\n';
           
        // check for valid extraction
        if (std::cin.fail()) // if previous extraction failed
        {
            std::cin.clear(); // reset to 'normal' operation mode
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove bad input (ignore unlimited characters until a newline is removed)
            std::cout << "Invalid input. Please try again!\n";
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove any extraneous input
            return input;
        }
    }
}



}
