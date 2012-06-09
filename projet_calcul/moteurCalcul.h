#pragma once

#include <iostream>
#include <string>
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
	void ajout (const string& ajout);
	bool resoudre ();
	void changerMode (const string& mode = "C");
	void changerModeAngle (const string& mode_angle = "deg");
};

}