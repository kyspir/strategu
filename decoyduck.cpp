#include "decoyduck.h"

DecoyDuck::DecoyDuck()
{
    quackBehavior = new mutequack();
    flyBehavior = new flynoway();
}

void DecoyDuck::display() {
    cout << "Im decoy duck" << endl;
}
