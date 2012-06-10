#include "widget.h"
#include "ui_onglet.h"
using namespace Ui;

MyWidget::MyWidget(){
    tab = new QTabWidget(this);
    nbr_onglets = 0;
    nbr_max = 10;
    onglets = new Onglet*[10];
    MyWidget::add();
    tab->resize(1000,450);

}
MyWidget::~MyWidget(){
}

void MyWidget::add(){
    QWidget *w = new QWidget;
    onglets[nbr_onglets] = new Onglet();
    onglets[nbr_onglets]->setupUi(w);
    tab->addTab(w,QString("%1").arg(nbr_onglets)+"eme");
    connects(onglets[nbr_onglets]);
    nbr_onglets++;
}

void MyWidget::connects(Onglet* ong){
    connect(ong->Buttondup,SIGNAL(clicked()),this,SLOT(dupPressed()));
    connect(ong->Button0,SIGNAL(clicked()),this,SLOT(num0Pressed()));
    connect(ong->Button1,SIGNAL(clicked()),this,SLOT(num1Pressed()));
    connect(ong->Button2,SIGNAL(clicked()),this,SLOT(num2Pressed()));
    connect(ong->Button3,SIGNAL(clicked()),this,SLOT(num3Pressed()));
    connect(ong->Button4,SIGNAL(clicked()),this,SLOT(num4Pressed()));
    connect(ong->Button5,SIGNAL(clicked()),this,SLOT(num5Pressed()));
    connect(ong->Button6,SIGNAL(clicked()),this,SLOT(num6Pressed()));
    connect(ong->Button7,SIGNAL(clicked()),this,SLOT(num7Pressed()));
    connect(ong->Button8,SIGNAL(clicked()),this,SLOT(num8Pressed()));
    connect(ong->Button9,SIGNAL(clicked()),this,SLOT(num9Pressed()));
    connect(ong->Buttonegale,SIGNAL(clicked()),this,SLOT(enterPressed()));

}

void MyWidget::dupPressed(){
    //Si le nombre d'onglets ne d¨¦passe pas le nombre max
    if(nbr_max > nbr_onglets){
        MyWidget::add();
    } else {

    }
}

void MyWidget::num0Pressed(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"0");
}

void MyWidget::num1Pressed(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"1");
}

void MyWidget::num2Pressed(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"2");
}

void MyWidget::num3Pressed(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"3");
}

void MyWidget::num4Pressed(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"4");
}

void MyWidget::num5Pressed(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"5");
}

void MyWidget::num6Pressed(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"6");
}

void MyWidget::num7Pressed(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"7");
}

void MyWidget::num8Pressed(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"8");
}

void MyWidget::num9Pressed(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::enterPressed(){

}
