#pragma once

#include <iostream>
#include <QString>
#include "pileCst.h"

using namespace std;

namespace calcul {

class MoteurCalcul {
private:
    PileCst pile_stockage;
	
public:
    MoteurCalcul() { }
    MoteurCalcul(MoteurCalcul& a_copier) { pile_stockage = PileCst(a_copier.pile_stockage); }
    void ajouterResoudre(QString ajout);
    const PileCst& getPile() const { return pile_stockage; }
    void changerMode(QString mode_type = "C");
    void changerAngle (QString mode_angle = "degre");
};

}
