//
//  FirstController.cpp
//  FirstAfternoonCPlusPlus
//
//  Created by Palesh, Mark on 1/23/17.
//  Copyright © 2017 Palesh, Mark. All rights reserved.
//

#include <iostream>
#include "FirstController.h"

using namespace std;

void FirstController :: start()
{
    cout << "Suh Dude!!" << endl;
    this->specialOutput();
}

void FirstController :: specialOutput()
{
    cout << "How old is you? " << endl;
    int age;
    cin >> age;
    cout << "Your " << age << endl;
    cout << "What's your name?" << endl;
    string name;
    cin >> name;
    cout << "Your name is " << name << "? Dang Daniel" << endl;\
    cin.ignore();
    cin >> name;
    cout << name;
    cout << "What's your name and age" << endl;
    cin >> name >> age;
    cout << "You said " << name << " and " << age << endl;
    cout << "What is your full name?" << endl;
    getline(cin, name);
    cout << name << endl;
}
