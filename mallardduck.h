#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "duck.h"
#include "flybehavior.h"
#include "quackable.h"


class MallardDuck : public Duck, Flyable, Quackable
{
public:
    MallardDuck();
    virtual void display();
};

#endif // MALLARDDUCK_H
