#ifndef DUCK_H
#define DUCK_H

#include "quackbehavior.h"
#include "flybehavior.h"
#include "quack.h"
#include "flywithwings.h"
#include "mutequack.h"
#include "flynoway.h"
#include "squeak.h"

class Duck {
public:
    flybehavior *flyBehavior;
    quackbehavior *quackBehavior;

    void performfly();
    void performquack();

    void swim();
    virtual void display() = 0;
};

#endif
