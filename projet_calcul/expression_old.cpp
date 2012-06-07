#include "expression.h"

using namespace std;
using namespace calcul;

// CONSTRUCTEURS
Nombre::Nombre(int valeur) : num(valeur) { }
Complexe::Complexe(int re, int img) : Nombre(re), img(img) { }
Rationnel::Rationnel(int valeur, int den) : Nombre(valeur), den(den) { }
ComplexeRationnel::ComplexeRationnel(int re, int denRe, int img, int denImg) : Complexe(re,img), denRe(denRe), denImg(denImg) { }
OperateurBinaire::OperateurBinaire(string sType) {
	if (sType=="PLUS") type = PLUS;
	else if (sType=="MINUS") type = MINUS;
	else if (sType=="TIMES") type = TIMES;
	else if (sType=="DIV") type = DIV;
	else if (sType=="MOD") type = MOD;
	else if (sType=="POW") type = POW;
	//else throw error?
}
OperateurUnaire::OperateurUnaire(string sType) {
	if (sType=="SIN") type = SIN;
	else if (sType=="COS") type = COS;
	else if (sType=="SINH") type = SINH;
	else if (sType=="TAN") type = TAN;
	else if (sType=="COSH") type = COSH;
	else if (sType=="TANH") type = TANH;
	else if (sType=="LN") type = LN;
	else if (sType=="LOGD") type = LOGD;
	else if (sType=="INV") type = INV;
	else if (sType=="SQRT") type = SQRT;
	else if (sType=="SQR") type = SQR;
	else if (sType=="CUBE") type = CUBE;
	else if (sType=="FACT") type = FACT;
	else if (sType=="EVAL") type = EVAL;
	else if (sType=="SIGN") type = SIGN;
	//else throw error?
}
OperateurPile::OperateurPile(string sType) {
	if (sType=="SWAP") type = SWAP;
	else if (sType=="SUM") type = SUM;
	else if (sType=="MEAN") type = MEAN;
	else if (sType=="CLEAR") type = CLEAR;
	else if (sType=="DUP") type = DUP;
	else if (sType=="DROP") type = DROP;
	//else throw error?
}

// EVALUER()
Expression & Nombre::evaluer() {
	return *this;
}
Expression & OperateurBinaire::evaluer() {
	Expression & e1 = *(new Nombre), & e2 = *(new Nombre); // obtenu par dépilement
	if (!e1.isTerminal()&&!e2.isTerminal()) {
		// dépiler prochain opérateur op2 par exemple
		// op2.evaluer();
		// rempiler e1, e2 et op1
	} else if (!e1.isTerminal()) {
		// rempiler e2
		// dépiler prochain opérateur op2 par exemple
		// op2.evaluer();
		// rempiler e1 et op1
	} else if (!e2.isTerminal()) {
		// rempiler e1
		// dépiler prochain opérateur op2 par exemple
		// op2.evaluer();
		// rempiler e2 et op1
	}
	
	// return à empiler aussi
	/*if (type==PLUS) return e1+e2;
	else if (type==MINUS) return e1-e2;
	else if (type==TIMES)  return e1*e2;
	else if (type==DIV)  return e1/e2;
	else if (type==MOD) return e1%e2;
	else if (type==POW)  return e1^e2;*/
	//else throw error?
}
Expression & OperateurUnaire::evaluer() {
	Expression & e1 = *(new Nombre); // obtenu par dépilement
	
	if (type==EVAL) return e1.evaluer();
	
	if (!e1.isTerminal()) {
		// dépiler prochain opérateur op2 par exemple
		// op2.evaluer();
		// rempiler e1 et op1
	}
	
	// return à empiler aussi
	if (type==SIN) return e1.sin();
	else if (type==COS) return e1.cos();
	else if (type==TAN) return e1.tan();
	else if (type==SINH) return e1.sinh();
	else if (type==COSH) return e1.cosh();
	else if (type==TANH) return e1.tanh();
	else if (type==LN) return e1.ln();
	else if (type==LOGD) return e1.logd();
	else if (type==INV) return e1.inv();
	else if (type==SQRT) return e1.sqrt();
	else if (type==SQR) return e1.sqr();
	else if (type==CUBE) return e1.cube();
	else if (type==FACT) return e1.fact();
	else if (type==SIGN) return e1.sign();
	//else throw error?
}
Expression & OperateurPile::evaluer() {
	
}
Expression & ExpressionComposee::evaluer() {
	
}

// ISTERMINAL()
bool Nombre::isTerminal() const {
	return true;
}
bool OperateurBinaire::isTerminal() const {
	return false;
}
bool OperateurUnaire::isTerminal() const {
	return false;
}
bool OperateurPile::isTerminal() const {
	return false;
}
bool ExpressionComposee::isTerminal() const {
	return false;
}

// TOSTRING()
string Nombre::toString() const {
	//return (string)num;
}
string Complexe::toString() const {
	//return Nombre::toString()+"$"+img;
}
string Rationnel::toString() const {
	
}
string ComplexeRationnel::toString() const {
	
}
string OperateurBinaire::toString() const {
	//return (string)type;
}
string OperateurUnaire::toString() const {
	//return (string)type;
}
string OperateurPile::toString() const {
	//return (string)type;
}
string ExpressionComposee::toString() const {
	
}

// TRANSFORMINT()
void Nombre::transformInt() {
	
}
void Complexe::transformInt() {
	Nombre::transformInt();
}
