#include "onglet.h"
#include "ui_onglet.h"
#include "calculatrice.h"
using namespace Ui;

Onglet::Onglet(unsigned int num, QTabWidget *tab, bool init) : numOnglet(num){
    if(init) {
       tab->setParent(this);
    }
    this->numOnglet = num;
    QWidget *w = new QWidget;
    ui.setupUi(w);
    tab->addTab(w,"Onglet "+QString("%1").arg(num));       //ajouter l'ui au tab
    //connecter les slots et les signaux
    connects();
    traitementMode();
    traitementAngle();
    tab->resize(850,420);
}

Onglet::Onglet(unsigned int num, QTabWidget *tab, Onglet* o) {
    this->numOnglet = num;
    QWidget *w = new QWidget;
    ui.setupUi(w);
    tab->addTab(w,"Onglet "+QString("%1").arg(num));       //ajouter l'ui au tab
    //connecter les slots et les signaux
    connects();
    traitementMode();
    traitementAngle();
    tab->resize(850,420);
    moteur = MoteurCalcul(o->getMot());
}

void Onglet::evenement::traitement(QString typeTraitement, Onglet *ong, QObject * sender){
    if(typeTraitement == "Mode") {
        ong->ui.Buttonxy->setEnabled(true);
        ong->ui.Buttonmod->setEnabled(true);
        ong->ui.Buttonsin->setEnabled(true);
        ong->ui.Buttonsinh->setEnabled(true);
        ong->ui.Buttoncos->setEnabled(true);
        ong->ui.Buttoncosh->setEnabled(true);
        ong->ui.Buttontan->setEnabled(true);
        ong->ui.Buttontanh->setEnabled(true);
        ong->ui.Buttonln->setEnabled(true);
        ong->ui.Buttonlog->setEnabled(true);
        ong->ui.Buttoninv->setEnabled(true);
        ong->ui.Buttonsqrt->setEnabled(true);
        ong->ui.Buttonfact->setEnabled(true);
        ong->ui.Buttondollar->setEnabled(true);
        //Mode complexe
        if(ong->ui._modComplexeON->isChecked()){
            opNonComplexes(ong);
            if(ong->ui._modEntiers->isChecked()){
                ong->moteur.changerMode("CZ");
                ong->ui.PileCalcul->setPlainText("");
                ong->modeCalcul="CZ";
            }
            if(ong->ui._modRationnels->isChecked()){
                ong->moteur.changerMode("CQ");
                ong->ui.PileCalcul->setPlainText("");
                opNonRationels(ong);
                ong->modeCalcul="CQ";
            }
            if(ong->ui._modReels->isChecked()){
                ong->moteur.changerMode("C");
                ong->ui.PileCalcul->setPlainText("");
                opNonReels(ong);
                ong->modeCalcul="C";
            }
        } else {
            ong->ui.Buttondollar->setEnabled(false);
            if(ong->ui._modEntiers->isChecked()){
                ong->moteur.changerMode("Z");
                ong->ui.PileCalcul->setPlainText("");
                ong->modeCalcul="Z";
            }
            if(ong->ui._modRationnels->isChecked()){
                ong->moteur.changerMode("Q");
                ong->ui.PileCalcul->setPlainText("");
                opNonRationels(ong);
                ong->modeCalcul="Q";
            }
            if(ong->ui._modReels->isChecked()){
                ong->moteur.changerMode("R");
                ong->ui.PileCalcul->setPlainText("");
                opNonReels(ong);
                ong->modeCalcul="R";
            }
        }
    } else if(typeTraitement == "Angle") {
        if(ong->ui.radioButtonradian->isChecked()){
            ong->moteur.changerAngle("Radian");
        } else if(ong->ui.radioButtondegree->isChecked()){
            ong->moteur.changerAngle("Degre");
        }
    } else if(typeTraitement == "Boutons") {
        if(sender == ong->ui.Button0){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+"0");}
        else if (sender == ong->ui.Button1){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+"1");}
        else if (sender == ong->ui.Button2){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+"2");}
        else if (sender == ong->ui.Button3){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+"3");}
        else if (sender == ong->ui.Button4){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+"4");}
        else if (sender == ong->ui.Button5){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+"5");}
        else if (sender == ong->ui.Button6){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+"6");}
        else if (sender == ong->ui.Button7){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+"7");}
        else if (sender == ong->ui.Button8){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+"8");}
        else if (sender == ong->ui.Button9){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+"9");}
        else if (sender == ong->ui.Buttonapo){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" ' ");}
        else if (sender == ong->ui.Buttonclear){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" CLEAR ");}
        else if (sender == ong->ui.Buttoncos){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" COS ");}
        else if (sender == ong->ui.Buttoncosh){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" COSH ");}
        else if (sender == ong->ui.Buttondiviser){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" / ");}
        else if (sender == ong->ui.Buttondollar){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+"$");}
        else if (sender == ong->ui.Buttondrop){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" DROP ");}
        else if (sender == ong->ui.Buttondup){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" DUP ");}
        else if (sender == ong->ui.Buttoneval){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" EVAL ");}
        else if (sender == ong->ui.Buttonfact){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" FACT ");}
        else if (sender == ong->ui.Buttonfois){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" * ");}
        else if (sender == ong->ui.Buttoninv){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" INV ");}
        else if (sender == ong->ui.Buttonln){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" LN ");}
        else if (sender == ong->ui.Buttonlog){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" LOG ");}
        else if (sender == ong->ui.Buttonmean){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" MEAN ");}
        else if (sender == ong->ui.Buttonmod){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" MOD ");}
        else if (sender == ong->ui.Buttonmoins){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" - ");}
        else if (sender == ong->ui.Buttonplus){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" + ");}
        else if (sender == ong->ui.Buttonsign){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" SIGN ");}
        else if (sender == ong->ui.Buttonsin){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" SIN ");}
        else if (sender == ong->ui.Buttonsinh){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" SINH ");}
        else if (sender == ong->ui.Buttonsum){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" SUM ");}
        else if (sender == ong->ui.Buttonspace){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" ");}
        else if (sender == ong->ui.Buttonsqrt){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" SQRT ");}
        else if (sender == ong->ui.Buttonswap){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" SWAP ");}
        else if (sender == ong->ui.Buttontan){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" TAN ");}
        else if (sender == ong->ui.Buttontanh){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" TANH ");}
        else if (sender == ong->ui.Buttonvirgule){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" . ");}
        else if (sender == ong->ui.Buttonx2){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" SQR ");}
        else if (sender == ong->ui.Buttonx3){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" CUBE ");}
        else if (sender == ong->ui.Buttonxy){ ong->ui.lineEdit->setText(ong->ui.lineEdit->text()+" POW ");}
        else if (sender == ong->ui.Buttonenter){
            ong->pile_affichage.push(ong->ui.lineEdit->text());
            ong->moteur.ajouterResoudre(ong->ui.lineEdit->text());
            QString resultat;
            for(int i = 0; i < ong->moteur.getPile().getPile().size(); i++){
                resultat = resultat + ong->moteur.getPile().getPile()[i]->getString() + "\n";
            }
            ong->ui.PileCalcul->setPlainText(resultat);
            ong->pile_affichage.push(ong->moteur.getPile().getString() + "\n");
            resultat = "";
            for(int i = 0; i < ong->pile_affichage.size(); i++){
                resultat = resultat + ong->pile_affichage[i] + "\n";
            }
            ong->ui.PileAffichage->setPlainText(resultat);
            //Vider le QLineEdit
            ong->ui.lineEdit->setText("");}
  } else if(typeTraitement == "Clavier") {
        evenement::clavierBasicVisible(ong->ui._clavierBasic->isChecked(), ong);
        evenement::clavierAvanceVisible(ong->ui._clavierAvance->isChecked(), ong);
    }
}

void Onglet::evenement::opNonReels(Onglet* ong){
     ong->ui.Buttonmod->setEnabled(false);
     ong->ui.Buttonfact->setEnabled(false);
}

void Onglet::evenement::opNonComplexes(Onglet* ong){
     ong->ui.Buttonxy->setEnabled(false);
     ong->ui.Buttonmod->setEnabled(false);
     ong->ui.Buttonsin->setEnabled(false);
     ong->ui.Buttonsinh->setEnabled(false);
     ong->ui.Buttoncos->setEnabled(false);
     ong->ui.Buttoncosh->setEnabled(false);
     ong->ui.Buttontan->setEnabled(false);
     ong->ui.Buttontanh->setEnabled(false);
     ong->ui.Buttonln->setEnabled(false);
     ong->ui.Buttonlog->setEnabled(false);
     ong->ui.Buttoninv->setEnabled(false);
     ong->ui.Buttonsqrt->setEnabled(false);
     ong->ui.Buttonfact->setEnabled(false);
}

void Onglet::evenement::opNonRationels(Onglet* ong){
    ong->ui.Buttonmod->setEnabled(false);
    ong->ui.Buttonfact->setEnabled(false);
}


void Onglet::evenement::clavierBasicVisible(bool visible, Onglet* ong){
    ong->ui.Buttonapo->setVisible(visible);
    ong->ui.Buttondollar->setVisible(visible);
    ong->ui.Buttonmod->setVisible(visible);
    ong->ui.Buttonplus->setVisible(visible);
    ong->ui.Buttonmoins->setVisible(visible);
    ong->ui.Buttonfois->setVisible(visible);
    ong->ui.Buttondiviser->setVisible(visible);
    ong->ui.Buttoneval->setVisible(visible);
    ong->ui.Buttonsqrt->setVisible(visible);
    ong->ui.Buttonsign->setVisible(visible);
    ong->ui.Buttoninv->setVisible(visible);
    ong->ui.Buttonenter->setVisible(visible);
    ong->ui.Buttonvirgule->setVisible(visible);
    ong->ui.Button0->setVisible(visible);
    ong->ui.Button1->setVisible(visible);
    ong->ui.Button2->setVisible(visible);
    ong->ui.Button3->setVisible(visible);
    ong->ui.Button4->setVisible(visible);
    ong->ui.Button5->setVisible(visible);
    ong->ui.Button6->setVisible(visible);
    ong->ui.Button7->setVisible(visible);
    ong->ui.Button8->setVisible(visible);
    ong->ui.Button9->setVisible(visible);
    ong->ui.Buttonspace->setVisible(visible);
}

void Onglet::evenement::clavierAvanceVisible(bool visible, Onglet* ong){
    ong->ui.Buttonswap->setVisible(visible);
    ong->ui.Buttonmean->setVisible(visible);
    ong->ui.Buttonsum->setVisible(visible);
    ong->ui.Buttonxy->setVisible(visible);
    ong->ui.Buttonx2->setVisible(visible);
    ong->ui.Buttonx3->setVisible(visible);
    ong->ui.Buttonsin->setVisible(visible);
    ong->ui.Buttonsinh->setVisible(visible);
    ong->ui.Buttoncos->setVisible(visible);
    ong->ui.Buttoncosh->setVisible(visible);
    ong->ui.Buttontan->setVisible(visible);
    ong->ui.Buttontanh->setVisible(visible);
    ong->ui.Buttonln->setVisible(visible);
    ong->ui.Buttonlog->setVisible(visible);
    ong->ui.Buttonfact->setVisible(visible);
}

void Onglet::traitementMode() {
    evenement().traitement("Mode", this);
}


void Onglet::traitementAngle() {
    evenement().traitement("Angle", this);
}

void Onglet::traitementBoutons() {
    evenement().traitement("Boutons", this, sender());
}


void Onglet::traitementClavier() {
    evenement().traitement("Clavier", this);
}


void Onglet::connects(){
    connect(ui._modComplexeON,SIGNAL(toggled(bool)),this,SLOT(traitementMode()));
    connect(ui._modComplexeOFF,SIGNAL(toggled(bool)),this,SLOT(traitementMode()));
    connect(ui._modReels,SIGNAL(toggled(bool)),this,SLOT(traitementMode()));
    connect(ui._modRationnels,SIGNAL(toggled(bool)),this,SLOT(traitementMode()));
    connect(ui._modEntiers,SIGNAL(toggled(bool)),this,SLOT(traitementMode()));
    connect(ui._clavierBasic,SIGNAL(stateChanged(int)),this,SLOT(traitementClavier()));
    connect(ui._clavierAvance,SIGNAL(stateChanged(int)),this,SLOT(traitementClavier()));
    connect(ui.radioButtondegree,SIGNAL(toggled(bool)),this,SLOT(traitementAngle()));
    connect(ui.radioButtonradian,SIGNAL(toggled(bool)),this,SLOT(traitementAngle()));
    connect(ui.Buttondup,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttondrop,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonclear,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonswap,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonmean,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonsum,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonlog,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonln,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonxy,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonsinh,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonsin,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonx2,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttoncosh,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttoncos,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonx3,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttontanh,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttontan,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonfact,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonapo,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttondollar,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonmod,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Button0,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Button1,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Button2,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Button3,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Button4,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Button5,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Button6,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Button7,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Button8,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Button9,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonvirgule,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonplus,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonmoins,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonfois,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttondiviser,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttoneval,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonsqrt,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonsign,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttoninv,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonenter,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
    connect(ui.Buttonspace,SIGNAL(clicked()),this,SLOT(traitementBoutons()));
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
}
