//
//  BinarySearchTree.h
//  FirstAfternoonCPlusPlus
//
//  Created by Palesh, Mark on 4/11/17.
//  Copyright © 2017 Palesh, Mark. All rights reserved.
//

#ifndef BinarySearchTreeNode_h
#define BinarySearchTreeNode_h

#include "Node.hpp"

template <class Type>
class BinarySearchTreeNode : public Node<Type>
{
private:
    BinarySearchTreeNode<Type> * root;
    BinarySearchTreeNode<Type> * leftChild;
    BinarySearchTreeNode<Type> * rightChild;
    
public:
    BinarySearchTreeNode();
    BinarySearchTreeNode(Type data);
    
    BinarySearchTreeNode<Type> * getRootPointer();
    BinarySearchTreeNode<Type> * getleftChild();
    BinarySearchTreeNode<Type> * getRightChild();
    
    void setRootPointer(BinarySearchTreeNode<Type> * root);
    void setLeftChild(BinarySearchTreeNode<Type> * left);
    void setRightChild(BinarySearchTreeNode<Type> * right);
};

template <class Type>
BinarySearchTreeNode<Type> :: BinarySearchTreeNode() : Node<Type>()
{
    this->root = nullptr;
    this->leftChild = nullptr;
    this->rightChild = nullptr;
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreeNode<Type> :: getLeftChild()
{
    return this->leftChild;
}

template <class Type>
BinarySearchTreeNode<Type> * BinarySearchTreenode<Type> :: getRightChild()
{
    return this->rightChild;
}

template <class Type>
void BinarySearchTreeNode<Type> :: setRootPointer(BinarySearchTreeNode<Type>* root)
{
    this->root = root;
}

template <class Type>
void BinarySearchTreeNode<Type> :: setLeftChild(BinarySearchTreeNode<Type> * left)
{
    this>leftChild = left;
}

template <class Type>
void BinarySearchTreeNode<Type> :: setRightChild(BinarySearchTreeNode<Type> * right)
{
    this->rightChild = right;
}

#endif /* BinarySearchTree_h */
