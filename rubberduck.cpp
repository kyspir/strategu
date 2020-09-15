#include "rubberduck.h"

RubberDuck::RubberDuck()
{
    quackBehavior = new squeak();
    flyBehavior = new flynoway();
}

void RubberDuck::display() {
    cout << "Im redhead duck" << endl;
}
