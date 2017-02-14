//
//  FirstController.h
//  FirstAfternoonCPlusPlus
//
//  Created by Palesh, Mark on 1/23/17.
//  Copyright © 2017 Palesh, Mark. All rights reserved.
//

#ifndef FirstController_h
#define FirstController_h

#include "../Model/Node.hpp"
#include "../Model/IntNodeArray.hpp"
#include <string>

using namespace std;

class FirstController
{
private:
    void testIntArray();
    Node<int> numberNode;
    Node<string> wordNode;
    void testNodes();
public:
    FirstController();
    void start();
    
};

#endif // FirstController_h
