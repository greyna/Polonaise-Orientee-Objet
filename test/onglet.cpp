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
    pile_affichage.push(Operation("LOGD"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"log");
}

void Onglet::sinh(){
    pile_affichage.push(Operation("SINH"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"sinh(0)");
}

void Onglet::cosh(){
    pile_affichage.push(Operation("COSH"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"cosh(0)");
}

void Onglet::tanh(){
    pile_affichage.push(Operation("TANH"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"tanh(0)");
}

void Onglet::mean(){
    pile_affichage.push(Operation("MEAN"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"mean(0)");
}

void Onglet::ln(){
    pile_affichage.push(Operation("LN"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"ln(0)");
}

void Onglet::sin(){
    pile_affichage.push(Operation("SIN"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"sin(0)");
}

void Onglet::cos(){
    pile_affichage.push(Operation("COS"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"cos(0)");
}

void Onglet::tan(){
    pile_affichage.push(Operation("TAN"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"tan(0)");
}

void Onglet::sum(){
    pile_affichage.push(Operation("SUM"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"sum");
}

void Onglet::xy(){
    pile_affichage.push(Operation("POW"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"^");
}

void Onglet::x2(){
    pile_affichage.push(Operation("SQR"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"^2");
}

void Onglet::x3(){
    pile_affichage.push(Operation("CUBE"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"^3");
}

void Onglet::fact(){
    pile_affichage.push(Operation("FACT"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"!");
}

void Onglet::dollar(){
    pile_affichage.push(Operation("$"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"$");
}

void Onglet::mod(){
    pile_affichage.push(Operation("MOD"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"MOD");
}


void Onglet::num0(){
    pile_affichage.push(Entier("0"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"0");
}

void Onglet::num1(){
    pile_affichage.push(Entier("1"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"1");
}

void Onglet::num2(){
    pile_affichage.push(Entier("2"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"2");
}

void Onglet::num3(){
    pile_affichage.push(Entier("3"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"3");
}

void Onglet::num4(){
    pile_affichage.push(Entier("4"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"4");
}

void Onglet::num5(){
    pile_affichage.push(Entier("5"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"5");
}

void Onglet::num6(){
    pile_affichage.push(Entier("6"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"6");
}

void Onglet::num7(){
    pile_affichage.push(Entier("7"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"7");
}

void Onglet::num8(){
    pile_affichage.push(Entier("8"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"8");
}

void Onglet::num9(){
    pile_affichage.push(Entier("9"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"9");
}

void Onglet::apo(){
    //pile_affichage.push("'");
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"'");
}

void Onglet::virgule(){
    //pile_affichage.push(",");
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+",");
}

void Onglet::plus(){
    pile_affichage.push(Operation("+"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"+");
}

void Onglet::moins(){
    pile_affichage.push(Operation("-"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"-");
}

void Onglet::fois(){
    pile_affichage.push(Operation("*"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"*");
}

void Onglet::diviser(){
    pile_affichage.push(Operation("/"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"/");
}

void Onglet::eval(){
    pile_affichage.push(Operation("EVAL"));
}

void Onglet::sqrt(){
    pile_affichage.push(Operation("SQRT"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"sqrt(0)");
}

void Onglet::signe(){
    pile_affichage.push(Operation("SIGN"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"negate(0)");
}

void Onglet::inv(){
    pile_affichage.push(Operation("INV"));
    ui.piledisplay->setPlainText(ui.piledisplay->toPlainText()+"inv");
}

void Onglet::enter(){
    pile_affichage.push(Operation("="));
}
