#include <iostream>
#include "PileOperator.h"
#include "Overload.h"
#include "Common.h"
#include "Controller.h"
#include <QtGui/QApplication>
#include "mainwindow.h"


int main(int argc, char *argv[]){



    QApplication a(argc, argv);

    Controller core;


    return a.exec();
}
