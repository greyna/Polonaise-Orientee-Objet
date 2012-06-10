//main.cpp
    #include <QApplication>
    #include "widget.h"
    int main(int argc, char *argv[]){
        QApplication app(argc,argv);
        MyWidget s;
        s.show();
        return app.exec();
    }
