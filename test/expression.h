#pragma once

#include <QString>
#include "factory.h"

using namespace std;

namespace calcul {

class Expression : public Cst {
protected:
    void setString() { }

public:
    Expression(QString str) { string_associe = "'"+str+"'"; }
    bool isNumber() const { return false; }

    Expression& operator +(const Cst& other)const;
    Expression& operator *(const Cst& other)const;
    Expression& operator -(const Cst& other)const;
    Expression& operator /(const Cst& other)const;
    Expression& POW (const Cst& other)const;
    Expression& MOD(const Cst& other) const;

    Expression& SQR ()const;
    Expression& CUBE ()const;
    Expression& SIGN ()const;
    Expression& SIN (AngleType angle = Degre)const;
    Expression& COS (AngleType angle = Degre)const;
    Expression& TAN (AngleType angle = Degre)const;
    Expression& SINH ()const;
    Expression& COSH ()const;
    Expression& TANH ()const;
    Expression& LN ()const;
    Expression& LOG ()const;
    Expression& SQRT ()const;
    Expression& INV ()const;
    Expression& FACT()const;
    Expression& EVAL()const;
};

}
