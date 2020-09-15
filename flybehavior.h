#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

#include <iostream>

using namespace std;

class flybehavior
{
public:
    flybehavior();
    virtual void fly() = 0;
};

#endif // FLYBEHAVIOR_H
