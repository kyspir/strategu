#include <QCoreApplication>
#include "duck.h"
#include "quackable.h"
#include "flybehavior.h"
#include "mallardduck.h"
#include "redheadduck.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Duck *md = new MallardDuck();
    md->display();
    md->swim();

    cout << "------------------"<< endl;

    Duck *rd = new RedheadDuck();
    rd->display();
    rd->swim();

    cout << "------------------"<< endl;

    return a.exec();
}
