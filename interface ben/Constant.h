#ifndef CONSTANT_H
#define CONSTANT_H

#include <string>
#include <exception>
#include <utility>
#include <complex>

/*Définition des types correspondants aux différentes constantes disponibles*/

class Constant{
protected:
    std::string value;

public:
    Constant(std::string str = ""):value(str){}
    std::string GetString() const{return value;}
};

class Integer : public Constant{
public:
    Integer(std::string str):Constant(str){}
    int GetValue()const;

};

class Rational : public Constant{
public:
    Rational(std::string str):Constant(str){}
    Rational(const Integer& i);
    std::pair<int,int> GetValue()const;

};

class Real : public Constant{
public:
    Real(double d);
    Real(std::string str):Constant(str){}
    Real(Integer i):Constant(i.GetString()){}
    Real(const Rational& r);
    double GetValue()const;
};



class Complex : public Constant{
public:
    Complex(std::string str):Constant(str){}
    Complex(const Real& r);
    Complex(const Rational& r);
    Complex(const Integer& i);
    std::complex<double> GetValue()const;
};

class Expression : public Constant{
public:
    Expression(std::string str):Constant(str){}
};

class ConstantException : public std::exception{
public:
    ConstantException(const char* ex):exception(ex){}
};






#endif // CONSTANT_H
