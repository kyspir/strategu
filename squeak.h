#ifndef SQUEAK_H
#define SQUEAK_H

#include "quackbehavior.h"

class squeak : public quackbehavior
{
public:
    squeak();
    virtual void quack();
};

#endif // SQUEAK_H
