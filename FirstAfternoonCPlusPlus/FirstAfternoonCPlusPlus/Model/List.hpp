//
//  Header.h
//  FirstAfternoonCPlusPlus
//
//  Created by Palesh, Mark on 2/21/17.
//  Copyright © 2017 Palesh, Mark. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include <assert.h>

class List
{
private:
    int size;
    List<Type> * front;
    
    
public:
    List();
    List(int size);
    List<Type>();
    List<Type>(const List<Type & toBeCopied);
    ~List<Type>();
    void setAtIndex(int index, Type value);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    int getSize();
    
};

template <class Type>
Node<Type> * List<Type> :: getEnd() const
{ }

template <class Type>
void List<Type> :: addFront(Type value)
{
    if(size == 0)
    {
        Node<Type> * first = new Node<Type>(value);
        this->front = first;
        this->end = first;
    }
    else
    {
        Node<Type> * newFirst = new Node<Type>();
        newFirst->setNodeData(value);
        newFirst->setNodePointer(front);
        //or
        //Node<Type> * newFirst = new Node<Type>(value, front);
        this->front = newFirst;
    }
    
    size++;
}

template <class Type>
void List<Type> :: addEnd(Type data)
{
    Node<Type> * added = new Node<Type>(data);
    if(size == 0)
    {
        this->front = added;
        this->end = added;
    }
    else
    {
        end->setNodePointer(added);
        this->end = added;
    }
    size++;

}

#endif /* Header_h */
