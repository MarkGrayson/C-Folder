//
//  Tree.h
//  FirstAfternoonCPlusPlus
//
//  Created by Palesh, Mark on 4/11/17.
//  Copyright © 2017 Palesh, Mark. All rights reserved.
//

#ifndef Tree_h
#define Tree_h

#include <assert.h>

template <class Type>
class Tree
{
private:
    int height;
    int size;
    bool complete;
    bool balanced;
    
public:
    Tree();
    virtual ~Tree();
    virtual void printToFild() = 0;
    virtual void inOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    
    int getHeight() const;
    int getSize() const;
    bool isComplete() consst;
    bool isBalanced() const;
    
    void setHeight(int height);
    void setSize(int size);
    void setComplete(bool complete);
    void setBalanced(bool balanced);
};

#endif /* Tree_h */
