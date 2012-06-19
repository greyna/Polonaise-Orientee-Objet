#include "onglet.h"
#include "ui_onglet.h"
#include "calculatrice.h"
using namespace Ui;

Onglet::Onglet(unsigned int num, QTabWidget *tab, unsigned int init) : numOnglet(num){
    if(init == 0) {
       tab->setParent(this);
    }
    this->numOnglet = num;
    QWidget *w = new QWidget;
    ui.setupUi(w);
    tab->addTab(w,"Onglet "+QString("%1").arg(num));       //ajouter l'ui au tab
    //connecter les slots et les signaux
    connects();
    mode();
    tab->resize(850,420);
}

Onglet::Onglet(unsigned int num, QTabWidget *tab, Onglet* o) {
    this->numOnglet = num;
    QWidget *w = new QWidget;
    ui.setupUi(w);
    tab->addTab(w,"Onglet "+QString("%1").arg(num));       //ajouter l'ui au tab
    //connecter les slots et les signaux
    connects();
    mode();
    tab->resize(850,420);
    this->moteur( new MoteurCalcul(o->getMot()));
}

Onglet::~Onglet(){

}
void Onglet::saveContext(){
    //histo.enregistre(modeCalcul, pile_affichage);
}

void Onglet::loadContext(){
    //histo.recuperer();
}

void Onglet::closeEvent(QCloseEvent *event){
    switch( QMessageBox::information(this, QObject::tr("Quit?"),QObject::tr("Do you really want to quit?"),QObject::tr("Yes"), QObject::tr("No"),0, 1 ) )
     {
        case 0:
            saveContext();
            event->accept();
            break;
        case 1:
     default:
            event->ignore();
            break;
     }
 }

void Onglet::mode(){
    opAll();
    //Mode complexe
    if(ui._modComplexeON->isChecked()){
        opNonComplexes();
        if(ui._modEntiers->isChecked()){
            moteur.changerMode("CZ");
            ui.PileCalcul->setPlainText("");
            opNonEntiers();
            modeCalcul="CZ";
        }
        if(ui._modRationnels->isChecked()){
            moteur.changerMode("CQ");
            ui.PileCalcul->setPlainText("");
            opNonRationels();
            modeCalcul="CQ";
        }
        if(ui._modReels->isChecked()){
            moteur.changerMode("C");
            ui.PileCalcul->setPlainText("");
            opNonReels();
            modeCalcul="C";
        }
    } else {
        ui.Buttondollar->setEnabled(false);
        if(ui._modEntiers->isChecked()){
            moteur.changerMode("Z");
            ui.PileCalcul->setPlainText("");
            opNonEntiers();
            modeCalcul="Z";
        }
        if(ui._modRationnels->isChecked()){
            moteur.changerMode("Q");
            ui.PileCalcul->setPlainText("");
            opNonRationels();
            modeCalcul="Q";
        }
        if(ui._modReels->isChecked()){
            moteur.changerMode("R");
            ui.PileCalcul->setPlainText("");
            opNonReels();
            modeCalcul="R";
        }
    }
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
    ui.Buttondollar->setEnabled(true);
}

//Deactiver les boutons dont la fonction n'est pas accessible aux reels
void Onglet::opNonReels(){
     ui.Buttonmod->setEnabled(false);
     ui.Buttonfact->setEnabled(false);
}

//Deactiver les boutons dont la fonction n'est pas accessible aux entiers
void Onglet::opNonEntiers(){

}

//Deactiver les boutons dont la fonction n'est pas accessible aux complexes
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

//Deactiver les boutons dont la fonction n'est pas accessible aux ractionels
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
    ui.Buttonenter->setVisible(visible);
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
    connect(ui._modComplexeON,SIGNAL(toggled(bool)),this,SLOT(mode()));
    connect(ui._modComplexeOFF,SIGNAL(toggled(bool)),this,SLOT(mode()));
    connect(ui._modReels,SIGNAL(toggled(bool)),this,SLOT(mode()));
    connect(ui._modRationnels,SIGNAL(toggled(bool)),this,SLOT(mode()));
    connect(ui._modEntiers,SIGNAL(toggled(bool)),this,SLOT(mode()));
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
    connect(ui.Buttonenter,SIGNAL(clicked()),this,SLOT(enter()));
    connect(ui.Buttonspace,SIGNAL(clicked()),this,SLOT(space()));
    connect(ui.Buttonannuler,SIGNAL(clicked()),this,SLOT(annuler()));
    connect(ui.Buttonretablir,SIGNAL(clicked()),this,SLOT(retablir()));
    QShortcut *nouvelOnglet= new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_N), this);
    connect(nouvelOnglet, SIGNAL(activated()), this,SLOT(newOnglet()));
    QShortcut *deleteOnglet= new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_W), this);
    connect(deleteOnglet, SIGNAL(activated()), this,SLOT(deleteOnglet()));
    QShortcut *dupOnglet= new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_T), this);
    connect(dupOnglet, SIGNAL(activated()), this,SLOT(dupOnglet()));
}

void Onglet::dupOnglet() {
    Calculatrice::GetInstance().duplicate(this);
}

void Onglet::newOnglet(){
    Calculatrice::GetInstance().newOnglet();
}

void Onglet::deleteOnglet(){
    Calculatrice::GetInstance().getTab()->removeTab(numOnglet);
    //Calculatrice::GetInstance().deleteOnglet(numOnglet);
    //cout<<numOnglet;
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
    ui.lineEdit->setText(ui.lineEdit->text()+" DUP ");
}

void Onglet::drop(){
    ui.lineEdit->setText(ui.lineEdit->text()+" DROP ");
}

void Onglet::clear(){
    ui.lineEdit->setText(ui.lineEdit->text()+" CLEAR ");
}

void Onglet::space(){
    ui.lineEdit->setText(ui.lineEdit->text()+" ");
}

void Onglet::swap(){
    ui.lineEdit->setText(ui.lineEdit->text()+" SWAP ");
}

void Onglet::log(){
    ui.lineEdit->setText(ui.lineEdit->text()+" LOG ");
}

void Onglet::sinh(){
    ui.lineEdit->setText(ui.lineEdit->text()+" SINH ");
}

void Onglet::cosh(){
    ui.lineEdit->setText(ui.lineEdit->text()+" COSH ");
}

void Onglet::tanh(){
    ui.lineEdit->setText(ui.lineEdit->text()+" TANH ");
}

void Onglet::mean(){
    ui.lineEdit->setText(ui.lineEdit->text()+" MEAN ");
}

void Onglet::ln(){
    ui.lineEdit->setText(ui.lineEdit->text()+" LN ");
}

void Onglet::sin(){
    ui.lineEdit->setText(ui.lineEdit->text()+" SIN ");
}

void Onglet::cos(){
    ui.lineEdit->setText(ui.lineEdit->text()+" COS ");
}

void Onglet::tan(){
    ui.lineEdit->setText(ui.lineEdit->text()+" TAN ");
}

void Onglet::sum(){
    ui.lineEdit->setText(ui.lineEdit->text()+" SUM ");
}

void Onglet::xy(){
    ui.lineEdit->setText(ui.lineEdit->text()+" POW ");
}

void Onglet::x2(){
    ui.lineEdit->setText(ui.lineEdit->text()+" SQR ");
}

void Onglet::x3(){
    ui.lineEdit->setText(ui.lineEdit->text()+" CUBE ");
}

void Onglet::fact(){
    ui.lineEdit->setText(ui.lineEdit->text()+" FACT ");
}

void Onglet::dollar(){
    ui.lineEdit->setText(ui.lineEdit->text()+"$");
}

void Onglet::mod(){
    ui.lineEdit->setText(ui.lineEdit->text()+" MOD ");
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
    ui.lineEdit->setText(ui.lineEdit->text()+" ' ");
}

void Onglet::virgule(){
    ui.lineEdit->setText(ui.lineEdit->text()+" . ");
}

void Onglet::plus(){
    ui.lineEdit->setText(ui.lineEdit->text()+" + ");
}

void Onglet::moins(){
    ui.lineEdit->setText(ui.lineEdit->text()+" - ");
}

void Onglet::fois(){
    ui.lineEdit->setText(ui.lineEdit->text()+" * ");
}

void Onglet::diviser(){
    ui.lineEdit->setText(ui.lineEdit->text()+" / ");
}

void Onglet::eval(){
    ui.lineEdit->setText(ui.lineEdit->text()+" EVAL ");
}

void Onglet::sqrt(){
    ui.lineEdit->setText(ui.lineEdit->text()+" SQRT ");
}

void Onglet::signe(){
    ui.lineEdit->setText(ui.lineEdit->text()+" SIGN ");
}

void Onglet::inv(){
    ui.lineEdit->setText(ui.lineEdit->text()+" INV ");
}

void Onglet::enter(){
    pile_affichage.push(ui.lineEdit->text());

    moteur.ajouterResoudre(ui.lineEdit->text());

    QString resultat;
    for(int i = 0; i < moteur.getPile().getPile().size(); i++){
        resultat = resultat + moteur.getPile().getPile()[i]->getString() + "\n";
    }
    ui.PileCalcul->setPlainText(resultat);

    pile_affichage.push(moteur.getPile().getString() + "\n");

    resultat = "";
    for(int i = 0; i < pile_affichage.size(); i++){
        resultat = resultat + pile_affichage[i] + "\n";
    }
    ui.PileAffichage->setPlainText(resultat);

    //Vider le QLineEdit
    ui.lineEdit->setText("");
}

void Onglet::annuler(){

}

void Onglet::retablir(){

}
