//
//  FirstMegaData.cpp
//  FirstAfternoonCPlusPlus
//
//  Created by Palesh, Mark on 2/6/17.
//  Copyright © 2017 Palesh, Mark. All rights reserved.
//

#include "FirstMegaData.hpp"
#include <assert.h>

IntNodeArray :: IntNodeArray(int size)
{
    assert(size > 0);
    
    this->size = size;
    this->front = new IntNode();
    
    for(int index = 0; index < size; index++)
    {
        IntNode * current = new IntNode();
        current->setNodePointer(front);
        front = current;
    }
}
    
int IntNodeArray :: getFromIndex(int index)
{
    assert(index >= 0 && index < size);
    int value = 0;
    
    IntNode * current = front;
    
    for(int position = 0; position < index; position++)
    {
        current = current->getNodePointer();
    }
    
    value = current->getNodeData();
    
    return value;
}

