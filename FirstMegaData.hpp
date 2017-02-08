//
//  FirstMegaData.hpp
//  FirstAfternoonCPlusPlus
//
//  Created by Palesh, Mark on 2/6/17.
//  Copyright © 2017 Palesh, Mark. All rights reserved.
//

#ifndef FirstMegaData_hpp
#define FirstMegaData_hpp

#include <stdio.h>

class IntNodeArray
{
private:
    IntNode * front;
    int size;
    
public:
    IntNodeArray(int size);
    void setAtIndex(int index, int value);
    int getForIndex(int index);
    int getSize();
};


#endif /* IntArray_hpp */
