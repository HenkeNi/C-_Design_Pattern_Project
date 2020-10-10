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
private:
    int m_totalKcal;
    double m_totalCarbohydrates;
    double m_totalFat;
    double m_totalSodium;
    double m_totalProtein;
    
public:
    
    NutritionFact& setKcal(int kcal);
    NutritionFact& setCarbohydrates(double carbs);
    NutritionFact& setFat(double fat);
    NutritionFact& setSodium(double sodium);
    NutritionFact& setProtein(double protein);
    
    int    getKcal()    const { return m_totalKcal;            }
    double getFat()     const { return m_totalFat;             }
    double getSodium()  const { return m_totalSodium;          }
    double getCarbs()   const { return m_totalCarbohydrates;   }
    double getProtein() const { return m_totalProtein;         }
    
    friend std::ostream& operator<< (std::ostream& out, const NutritionFact &f);
};

}


#endif /* NutritionFact_hpp */
