
#pragma once

#include <iostream>
#include <string>
#include "pileExpression.h"

using namespace std;

namespace calcul {

class OperationException
{
protected:
	string message;
public:
	OperationException(string message); // : message(message)
	void sendMessage();
};

class Operation : public Expression {
protected:
	enum TypeOp type;
	
	void set_string_associe ();
	void set_type ();
	
public:
	Operation(const string & string_associe = "");
	bool isNumber () const;
	
	Nombre& unaire (Nombre& operande, enum Mode mode = C, enum ModeAngle mode_angle = deg);
	Nombre& binaire (const Nombre& operande1, const Nombre& operande2, enum Mode mode = C);
	void pile (PileExpression& pile_stockage, enum Mode mode = C, int x = 0, int y = 0);
	Expression& eval (PileExpression operande, enum Mode mode = C, enum ModeAngle mode_angle = deg);
};

}
