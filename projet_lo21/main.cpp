#include <QtGui/QApplication>
#include "onglet.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Onglet o1,o2;
    o1.show();
    o2.show();

    
    return a.exec();
}
