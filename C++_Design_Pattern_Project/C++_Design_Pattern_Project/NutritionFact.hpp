//
//  NutritionFact.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef NutritionFact_hpp
#define NutritionFact_hpp

#include <stdio.h>

namespace burger_program {

class NutritionFact
{
protected:
    int m_kcalPerGram;
    int m_totalFatPerGram;
    int m_sodiumPerGram;
    int m_carbohydratesPerGram;
    int m_proteinPerGram;
    
public:
    
    NutritionFact& setKcal(int kcal);
    NutritionFact& setFat(int fat);
    NutritionFact& setSodium(int sodium);
    NutritionFact& setCarbohydrates(int carbs);
    NutritionFact& setProtein(int protein);
    
    int getKcal()    const { return m_kcalPerGram;          }
    int getFat()     const { return m_totalFatPerGram;      }
    int getSodium()  const { return m_sodiumPerGram;   }
    int getCarbs()   const { return m_carbohydratesPerGram; }
    int getProtein() const { return m_proteinPerGram;       }
    
};

}


#endif /* NutritionFact_hpp */
