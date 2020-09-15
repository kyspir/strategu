#include "modelduck.h"

ModelDuck::ModelDuck()
{
    quackBehavior = new mutequack();
    flyBehavior = new flyrocketpowered();
}

void ModelDuck::display() {
    cout << "Im Model duck" << endl;
}
