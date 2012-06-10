#include "widget.h"
using namespace Ui;

MyWidget::MyWidget(){
    tab = new QTabWidget(this);
    nbr_onglets = 0;
    nbr_max = 10;
    onglets = new Onglet*[10];
    MyWidget::add();
    tab->resize(1000,450);
    connect(onglets[0]->Buttondup,SIGNAL(clicked()),this,SLOT(slotChild()));
}
MyWidget::~MyWidget(){
}

void MyWidget::add(){
    QWidget *w = new QWidget;
    onglets[nbr_onglets] = new Onglet();
    onglets[nbr_onglets]->setupUi(w);
    tab->addTab(w,QString("%1").arg(nbr_onglets)+"eme");
    nbr_onglets++;
}


void MyWidget::slotChild(){
    if(nbr_max > nbr_onglets){
        MyWidget::add();
    } else {


    }
}
