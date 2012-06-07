#include "operation.h"

using namespace std;
using namespace calcul;

// --------------------------------------------------------------------
// CONSTRUCTEURS
// --------------------------------------------------------------------
OperationException::OperationException(string message)
: message(message) { }

Operation::Operation(string string_associe)
: Expression(string_associe) { }

Binaire::Binaire(string string_associe)
: Operation(string_associe) { }

Unaire::Unaire(string string_associe)
: Operation(string_associe) { }

Pile::Pile(string string_associe)
: Operation(string_associe) { }

// --------------------------------------------------------------------
// METHODES
// --------------------------------------------------------------------
void OperationException::sendMessage() { cout<<"Exception d'opération levée : "<<message<<"\n"; }

void Operation::set_string_associe() { }
bool Operation::isNumber() const { return false; }

Nombre Binaire::evaluer(const Nombre & operande1, const Nombre & operande2, enum Mode mode) {
	Nombre resultat;
	resultat= operande1;
	return resultat;
	
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
		cout<<"erreur : "<<string_associe<<" n'est pas un opérateur connu\n";
	}
}

Nombre Unaire::evaluer(const Nombre & operande, enum Mode mode, enum ModeAngle mode_angle) {
	Nombre resultat;
	resultat= operande;
	return resultat;
	
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
	else if (string_associe=="EVAL") {
		
	}
	else if (string_associe=="SIGN") {
		
	}
	else  {
		cout<<"erreur : "<<string_associe<<" n'est pas un opérateur connu\n";
	}
}

void Pile::evaluer(/*Pile*/Expression & pileStockage, enum Mode mode) {
	
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
		cout<<"erreur : "<<string_associe<<" n'est pas un opérateur connu\n";
	}
}
