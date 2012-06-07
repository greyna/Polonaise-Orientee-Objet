#ifndef OVERLOAD_H
#define OVERLOAD_H

/*Ensemble des opération de calcul sur les différents types de constantes*/

#include "Common.h"
#include "Constant.h"

Integer operator+(const Integer & i1,const Integer &i2);
Integer operator-(const Integer & i1,const Integer &i2);
Integer operator*(const Integer & i1,const Integer &i2);
Real operator/(const Integer & i1,const Integer &i2);
Real cosinus(Integer i);

Rational operator+(const Rational &r1, const Rational &r2);
Rational operator-(const Rational &r1, const Rational &r2);
Rational operator*(const Rational &r1, const Rational &r2);
Rational operator/(const Rational &r1, const Rational &r2);
Real cosinus(Rational r);

Real operator+(const Real &r1, const Real &r2);
Real operator-(const Real &r1, const Real &r2);
Real operator*(const Real &r1, const Real &r2);
Real operator/(const Real &r1, const Real &r2);
Real cosinus(Real i);

Complex operator+(const Complex& c1, const Complex& c2);
Complex operator-(const Complex& c1, const Complex& c2);
Complex operator*(const Complex& c1, const Complex& c2);
Complex operator/(const Complex& c1, const Complex& c2);
Real cosinus(Complex i);

#endif // OVERLOAD_H
