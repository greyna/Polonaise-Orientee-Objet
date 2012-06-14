#include "widget.h"
#include "ui_onglet.h"
using namespace Ui;

MyWidget::MyWidget(){
    tab = new QTabWidget(this);
    nbr_onglets = 0;
    nbr_max = 10;
    onglets = new Onglet*[10];
    MyWidget::newOnglet();
    tab->resize(1000,450);

}
MyWidget::~MyWidget(){
    //for(int i = 0; i < nbr_max; i++) ~QTabWidget::QTabWidget();
    delete[] tab;
}

void MyWidget:: changeMode() {

}

void MyWidget::newOnglet(){
    QWidget *w = new QWidget;
    onglets[nbr_onglets] = new Onglet();
    onglets[nbr_onglets]->setupUi(w);
    tab->addTab(w,QString("%1").arg(nbr_onglets)+"eme");
    connects(onglets[nbr_onglets]);
    nbr_onglets++;
}

void MyWidget::connects(Onglet* ong){
    connect(ong->_modComplexeON,SIGNAL(toggled(bool)),this,SLOT(complexeActive()));
    connect(ong->_modComplexeOFF,SIGNAL(toggled(bool)),this,SLOT(complexeDesactive()));
    connect(ong->Buttondup,SIGNAL(clicked()),this,SLOT(dup()));
    connect(ong->Button0,SIGNAL(clicked()),this,SLOT(num0()));
    connect(ong->Button1,SIGNAL(clicked()),this,SLOT(num1()));
    connect(ong->Button2,SIGNAL(clicked()),this,SLOT(num2()));
    connect(ong->Button3,SIGNAL(clicked()),this,SLOT(num3()));
    connect(ong->Button4,SIGNAL(clicked()),this,SLOT(num4()));
    connect(ong->Button5,SIGNAL(clicked()),this,SLOT(num5()));
    connect(ong->Button6,SIGNAL(clicked()),this,SLOT(num6()));
    connect(ong->Button7,SIGNAL(clicked()),this,SLOT(num7()));
    connect(ong->Button8,SIGNAL(clicked()),this,SLOT(num8()));
    connect(ong->Button9,SIGNAL(clicked()),this,SLOT(num9()));
    connect(ong->Buttonegale,SIGNAL(clicked()),this,SLOT(enter()));

}

void MyWidget::complexeActive(){
    onglets[nbr_onglets-1]->Buttondollar->setEnabled(true);
}

void MyWidget::complexeDesactive(){
    onglets[nbr_onglets-1]->Buttondollar->setEnabled(false);
}

void MyWidget::constReel(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::constRationel(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::constEntier(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::clavierBasic(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::clavierAvance(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::radian(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::degre(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::dup(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::drop(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::clear(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::swap(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::log(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::sinh(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::cosh(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::tanh(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::mean(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::ln(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::sin(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::cos(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::tan(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::sum(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::xy(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::x2(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::x3(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::fact(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::dollar(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::mod(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}


void MyWidget::num0(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"0");
}

void MyWidget::num1(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"1");
}

void MyWidget::num2(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"2");
}

void MyWidget::num3(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"3");
}

void MyWidget::num4(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"4");
}

void MyWidget::num5(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"5");
}

void MyWidget::num6(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"6");
}

void MyWidget::num7(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"7");
}

void MyWidget::num8(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"8");
}

void MyWidget::num9(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}


void MyWidget::virgule(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::plus(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::moins(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::fois(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::diviser(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::eval(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::sqrt(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::signe(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::inv(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}

void MyWidget::enter(){
    onglets[nbr_onglets-1]->piledisplay->setPlainText(onglets[nbr_onglets-1]->piledisplay->toPlainText()+"9");
}
