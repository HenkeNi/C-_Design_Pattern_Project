//
//  Bun.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef Bun_hpp
#define Bun_hpp

#include "Ingredient.hpp"
#include "NutritionFact.hpp"
#include <stdio.h>
#include <string>

namespace burger_program {

// TODO: Should bun be an ingredient??
class Bun : public Ingredient
{
private:
    std::string m_bunType{};
    
public:
    Bun(const std::string &bunType, int weight)
        : Ingredient{ weight }, m_bunType{ bunType }
    {
        setIngredientNutrition();
    }
    
    void setIngredientNutrition();
    const std::string& getBunType() const { return m_bunType; }
  
};

}

#endif /* Bun_hpp */
