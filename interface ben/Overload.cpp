#include "Overload.h"
#include <math.h>

Real operator+(const Real &r1, const Real &r2){
    std::stringstream ss;
    ss<<r1.GetValue()+r2.GetValue();
    return Real(ss.str());
}

Real operator-(const Real &r1, const Real &r2){
    std::stringstream ss;
    ss<<r1.GetValue()-r2.GetValue();
    return Real(ss.str());
}
Real operator*(const Real &r1, const Real &r2){
    std::stringstream ss;
    ss<<r1.GetValue()*r2.GetValue();
    return Real(ss.str());
}
Real operator/(const Real &r1, const Real &r2){
    std::stringstream ss;
    ss<<r1.GetValue()/r2.GetValue();
    return Real(ss.str());
}

Integer operator+(const Integer & i1,const Integer &i2){
    std::stringstream ss;
    ss<<i1.GetValue()+i2.GetValue();
    return Integer(ss.str());
}

Integer operator-(const Integer & i1,const Integer &i2){
    std::stringstream ss;
    ss<<i1.GetValue()-i2.GetValue();
    return Integer(ss.str());
}

Integer operator*(const Integer & i1,const Integer &i2){
    std::stringstream ss;
    ss<<i1.GetValue()*i2.GetValue();
    return Integer(ss.str());
}

Real operator/(const Integer & i1,const Integer &i2){
    std::stringstream ss;
    ss<<i1.GetValue()/i2.GetValue();
    return Real(ss.str());
}

Rational operator+(const Rational &r1, const Rational &r2){
    std::stringstream ss;
    ss<<(r1.GetValue().first*r2.GetValue().second)+(r2.GetValue().first*r1.GetValue().second)<<"/"<<r1.GetValue().second*r2.GetValue().second;
    return Rational(ss.str());
}

Rational operator-(const Rational &r1, const Rational &r2){
    std::stringstream ss;
    ss<<(r1.GetValue().first*r2.GetValue().second)-(r2.GetValue().first*r1.GetValue().second)<<"/"<<r1.GetValue().second*r2.GetValue().second;
    return Rational(ss.str());
}

Rational operator*(const Rational &r1, const Rational &r2){
    std::stringstream ss;
    ss<<r1.GetValue().first*r2.GetValue().first<<"/"<<r1.GetValue().second*r2.GetValue().second;
    return Rational(ss.str());
}

Rational operator/(const Rational &r1, const Rational &r2){
    std::stringstream ss;
    ss<<r1.GetValue().first*r2.GetValue().second<<"/"<<r1.GetValue().second*r2.GetValue().first;
    return Rational(ss.str());
}

Complex operator+(const Complex& c1, const Complex& c2){
    std::stringstream ss;
    std::complex<double> tmp(c1.GetValue()+c2.GetValue());
    ss<<tmp.real()<<"%"<<tmp.imag();
    return ss.str();
}

Complex operator-(const Complex& c1, const Complex& c2){
    std::stringstream ss;
    std::complex<double> tmp(c1.GetValue()-c2.GetValue());
    ss<<tmp.real()<<"%"<<tmp.imag();
    return ss.str();
}

Complex operator*(const Complex& c1, const Complex& c2){
    std::stringstream ss;
    std::complex<double> tmp(c1.GetValue()*c2.GetValue());
    ss<<tmp.real()<<"%"<<tmp.imag();
    return ss.str();
}

Complex operator/(const Complex& c1, const Complex& c2){
    std::stringstream ss;
    std::complex<double> tmp(c1.GetValue()/c2.GetValue());
    ss<<tmp.real()<<"%"<<tmp.imag();
    return ss.str();
}

Real cosinus(Integer i){
    std::stringstream ss;
    double tmp = i.GetValue();
    ss <<std::cos(tmp);
    return ss.str();
}

Real cosinus(Complex i){throw std::exception("Wrong type");}

Real cosinus(Real i){
    std::stringstream ss;
    double tmp = i.GetValue();
    ss <<std::cos(tmp);
    return ss.str();
}

Real cosinus(Rational r){
    std::stringstream ss;
    double tmp = Real(r).GetValue();
    ss <<std::cos(tmp);
    return ss.str();
}

