//
//  BinarySearchTree.h
//  FirstAfternoonCPlusPlus
//
//  Created by Palesh, Mark on 4/11/17.
//  Copyright © 2017 Palesh, Mark. All rights reserved.
//

#ifndef BinarySearchTree_h
#define BinarySearchTree_h

#include "Tree.hpp"
#include "BinarySearchTreeNode.hpp"
#include <iostream>
using namespace std;

template <class Type>
class BinarySearchTree : public Tree<Type>
{
private:
    BinarySearchTreenNode<Type> * root;
    
    int calcualteSize(BinarySearchTreeNode<Type> * root);
    void inOrderTraversal(BinarySearchTreeNode<Type> * inStart);
    void preOrderTraversal(BinarySearchTreeNode<Type> * preStart);
    void postOrderTraversal(BinarySearchTreeNode<Type> * postStart);
    
    void removeNode(BinarySearchTreeNode<Type> * & removeMe);
    
public:
    BinarySearchTree();
    ~BinarySearchTree();
    
    BinarySearchTreeNode<Type> * getRoot();
    void setRoot(BinarySearchTreeNode<Type> * root);
    
    void inOrderTraversal();
    void preOrderTraversal();
    void postOrderTraversal();
    
    void printToFile();
    
    void demoTraversaSteps(BinarySearchTreeNode<Type> * node);
    
    bool contains(Type value);
    void insert(Type intemToInsert);
    void remove(Type value);
};

template <class Type>
BinarySearchTree<Type> :: BinarySearchTree() : Tree<Type>()
{
    this->root = nullptr;
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTree<Type> :: getRoot()
{
    return this->root;
}

template <class Type>
void BinarySearchTree<Type> :: setRoot(BinarySearchTreeNode<Type> * root)
{
    this->root = root;
}

template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal()
{
    
}

template <class Type>
void BinarySearchTree<Type> :: preOrderTraversal()
{
    if(preStrat != nullptr)
    {
        cout << "Node Contents: " << preStart->getNodeData() << endl;
        preOrderTraversal(preStart->getLeftChild());
        preOrderTraversal(preStart->getRightChild());
    }
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal()
{
    if(postStart != nullptr)
    {
        postOrderTraversal(postStart->getLeftChild());
        postOrderTraversal(postStart->getRightChild());
        cout << "Node Contents: " << postStart->getNodeData() << endl;
    }
}

template <class Type>
int BinarySearchTree<Type> :: calculateSize(BinarySearchTreeNode<Type> * start)
{
    return -99;
}
/*
 In Ordeer traversal goes in the order Left, Root, Right
 Notic that the non-recursive case does NOTHING
 */
template <class Type>
void BinarySearchTree<Type> :: inOrderTraversal(BinarySearchTreeNode<Type> * inStart)
{
    if(inStart != nullptr)
    {
        inOrderTraversal(inStart->getLeftChild());
        cout << "Node Contents: " << inStart->getNodeData() << endl;
        inOrderTraversal(inStart->getRightChild());
    }
}
/*
 Pre order traversal goes in the order Root, Left, Right 
 Notice that the non-recursive case does NOTHING
 */
template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinarySearchTreeNode<Type> * preStart)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: postOrderTraversal(BinarySearchTreeNode<Type> * postStart)
{
    
}

template <class Type>
void BinarySearchTree<Type> :: insert(Type itemToInsert)
{
    BinarySearchTreeNode<Type> * insertMe = new BinarySearchTreeNode<Type>(itemToInsert);
    BinarySearchTreeNode<Type> * previous = nullptr;
    BinarySearchTreeNode<Type> * current = root;
    
    if(current == nullptr)
    {
        root = insertMe;
    }
    else
    {
        while(current != nullptr)
        {
            previous = current;
            if(itemToInsert < current->getNodeData())
            {
                current = current->getLeftChild();
            }
            else if(itemToInsert > current->getNodeData())
            {
                current = current->getRightChild();
            }
            else //Remove cerr after verification of understanding
            {
                cerr << "Item exists already - Existing" << endl;
                delete insertMe;
                return;
            }
        }
        
        if (previous->getNodeData() > itemToInset)
        {
            previous->setLeftChild(insertMe);
        }
        else
        {
            previous->setRightChild(insertMe);
        }
        insertMe->setRootPointer(previous);
    }
}

template <class Type>
void BinarySearchTree<Type> :: demoTraversalSteps(BinarySearchTreeNode<Type> * node)
{
    
}

template <class Type>
bool BinarySearchTree<Type> :: contains(Type itemToFind)
{
    BinarySearchTreeNode<Type> * current = root;
    if(current == nullptr)
    {
        return false;
    }
    else
    {
        while(current != nullptr)
        {
            if(itemToFind == current->getNodeData())
            {
                return true;
            }
            else if (itemToFind < current->getNodeData())
            {
                current = current->getLeftChild();
            }
            else
            {
                current = current->getRightChild();
            }
        }
        return false;
    }
}

template <class Type>
void BinarySearchTree<Type> :: remove(Type getRideOfMe)
{
    if(root == nullptr)
    {
        cout << "Empty tree so removal is not possible" << endl;
    }
    else
    {
        BinarySearchTreeNode<Type> * current = root;
        BinarySearchTreeNode<Type> * previous = nullptr;
        bool hasBeenFound = false;
        
        while(current != nullptr && !hasBeenFound)
        {
            if(current->getNodeData() == getRidOfMe)
            {
                hasBeenFound = true;
            }
            else
            {
                previous = current;
                if(getRidOfMe < current->getNodeData())
                {
                    current = current->getLeftChild():
                }
                else
                {
                    current = current->getRightChild();
                }
            }
        }
        
        if(current == nullptr)
        {
            cerr << "Item not found, removal unsuccessful" << endl;
        }
        else if(hasBeenFound)
        {
            if(current == root)
            {
                removeNode(root);
            }
            else if(getRideOfMe < previous->getNodeData())
            {
                removeNode(previous->getLeftChild());
            }
            else
            {
                
                removeNode(previous->getRightChild());
            }
        }
    }
}

#endif /* BinarySearchTree_h */
