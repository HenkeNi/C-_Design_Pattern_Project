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
#include <string>

namespace burger_program {

class Ingredient // rename Produce??
{
protected:
    std::string m_productName;
    double m_productVolume;
    std::string m_unitOfMeasurement;
    
public:
    Ingredient(const std::string &name, double volume, const std::string &unit)
        : m_productName{ name }, m_productVolume{ volume }, m_unitOfMeasurement{ unit }
    {
    }
    
    const  std::string& getProductName()       const { return m_productName;       }
    const  std::string& getUnitOfMeasurement() const { return m_unitOfMeasurement; }
    double              getProductVolume()     const { return m_productVolume;     }
    
    friend std::ostream& operator<< (std::ostream &out, const Ingredient &i);
};

}

#endif /* Ingredient_hpp */
