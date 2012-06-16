//main.cpp
    #include <QApplication>
    #include "onglet.h"
    int main(int argc, char *argv[]){
        QApplication app(argc,argv);
        Onglet o;
        o.show();
        return app.exec();
    }
