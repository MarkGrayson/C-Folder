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
#include "../Model/Array.h"
#include "../Model/IntNodeArray.hpp"
#include <string>
#include "../Model/List.hpp"
#include "../Model/Stack.h"
#include "../Model/DoubleList.h"
#include "../Model/Queue.h"
#include "../Model/CircularList.hpp"

using namespace std;

class FirstController
{
private:
    void testIntArray();
    void testNodes();
    void testAdvancedFeatures();
    void testDestructor();
    void testListIntro();
    void testDoubleList();
    void testListTiming();
public:
    FirstController();
    void start();
    
};

#endif // FirstController_h
