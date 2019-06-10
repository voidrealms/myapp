#include <QCoreApplication>

#include "../mylib/mylib.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Mylib mylib;
    mylib.test();

    return a.exec();
}
