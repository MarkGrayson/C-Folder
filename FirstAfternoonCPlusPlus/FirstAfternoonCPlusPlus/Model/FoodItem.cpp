//
//  FoodItem.cpp
//  FirstAfternoonCPlusPlus
//
//  Created by Palesh, Mark on 3/13/17.
//  Copyright © 2017 Palesh, Mark. All rights reserved.
//

#include "FoodItem.hpp"

FoodItem :: FoodItem()
{
    this->calories = 999;
    this->foodName = "blah blah";
    this->cost = 1234.21;
    this->delicious = false;
}

FoodItem :: FoodItem(string name)
{
    this->foodName = name;
    this->cost = 4236.29;
    this->calories = 23;
    this->delicious = true;
}

int FoodItem :: getCalories()
{
    return calories;
}

double FoodItem :: getCost()
{
    return cost;
}

string FoodItem :: getFoodName()
{
    return foodName;
}

bool FoodItem :: isDelicious()
{
    return delicious;
}

void FoodItem :: setCalories(int calories)
{
    this->calories = calories;
}

void FoodItem :: setCost(double cost)
{
    this->cost = cost;
}

void FoodItem :: setFoodName(string foodName)
{
    this->foodName = foodName;
}

void FoodItem :: setDelicious(bool delicious)
{
    this->delicious = delicious;
}

bool FoodItem :: operator < (FoodItem & otherFood)
{
    if(this->isDelicious() && otherFood.isDelicious())
    {
        if(this->getCalories() < otherFood.getCalories())
        {
            return true;
        }
        return false;
    }
    return false;
}
