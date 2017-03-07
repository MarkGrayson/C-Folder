//
//  Header.h
//  FirstAfternoonCPlusPlus
//
//  Created by Palesh, Mark on 2/21/17.
//  Copyright © 2017 Palesh, Mark. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include "Node.hpp"
#include <assert.h>

template <class Type>
class List
{
private:
    Node<Type> * front;
    Node<Type> * end;
    int size;
    
public:
    List<Type>();
    List<Type> ( const List<Type> & source);
    ~List<Type>();
    
    int getSize() const;
    Node<Type> * getFront() const;
    Node<Type> * getEnd() const;
    
    void setAtIndex(int index, Type data);
    void addFront(Type value);
    void addEnd(Type value);
    Type getFromIndex(int index);
    Type remove(int index);
    Type setAtIndex(int index, Type value);
    bool contains(Type value);
    
};

template <class Type>
List<Type> :: List()
{
    this->size = 0;
    this->front = nullptr;
    this->end = nullptr;
}

template <class Type>
List<Type> :: ~List()
{
    Node<Type> * destruction = front;
    while(front != nullptr)
    {
        front = front->getNextPointer();
        delete destruction;
        destruction = front;
    }
}

template <class Type>
int List<Type> :: getSize() const
{
    return this->size;
}

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

template <class Type>
void List<Type> :: addAtIndex(int index, Type value)
{
    assert(index >= 0 && index <= size);
    if(index == 0)
    {
        addFront(value);
    }
    else if(index == size)
    {
        addEnd(value);
    }
    else
    {
        Node<Type>* insertedNode = new Node<Type>(value);
        Node<Type> * current = front;
        Node<Type> * previous = nullptr;
        
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNextPointer();
        }
        
        previous->setNodePointer(insertedNode);
        insertedNode->setNodePointer(current);
        
        size++;
    }
}

template <class Type>
Type List<Type> :: setAtIndex(int index, Type data)
{
    assett(index >= 0 && index < size);
    Type removeData;
    
    Node<Type> * current = front;
    
    for (int spot = 0; spot < index; spot++)
    {
        current = current->getNextPointer();
    }
    
    removedData = current->getNodeData();
    current->setNodeData(data);
    
    return removedData;
}

template <class Type>
Type List<Type> :: getFromIndex(int index)
{
    Type List<Type> :: remove(int index)
    {
        assert(index >= 0 && index < size);
        Type removed;
        
        Node<Type> * current = front;
        Node<Type> * previous = nullptr;
        Node<Type> * toBeRemoved = nullptr;
        
        if(index == 0)
        {
            toBeRemoved = front;
            this->front = front->getNextPointer();
        }
        else if (index == size - 1)
        {
            for(int spot = 0; spot < index; spot++)
            {
                previous = current;
                current = current->getNextPointer();
            }
            
            toBeRemoved = current;
            previous->setNodePointer(nullptr);
            this->end = previous;
        }
        else
        {
            for(int spot = 0; spot < index; spot++)
            {
                previous = current;
                current = current->getNextPointer();
            }
            
            toBeRemoved = current;
        }
        
        toBeRemoved = current;
        current = toBeRemoved->getNextPointer();
        previous->setNodePointer(current);
        
    }
    removed = toBeRemoved->getNodeData();
    
    delete toBeRemoved;
    
    size--;
    return removed;
}

template <class Type>
Type List<Type> ::  remove(int index)
{  }

template <class Type>
bool List<Type> :: contains(Type findMe)
{
    bool isInList = false;
    Node<Type> * current = front;
    
    for (int index = 0; index < size; index++)
    {
        if (current->getNodeData == findMe)
        {
            isInList = true;
            return isInList;
        }
    }
    
    return isInList;
}

#endif /* Header_h */
