#include "duck.h"

void Duck::performfly() {
     flyBehavior->fly();
}

void Duck::performquack() {
     quackBehavior->quack();
}

void Duck::swim() {
    cout << "bul-bul" << endl;
}
