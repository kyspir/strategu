#include "mallardduck.h"

MallardDuck::MallardDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new flywithwings();
}

void MallardDuck::display() {
    cout << "Im mallardduck" << endl;
}
