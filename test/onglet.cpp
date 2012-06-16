#include "onglet.h"
#include "ui_onglet.h"
using namespace Ui;


Onglet::Onglet(){
    tab = new QTabWidget(this);
    QWidget *w = new QWidget;
    ui.setupUi(w);
    tab->addTab(w,QString("%1").arg(""));       //ajouter l'ui au tab
    connects();
    opAll();
    tab->resize(1000,450);
}

Onglet::~Onglet(){

}

void Onglet::opAll(){
    ui.Buttonxy->setEnabled(true);
    ui.Buttonmod->setEnabled(true);
    ui.Buttonsin->setEnabled(true);
    ui.Buttonsinh->setEnabled(true);
    ui.Buttoncos->setEnabled(true);
    ui.Buttoncosh->setEnabled(true);
    ui.Buttontan->setEnabled(true);
    ui.Buttontanh->setEnabled(true);
    ui.Buttonln->setEnabled(true);
    ui.Buttonlog->setEnabled(true);
    ui.Buttoninv->setEnabled(true);
    ui.Buttonsqrt->setEnabled(true);
    ui.Buttonfact->setEnabled(true);
    ui.Buttondollar->setEnabled(false);
}

void Onglet::opNonReels(){
     ui.Buttonmod->setEnabled(false);
     ui.Buttonfact->setEnabled(false);
}

void Onglet::opNonEntiers(){

}

void Onglet::opNonComplexes(){
     ui.Buttonxy->setEnabled(false);
     ui.Buttonmod->setEnabled(false);
     ui.Buttonsin->setEnabled(false);
     ui.Buttonsinh->setEnabled(false);
     ui.Buttoncos->setEnabled(false);
     ui.Buttoncosh->setEnabled(false);
     ui.Buttontan->setEnabled(false);
     ui.Buttontanh->setEnabled(false);
     ui.Buttonln->setEnabled(false);
     ui.Buttonlog->setEnabled(false);
     ui.Buttoninv->setEnabled(false);
     ui.Buttonsqrt->setEnabled(false);
     ui.Buttonfact->setEnabled(false);
}

void Onglet::opNonRationels(){
    ui.Buttonmod->setEnabled(false);
    ui.Buttonfact->setEnabled(false);
}

void Onglet::clavierBasicVisible(bool visible){
    ui.Buttonapo->setVisible(visible);
    ui.Buttondollar->setVisible(visible);
    ui.Buttonmod->setVisible(visible);
    ui.Buttonplus->setVisible(visible);
    ui.Buttonmoins->setVisible(visible);
    ui.Buttonfois->setVisible(visible);
    ui.Buttondiviser->setVisible(visible);
    ui.Buttoneval->setVisible(visible);
    ui.Buttonsqrt->setVisible(visible);
    ui.Buttonsign->setVisible(visible);
    ui.Buttoninv->setVisible(visible);
    ui.Buttonegale->setVisible(visible);
    ui.Buttonvirgule->setVisible(visible);
    ui.Button0->setVisible(visible);
    ui.Button1->setVisible(visible);
    ui.Button2->setVisible(visible);
    ui.Button3->setVisible(visible);
    ui.Button4->setVisible(visible);
    ui.Button5->setVisible(visible);
    ui.Button6->setVisible(visible);
    ui.Button7->setVisible(visible);
    ui.Button8->setVisible(visible);
    ui.Button9->setVisible(visible);
}

void Onglet::clavierAvanceVisible(bool visible){
    ui.Buttonswap->setVisible(visible);
    ui.Buttonmean->setVisible(visible);
    ui.Buttonsum->setVisible(visible);
    ui.Buttonxy->setVisible(visible);
    ui.Buttonx2->setVisible(visible);
    ui.Buttonx3->setVisible(visible);
    ui.Buttonsin->setVisible(visible);
    ui.Buttonsinh->setVisible(visible);
    ui.Buttoncos->setVisible(visible);
    ui.Buttoncosh->setVisible(visible);
    ui.Buttontan->setVisible(visible);
    ui.Buttontanh->setVisible(visible);
    ui.Buttonln->setVisible(visible);
    ui.Buttonlog->setVisible(visible);
    ui.Buttonfact->setVisible(visible);
}

void Onglet::connects(){
    connect(ui._modComplexeON,SIGNAL(toggled(bool)),this,SLOT(complexeActive()));
    connect(ui._modComplexeOFF,SIGNAL(toggled(bool)),this,SLOT(complexeDesactive()));
    connect(ui._modReels,SIGNAL(toggled(bool)),this,SLOT(constReel()));
    connect(ui._modRationnels,SIGNAL(toggled(bool)),this,SLOT(constRationel()));
    connect(ui._modEntiers,SIGNAL(toggled(bool)),this,SLOT(constEntier()));
    connect(ui._clavierBasic,SIGNAL(stateChanged(int)),this,SLOT(clavierBasic()));
    connect(ui._clavierAvance,SIGNAL(stateChanged(int)),this,SLOT(clavierAvance()));
    connect(ui.radioButtondegree,SIGNAL(toggled(bool)),this,SLOT(radian()));
    connect(ui.radioButtonradian,SIGNAL(toggled(bool)),this,SLOT(degre()));
    connect(ui.Buttondup,SIGNAL(clicked()),this,SLOT(dup()));
    connect(ui.Button0,SIGNAL(clicked()),this,SLOT(num0()));
    connect(ui.Button1,SIGNAL(clicked()),this,SLOT(num1()));
    connect(ui.Button2,SIGNAL(clicked()),this,SLOT(num2()));
    connect(ui.Button3,SIGNAL(clicked()),this,SLOT(num3()));
    connect(ui.Button4,SIGNAL(clicked()),this,SLOT(num4()));
    connect(ui.Button5,SIGNAL(clicked()),this,SLOT(num5()));
    connect(ui.Button6,SIGNAL(clicked()),this,SLOT(num6()));
    connect(ui.Button7,SIGNAL(clicked()),this,SLOT(num7()));
    connect(ui.Button8,SIGNAL(clicked()),this,SLOT(num8()));
    connect(ui.Button9,SIGNAL(clicked()),this,SLOT(num9()));
    connect(ui.Buttonegale,SIGNAL(clicked()),this,SLOT(enter()));

}

void Onglet::complexeActive(){
    opAll();
    opNonComplexes();
    ui.Buttondollar->setEnabled(true);
}

void Onglet::complexeDesactive(){
    opAll();
}

void Onglet::constReel(){
    opAll();
    opNonReels();
}

void Onglet::constRationel(){
    opAll();
    opNonRationels();
}

void Onglet::constEntier(){
    opAll();
    opNonEntiers();
}

void Onglet::clavierBasic(){
    clavierBasicVisible(ui._clavierBasic->isChecked());
}

void Onglet::clavierAvance(){
    clavierAvanceVisible(ui._clavierAvance->isChecked());
}

void Onglet::radian(){
    moteur.changerModeAngle("rad");
}

void Onglet::degre(){
    moteur.changerModeAngle("deg");
}

void Onglet::dup(){
}

void Onglet::drop(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::clear(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::swap(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::log(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::sinh(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::cosh(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::tanh(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::mean(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::ln(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::sin(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::cos(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::tan(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::sum(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::xy(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::x2(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::x3(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::fact(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::dollar(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::mod(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}


void Onglet::num0(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"0");
}

void Onglet::num1(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"1");
}

void Onglet::num2(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"2");
}

void Onglet::num3(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"3");
}

void Onglet::num4(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"4");
}

void Onglet::num5(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"5");
}

void Onglet::num6(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"6");
}

void Onglet::num7(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"7");
}

void Onglet::num8(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"8");
}

void Onglet::num9(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}


void Onglet::virgule(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::plus(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::moins(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::fois(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::diviser(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::eval(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::sqrt(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::signe(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::inv(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::enter(){
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}
