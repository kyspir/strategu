#include "redheadduck.h"

RedheadDuck::RedheadDuck()
{
    quackBehavior = new Quack();
    flyBehavior = new flywithwings();
}

void RedheadDuck::display() {
    cout << "Im redhead duck" << endl;
}
