//main.cpp
    #include <QApplication>
    #include "calculatrice.h"
    int main(int argc, char *argv[]){
        QApplication app(argc,argv);
        Calculatrice& c=Calculatrice::GetInstance();
        c.ouvrir();
        return app.exec();
    }
