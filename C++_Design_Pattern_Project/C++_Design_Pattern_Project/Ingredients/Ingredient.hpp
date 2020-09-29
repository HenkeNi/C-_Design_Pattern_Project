//
//  Ingredient.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Ingredient_hpp
#define Ingredient_hpp

#include "NutritionFact.hpp"
#include <memory>
#include <stdio.h>

namespace burger_program {

// Abstract base class
class Ingredient // rename FoodItem??
{
protected:
    std::unique_ptr<NutritionFact> m_nutritionFact;
    int m_productWeightInGrams;
    bool m_isVegetarian;
    
public:
    Ingredient(int weight, bool isVegetarian)
        : m_productWeightInGrams{ weight }, m_isVegetarian{ isVegetarian }
    {
    }
    
    virtual ~Ingredient() {} // virtual destructor
    
    void setNutritionFact(std::unique_ptr<NutritionFact> nutrition);
    
    bool getIsVegetarian()        const; 
    int  getCaloriesInKcal()      const;
    int  getTotalFatInGram()      const;
    int  getSodiumInMilligram()   const;
    int  getCarbohydratesInGram() const;
    int  getProteinInGram()       const;
};

}

#endif /* Ingredient_hpp */
