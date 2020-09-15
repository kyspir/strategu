#ifndef QUACK_H
#define QUACK_H

#include "quackbehavior.h"

class Quack : public quackbehavior
{
public:
    Quack();
    virtual void quack();
};

#endif // QUACK_H
