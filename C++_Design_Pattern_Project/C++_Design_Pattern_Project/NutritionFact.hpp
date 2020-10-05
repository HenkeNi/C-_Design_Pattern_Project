//
//  NutritionFact.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-09-28.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef NutritionFact_hpp
#define NutritionFact_hpp

#include <iostream>
#include <stdio.h>

namespace burger_program {

class NutritionFact
{
protected:
    int m_kcalPerGram;
    double m_carbohydratesPerGram;
    double m_totalFatPerGram;
    double m_sodiumPerGram;
    double m_proteinPerGram;
    
public:
    
    NutritionFact& setKcal(int kcal);
    NutritionFact& setCarbohydrates(double carbs);
    NutritionFact& setFat(double fat);
    NutritionFact& setSodium(double sodium);
    NutritionFact& setProtein(double protein);
    
    int    getKcal()    const { return m_kcalPerGram;          }
    double getFat()     const { return m_totalFatPerGram;      }
    double getSodium()  const { return m_sodiumPerGram;        }
    double getCarbs()   const { return m_carbohydratesPerGram; }
    double getProtein() const { return m_proteinPerGram;       }
    
    friend std::ostream& operator<< (std::ostream& out, const NutritionFact &f);
};

}


#endif /* NutritionFact_hpp */
