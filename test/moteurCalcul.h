#pragma once

#include <iostream>
#include <QString>
#include "operation.h"

using namespace std;

namespace calcul {

class MoteurCalcul {
private:
	enum Mode mode;
	enum ModeAngle mode_angle;
	PileExpression pile_stockage;
	stack<Operation> pile_operation;
	
public:
    void ajout (const QString& ajout);
	bool resoudre ();
    void changerMode (const QString& mode = "C");
    void changerModeAngle (const QString& mode_angle = "deg");
};

}
