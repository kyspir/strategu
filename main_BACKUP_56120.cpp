#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

<<<<<<< HEAD
    Duck *d4 = new MallardDuck();
    d4->display();
    d4->quack();
=======
    Duck *d3 = new MallardDuck();
    d3->display();
    d3->quack();

>>>>>>> develop

    return a.exec();
}
