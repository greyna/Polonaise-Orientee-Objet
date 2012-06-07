#include "Constant.h"
#include "sstream"


int Integer::GetValue()const{
    //Controle de la chaine de caractère + construction de l'entier
    int returnValue;
    std::istringstream ss( value );
    ss >> returnValue;

    if (ss.bad() || !ss.eof()){ //Pas d'erreur + tout la chaine utilisée
        throw(ConstantException("Bad Integer"));
    }
    return returnValue;
}

Real::Real(double d){
    std::stringstream ss;
    ss<<d;
    value = ss.str();
}


double Real::GetValue()const{
    //Controle de la chaine de caractère + construction de l'entier
    if (value.find("/")!= std::string::npos)
        return Real(Rational(value)).GetValue();

    double returnValue;
    std::istringstream ss( value );
    ss >> returnValue;

    if (ss.bad() || !ss.eof()){ //Pas d'erreur + tout la chaine utilisée
        throw(ConstantException("Bad Real"));
    }
    return returnValue;
}

std::pair<int,int> Rational::GetValue()const{
    int first, second;
    size_t separator = value.find("/");
    if (separator != std::string::npos){
        std::istringstream ss2(value.substr(separator+1));
        ss2>>second;
        if(ss2.bad() || !ss2.eof())
               throw(ConstantException("Bad Rational"));
    }else
        second = 1;

    std::istringstream ss(value.substr(0,separator));
    ss>>first;

    if (ss.bad() || !ss.eof())
        throw(ConstantException("Bad Rational"));

    return std::pair<int,int>(first,second);
}

std::complex<double> Complex::GetValue()const{
    double re, im;

    size_t separator = value.find("$");

    if (separator != std::string::npos){
        im = Real(value.substr(separator+1)).GetValue();
    }else
        im = 0;


    re=Real(value.substr(0,separator)).GetValue();

    return std::complex<double>(re,im);
}

Rational::Rational(const Integer& i){
    std::stringstream ss;
    ss<<i.GetValue()<<"/"<<1;
    value = ss.str();
}

Real::Real(const Rational& r){
    std::pair<int,int> tmp = r.GetValue();
    std::stringstream ss;
    ss<<static_cast<double>(tmp.first)/static_cast<double>(tmp.second);
    value = ss.str();
}

Complex::Complex(const Real& r){
    std::stringstream ss;
    ss<<r.GetString()<<"$"<<0;
    value = ss.str();
}

Complex::Complex(const Rational& r){
    std::pair<int,int> tmp = r.GetValue();
    std::stringstream ss;
    ss<<static_cast<double>(tmp.first)/static_cast<double>(tmp.second)<<"$"<<0;
    value = ss.str();
}
Complex::Complex(const Integer& i){
    std::stringstream ss;
    ss<<i.GetString()<<"$"<<0;
    value = ss.str();
}



