#include "moteurCalcul.h"

using namespace std;
using namespace calcul;

void MoteurCalcul::ajouterResoudre (QString ajout) {
    pile_stockage.ajouter(ajout);
    // Communication au moteur d'affichage
    cout<<"Ajout : "<<ajout.toStdString()<<endl;
    cout<<"Pile de stockage : "<<pile_stockage.getString().toStdString()<<endl;
}

void MoteurCalcul::changerMode (QString mode_type) {
    if (mode_type=="C"||mode_type=="c") pile_stockage.setMode(C);
    else if (mode_type=="CQ"||mode_type=="cq") pile_stockage.setMode(CQ);
    else if (mode_type=="CZ"||mode_type=="cz") pile_stockage.setMode(CZ);
    else if (mode_type=="R"||mode_type=="r") pile_stockage.setMode(R);
    else if (mode_type=="Q"||mode_type=="q") pile_stockage.setMode(Q);
    else if (mode_type=="Z"||mode_type=="z") pile_stockage.setMode(Z);
}

void MoteurCalcul::changerAngle (QString mode_angle) {
    if (mode_angle=="Degre"||mode_angle=="degre") pile_stockage.setAngle(Degre);
    else if (mode_angle=="Radian"||mode_angle=="radian") pile_stockage.setAngle(Radian);
}
