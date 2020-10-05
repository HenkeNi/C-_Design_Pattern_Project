//
//  IFoodItem.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-30.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef IFoodItem_hpp
#define IFoodItem_hpp

#include <stdio.h>

namespace burger_program {

class IFoodItem
{
public:
    virtual ~IFoodItem(){}
    
    virtual void eat() = 0;
    
    //virtual void checkNutritionFact() const = 0;
    //virtual void checkIngredients() const = 0;
};

}

#endif /* IFoodItem_hpp */
