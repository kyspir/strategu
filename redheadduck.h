#ifndef REDHEADDUCK_H
#define REDHEADDUCK_H

#include "duck.h"
#include "flybehavior.h"
#include "quackable.h"

class RedheadDuck : public Duck, Flyable, Quackable
{
public:
    RedheadDuck();
    virtual void display();
};

#endif // REDHEADDUCK_H
