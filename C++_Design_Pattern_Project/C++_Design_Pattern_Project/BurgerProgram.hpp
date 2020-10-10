//
//  BurgerProgram.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-10-04.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef BurgerProgram_hpp
#define BurgerProgram_hpp

#include "IFrenchFries.hpp"
#include "Hamburger.hpp"
#include <stdio.h>
#include <optional>

namespace burger_program {

void mainMenu();
void showMainMenuOptions();
void showOrderBurgerMenu();

void orderBurger();
void orderFries();

void orderBeefBurger();
void orderVegetarianBurger();
void orderSecretMenu();

IFrenchFries* decorateFriesWithCheese(IFrenchFries *fries);


void pushRandomButton();

void inspectBurger(Hamburger *burger);
void inspectFries(IFrenchFries *fries);


template<typename T>
T getUserInput();
}

#endif /* BurgerProgram_hpp */
