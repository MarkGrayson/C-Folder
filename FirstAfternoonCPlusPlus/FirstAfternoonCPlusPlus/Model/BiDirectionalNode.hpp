//
//  BiDirectionalNode.hpp
//  FirstAfternoonCPlusPlus
//
//  Created by Palesh, Mark on 2/27/17.
//  Copyright © 2017 Palesh, Mark. All rights reserved.
//

#ifndef BiDirectionalNode_h
#define BiDirectionalNode_h

template <class Type>
class BiDirectionalNode : public Node<Type>
{
private:
    BiDirectionalNode<Type> * previous;
    BiDirectionalNode<Type> * next;
    Type nodedata;
public:
    BiDirectionalNode();
    BiDirectionalNode(Type data);
    BiDirectionalNode(Type data, BiDirectionalNode<Type> * previous,\
        BiDirectionalNode<Type> * next);
    
}
template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node()
{
    
}

template <class Type>
BiDirectionalNode<Type> :: BiDirectionalNode() : Node<Type>(data)
{
    
}


#endif /* BiDirectionalNode_h */