
#pragma once

#include <iostream>
#include <string>
#include "nombres.h"

using namespace std;

namespace calcul {

enum Mode {Z, Q, R, CZ, CR, C}; // CZ : complexe entier | CR : rationnel complexe
enum ModeAngle {deg, rad};

class OperationException
{
protected:
	string message;
public:
	OperationException(string message); // : message(message)
	void sendMessage();
};

class Operation : public Expression
{
protected:
	void set_string_associe();
public:
	Operation(string string_associe); // : Expression(string_associe)
    bool isNumber() const;
};

class Binaire : public Operation
{
public:
	Binaire(string string_associe); // : Operation(string_associe)
	Nombre evaluer(const Nombre & operande1, const Nombre & operande2, enum Mode mode = CR);
};

class Unaire : public Operation
{
public:
	Unaire(string string_associe); // : Operation(string_associe)
    Nombre evaluer(const Nombre & operande, enum Mode mode = CR, enum ModeAngle mode_angle = deg);
};

class Pile : public Operation
{
public:
	Pile(string string_associe); // : Operation(string_associe)
	void evaluer(/*Pile*/Expression & pileStockage, enum Mode mode = CR); // modifie la pile
};

}
