//
//  main.cpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//


#include "BurgerProgram.hpp"
#include <iostream>


int main(int argc, const char * argv[]) {
   
    try
    {
        burger_program::mainMenu();
    }
    catch (...)
    {
        std::cerr << "Program terminated prematurely";
    }
    
    return 0;
}
