//
//  ShoeAdapter.hpp
//  C++_Design_Pattern_Project
//
//  Created by Henrik Jangefelt on 2020-10-03.
//  Copyright © 2020 Henrik Jangefelt Nilsson. All rights reserved.
//

#ifndef ShoeAdapter_hpp
#define ShoeAdapter_hpp

#include "IFoodItem.hpp"
#include "Shoe.hpp"

#include "NutritionFact.hpp"

#include <memory>
#include <stdio.h>


namespace burger_program {

// a wrapper around the Shoe class to make it compatible with IFoodItem (Adapter Pattern)
class ShoeAdapter : public IFoodItem // ShoeAdapter inherits from IFoodItem (interface)
{
private:
    std::shared_ptr<Shoe> m_shoe;  // (shared pointer) NOTE: this member doesn't own this resource (aggregation)
    //Shoe *m_shoe;
    NutritionFact m_nutrition;
    bool m_isEaten{ false };
    
public:
    ShoeAdapter(std::shared_ptr<Shoe> shoe)
        : m_shoe{ shoe } 
    {
        m_nutrition.setKcal(198).setFat(2).setSodium(0).setProtein(0).setCarbohydrates(4); // set NutritionFact
    }
        
    void printNutritionFact() const;
    void printIngredients()   const;
    
    virtual void eat() override;
};


}

#endif /* ShoeAdapter_hpp */
