#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"
#include "rubberduck.h"
#include "decoyduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Duck *d1 = new RedheadDuck();
    cout << "Name: ";
    d1->display();
    cout << "Voice: ";
    d1->performquack();
    cout << "Fly: ";
    d1->performfly();
    cout << "Swim: ";
    d1->swim();

    cout << "----------------" << endl;

    Duck *d2 = new MallardDuck();
    cout << "Name: ";
    d2->display();
    cout << "Voice: ";
    d2->performquack();
    cout << "Fly: ";
    d2->performfly();
    cout << "Swim: ";
    d2->swim();

    cout << "----------------" << endl;

    Duck *d3 = new RubberDuck();
    cout << "Name: ";
    d3->display();
    cout << "Voice: ";
    d3->performquack();
    cout << "Fly: ";
    d3->performfly();
    cout << "Swim: ";
    d3->swim();

    cout << "----------------" << endl;

    Duck *d4 = new DecoyDuck();
    cout << "Name: ";
    d4->display();
    cout << "Voice: ";
    d4->performquack();
    cout << "Fly: ";
    d4->performfly();
    cout << "Swim: ";
    d4->swim();

    return a.exec();
}
