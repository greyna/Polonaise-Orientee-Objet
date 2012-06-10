#pragma once

#include <iostream>
#include <QString>

using namespace std;

namespace calcul {

enum Mode {Z, Q, R, CZ, CR, C}; // CZ : complexe entier | CR : rationnel complexe
enum ModeAngle {deg, rad};
enum TypeOp {unaire, binaire, pile, eval};

class Expression
{
protected:
    QString string_associe;
	
	virtual void set_string_associe() = 0;
public:
    Expression(const QString & string_associe);
	Expression();
	
    QString get_string_associe() const;
    virtual bool isNumber() const = 0;
};

}
