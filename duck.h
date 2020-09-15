#ifndef DUCK_H
#define DUCK_H

#include <iostream>

using namespace std;

class Duck
{
public:
    Duck();
    void swim();
    virtual void display() = 0;
};

#endif // DUCK_H
