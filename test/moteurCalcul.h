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
    void ajouterResoudre (QString ajout);
    void changerMode (QString mode_type = "C");
    void changerAngle (QString mode_angle = "degre");
};

}
