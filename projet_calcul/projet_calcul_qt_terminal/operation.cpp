
#include "operation.h"

using namespace std;
using namespace calcul;

// --------------------------------------------------------------------
// CONSTRUCTEURS
// --------------------------------------------------------------------
OperationException::OperationException(QString message)
: message(message) { }

Operation::Operation(const QString &  string_associe)
: Expression(string_associe) { }

// --------------------------------------------------------------------
// METHODES
// --------------------------------------------------------------------
void OperationException::sendMessage() { }

void Operation::set_string_associe() { }
bool Operation::isNumber() const { return false; }

Nombre& Operation::unaire (Nombre& operande, enum Mode mode, enum ModeAngle mode_angle) {
    return *(new ComplexeReel);

	if (string_associe=="SIN") {
		
	}
	else if (string_associe=="COS") {
		
	}
	else if (string_associe=="SINH") {
		
	}
	else if (string_associe=="TAN") {
		
	}
	else if (string_associe=="COSH") {
		
	}
	else if (string_associe=="TANH") {
		
	}
	else if (string_associe=="LN") {
		
	}
	else if (string_associe=="LOGD") {
		
	}
	else if (string_associe=="INV") {
		
	}
	else if (string_associe=="SQRT") {
		
	}
	else if (string_associe=="SQR") {
		
	}
	else if (string_associe=="CUBE") {
		
	}
	else if (string_associe=="FACT") {
		
	}
	else if (string_associe=="SIGN") {
		
	}
    else  {

	}
}

Nombre& Operation::binaire (const Nombre& operande1, const Nombre& operande2, enum Mode mode) {
    return *(new ComplexeReel);
	
	if (string_associe=="+") {
		
	}
	else if (string_associe=="-") {
		
	}
	else if (string_associe=="*") {
		
	}
	else if (string_associe=="/") {
		
	}
	else if (string_associe=="MOD") {
		
	}
	else if (string_associe=="POW") {
		
	}
    else  {

	}
}

void Operation::pile (PileExpression& pile_stockage, enum Mode mode, int x, int y) {
	
	if (string_associe=="SWAP") {
		
	}
	else if (string_associe=="SUM") {
		
	}
	else if (string_associe=="MEAN") {
		
	}
	else if (string_associe=="CLEAR") {
		
	}
	else if (string_associe=="DUP") {
		
	}
	else if (string_associe=="DROP") {
		
	}
    else  {

	}
}

Expression& Operation::eval (PileExpression operande, enum Mode mode, enum ModeAngle mode_angle) {
    return *(new ComplexeReel);
	
	if (string_associe=="EVAL") {
		
	}
    else  {

	}
}
