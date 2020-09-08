#include <QCoreApplication>
#include "duck.h"
#include "mallardduck.h"
#include "redheadduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Duck *d6 = new MallardDuck();
    d6->display();
    d6->quack();


    return a.exec();
}
