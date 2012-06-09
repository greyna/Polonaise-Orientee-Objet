#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace calcul {

enum Mode {Z, Q, R, CZ, CR, C}; // CZ : complexe entier | CR : rationnel complexe
enum ModeAngle {deg, rad};
enum TypeOp {unaire, binaire, pile, eval};

class Expression
{
protected:
	string string_associe;
	
	virtual void set_string_associe() = 0;
public:
	Expression(const string & string_associe);
	Expression();
	
	string get_string_associe() const;
    virtual bool isNumber() const = 0;
};

}