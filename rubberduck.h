#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "duck.h"
#include "quackable.h"

class RubberDuck : public Duck, Quackable
{
public:
    RubberDuck();
    virtual void display();
};

#endif // RUBBERDUCK_H
