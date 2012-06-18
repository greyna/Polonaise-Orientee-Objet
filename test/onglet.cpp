#include "onglet.h"
#include "ui_onglet.h"
#include "calculatrice.h"
using namespace Ui;


Onglet::Onglet(unsigned int num){
    tab = new QTabWidget(this);
    QWidget *w = new QWidget;
    ui.setupUi(w);
    tab->addTab(w,"Onglet "+QString("%1").arg(num));       //ajouter l'ui au tab
    connects();
    opAll();
    tab->resize(850,420);
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
    connect(ui.Buttondrop,SIGNAL(clicked()),this,SLOT(drop()));
    connect(ui.Buttonclear,SIGNAL(clicked()),this,SLOT(clear()));
    connect(ui.Buttonswap,SIGNAL(clicked()),this,SLOT(swap()));
    connect(ui.Buttonmean,SIGNAL(clicked()),this,SLOT(mean()));
    connect(ui.Buttonsum,SIGNAL(clicked()),this,SLOT(sum()));
    connect(ui.Buttonlog,SIGNAL(clicked()),this,SLOT(log()));
    connect(ui.Buttonln,SIGNAL(clicked()),this,SLOT(ln()));
    connect(ui.Buttonxy,SIGNAL(clicked()),this,SLOT(xy()));
    connect(ui.Buttonsinh,SIGNAL(clicked()),this,SLOT(sinh()));
    connect(ui.Buttonsin,SIGNAL(clicked()),this,SLOT(sin()));
    connect(ui.Buttonx2,SIGNAL(clicked()),this,SLOT(x2()));
    connect(ui.Buttoncosh,SIGNAL(clicked()),this,SLOT(cosh()));
    connect(ui.Buttoncos,SIGNAL(clicked()),this,SLOT(cos()));
    connect(ui.Buttonx3,SIGNAL(clicked()),this,SLOT(x3()));
    connect(ui.Buttontanh,SIGNAL(clicked()),this,SLOT(tanh()));
    connect(ui.Buttontan,SIGNAL(clicked()),this,SLOT(tan()));
    connect(ui.Buttonfact,SIGNAL(clicked()),this,SLOT(fact()));
    connect(ui.Buttonapo,SIGNAL(clicked()),this,SLOT(apo()));
    connect(ui.Buttondollar,SIGNAL(clicked()),this,SLOT(dollar()));
    connect(ui.Buttonmod,SIGNAL(clicked()),this,SLOT(mod()));
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
    connect(ui.Buttonvirgule,SIGNAL(clicked()),this,SLOT(virgule()));
    connect(ui.Buttonplus,SIGNAL(clicked()),this,SLOT(plus()));
    connect(ui.Buttonmoins,SIGNAL(clicked()),this,SLOT(moins()));
    connect(ui.Buttonfois,SIGNAL(clicked()),this,SLOT(fois()));
    connect(ui.Buttondiviser,SIGNAL(clicked()),this,SLOT(diviser()));
    connect(ui.Buttoneval,SIGNAL(clicked()),this,SLOT(eval()));
    connect(ui.Buttonsqrt,SIGNAL(clicked()),this,SLOT(sqrt()));
    connect(ui.Buttonsign,SIGNAL(clicked()),this,SLOT(signe()));
    connect(ui.Buttoninv,SIGNAL(clicked()),this,SLOT(inv()));
    connect(ui.Buttonegale,SIGNAL(clicked()),this,SLOT(egale()));
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
    moteur.changerAngle("rad");
}

void Onglet::degre(){
    moteur.changerAngle("deg");
}

void Onglet::dup(){
    Calculatrice:: GetInstance().newOnglet();
}

void Onglet::drop(){

}

void Onglet::clear(){
    pile_affichage.clear();
}

void Onglet::swap(){

}

void Onglet::log(){
    ui.lineEdit->setText(ui.lineEdit->text()+"log");
}

void Onglet::sinh(){
    ui.lineEdit->setText(ui.lineEdit->text()+"sinh(0)");
}

void Onglet::cosh(){
    ui.lineEdit->setText(ui.lineEdit->text()+"cosh(0)");
}

void Onglet::tanh(){
    ui.lineEdit->setText(ui.lineEdit->text()+"tanh(0)");
}

void Onglet::mean(){
    ui.lineEdit->setText(ui.lineEdit->text()+"mean(0)");
}

void Onglet::ln(){
    ui.lineEdit->setText(ui.lineEdit->text()+"ln(0)");
}

void Onglet::sin(){
    ui.lineEdit->setText(ui.lineEdit->text()+"sin(0)");
}

void Onglet::cos(){
    ui.lineEdit->setText(ui.lineEdit->text()+"cos(0)");
}

void Onglet::tan(){
    ui.lineEdit->setText(ui.lineEdit->text()+"tan(0)");
}

void Onglet::sum(){
    ui.lineEdit->setText(ui.lineEdit->text()+"sum");
}

void Onglet::xy(){
    ui.lineEdit->setText(ui.lineEdit->text()+"^");
}

void Onglet::x2(){
    ui.lineEdit->setText(ui.lineEdit->text()+"^2");
}

void Onglet::x3(){
    ui.lineEdit->setText(ui.lineEdit->text()+"^3");
}

void Onglet::fact(){
    ui.lineEdit->setText(ui.lineEdit->text()+"!");
}

void Onglet::dollar(){
    ui.lineEdit->setText(ui.lineEdit->text()+"$");
}

void Onglet::mod(){
    ui.lineEdit->setText(ui.lineEdit->text()+"MOD");
}


void Onglet::num0(){
    ui.lineEdit->setText(ui.lineEdit->text()+"0");
}

void Onglet::num1(){
    ui.lineEdit->setText(ui.lineEdit->text()+"1");
}

void Onglet::num2(){
    ui.lineEdit->setText(ui.lineEdit->text()+"2");
}

void Onglet::num3(){
    ui.lineEdit->setText(ui.lineEdit->text()+"3");
}

void Onglet::num4(){
    ui.lineEdit->setText(ui.lineEdit->text()+"4");
}

void Onglet::num5(){
    ui.lineEdit->setText(ui.lineEdit->text()+"5");
}

void Onglet::num6(){
    ui.lineEdit->setText(ui.lineEdit->text()+"6");
}

void Onglet::num7(){
    ui.lineEdit->setText(ui.lineEdit->text()+"7");
}

void Onglet::num8(){
    ui.lineEdit->setText(ui.lineEdit->text()+"8");
}

void Onglet::num9(){
    ui.lineEdit->setText(ui.lineEdit->text()+"9");
}

void Onglet::apo(){
    ui.lineEdit->setText(ui.lineEdit->text()+"'");
}

void Onglet::virgule(){
    ui.lineEdit->setText(ui.lineEdit->text()+",");
}

void Onglet::plus(){
    ui.lineEdit->setText(ui.lineEdit->text()+"+");
}

void Onglet::moins(){
    ui.lineEdit->setText(ui.lineEdit->text()+"-");
}

void Onglet::fois(){
    ui.lineEdit->setText(ui.lineEdit->text()+"*");
}

void Onglet::diviser(){
    ui.lineEdit->setText(ui.lineEdit->text()+"/");
}

void Onglet::eval(){
}

void Onglet::sqrt(){
    ui.lineEdit->setText(ui.lineEdit->text()+"sqrt(0)");
}

void Onglet::signe(){
    ui.lineEdit->setText(ui.lineEdit->text()+"negate(0)");
}

void Onglet::inv(){
    ui.lineEdit->setText(ui.lineEdit->text()+"inv");
}

void Onglet::egale(){

}

void Onglet::enter(){
    pile_affichage.push(ui.lineEdit->text());
}
