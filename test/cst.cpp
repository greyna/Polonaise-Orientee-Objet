#include "cst.h"
#include <math.h>

using namespace std;
using namespace calcul;

int Rationnel::PGCD(int a, int b){
    while(b!=0){
        int c=a%b;
        a=b;
        b=c;
    }
    return a;
}
void Rationnel::simplifier(){
    int r;
    r=PGCD(valeur,den);
    valeur=valeur/r;
    den=den/r;
    if(den<0){
        valeur=-valeur;
        den=-den;
    }
}

// Accesseurs
double Reel::getValeur() const { return valeur ; }
int Rationnel::getNum() const { return (int)valeur; }
int Rationnel::getDen() const { return den; }

// Méthodes setString
void Reel::setString() { string_associe = QString::number(valeur); }
void Rationnel::setString() {
    simplifier();
    if(valeur != 0 && den!=1)
        string_associe = QString::number((int)valeur) + "/" + QString::number(den);
    else if (valeur != 0)
        string_associe = QString::number((int)valeur);
    else
        string_associe = QString("0");
}

// Opérateurs binaires de Reel
Reel& Reel::operator +(const Cst &other)const{ if (other.isNumber()) return *(new Reel(valeur + other.getValeur())); else return *(new Reel());}
Reel& Reel::operator *(const Cst &other)const{ if (other.isNumber()) return *(new Reel(valeur * other.getValeur())); else return *(new Reel());}
Reel& Reel::operator -(const Cst &other)const{ if (other.isNumber()) return *(new Reel(valeur - other.getValeur())); else return *(new Reel());}
Reel& Reel::operator /(const Cst &other)const{ if (other.isNumber()) return *(new Reel(valeur / other.getValeur())); else return *(new Reel());}
Reel& Reel::MOD(const Cst &other)const{Exception("La fonction modulo n'est pas censé être utilisée pour un réel").sendMessage().sendLog();return *(new Reel());}
Reel& Reel::POW (const Cst &other)const { if (other.isNumber()) return *(new Reel(pow(valeur,other.getValeur()))); else return *(new Reel());}

// Opérateurs unaires de Reel
Reel& Reel::SQR ()const { return *(new Reel(valeur*valeur));}
Reel& Reel::CUBE ()const { return *(new Reel(valeur*valeur*valeur));}
Reel& Reel::SIGN ()const { return *(new Reel(-valeur));}
Reel& Reel::SIN (AngleType angle)const {double tmp=valeur;(angle==Degre)?tmp=(valeur*3.1415)/180:tmp=tmp; return *(new Reel(sin(tmp)));}
Reel& Reel::COS (AngleType angle)const {double tmp=valeur;(angle==Degre)?tmp=(valeur*3.1415)/180:tmp=tmp; return *(new Reel(cos(tmp)));}
Reel& Reel::TAN (AngleType angle)const {double tmp=valeur;(angle==Degre)?tmp=(valeur*3.1415)/180:tmp=tmp; return *(new Reel(tan(tmp)));}
Reel& Reel::SINH ()const { return *(new Reel(sinh(valeur)));}
Reel& Reel::COSH ()const { return *(new Reel(cosh(valeur)));}
Reel& Reel::TANH ()const { return *(new Reel(tanh(valeur)));}
Reel& Reel::LN ()const { return *(new Reel(log(valeur)));}
Reel& Reel::LOG ()const { return *(new Reel(log10(valeur)));}
Reel& Reel::SQRT ()const { return *(new Reel(sqrt(valeur)));}
Reel& Reel::INV ()const { return *(new Reel(1/valeur));}
Reel& Reel::FACT() const{Exception("La fonction factorielle n'est pas censé être utilisée pour un réel").sendMessage().sendLog();return *(new Reel());}
Reel& Reel::EVAL() const{Exception("La fonction eval n'est pas censé être utilisée pour un réel").sendMessage().sendLog();return *(new Reel());}

// Opérateurs binaires de Rationnel
Rationnel& Rationnel::operator +(const Rationnel & other)const{
    if (other.isNumber())
        return *(new Rationnel(this->valeur*other.getDen() + this->den*other.getValeur(), this->den * other.getDen()));
    else return *(new Rationnel());
}
Rationnel& Rationnel::operator *(const Rationnel & other)const{
    if (other.isNumber())
    return *(new Rationnel(valeur*other.getValeur(), den*other.getDen()));
    else return *(new Rationnel());
}
Rationnel& Rationnel::operator -(const Rationnel & other)const{
    if (other.isNumber())
    return *(new Rationnel(this->valeur*other.getDen() - this->den*other.getValeur(), this->den * other.getDen()));
    else return *(new Rationnel());
}
// Fuite mémoire dans la fonction ci-dessous
Rationnel& Rationnel::operator /(const Rationnel & other)const {
    if (other.isNumber())
    return (*this)*other.INV();
    else return *(new Rationnel());
}
Rationnel& Rationnel::POW (const Rationnel & other)const{
    if (other.isNumber())
    return *(new Rationnel(pow(valeur,other.getValeur()), pow(den,other.getValeur())));
    else return *(new Rationnel());
}
Rationnel& Rationnel::MOD(const Rationnel & other) const{Exception("La fonction factorielle n'est pas censé être utilisée pour un rationnel").sendMessage().sendLog();return *(new Rationnel());}

// Opérateurs unaires de Rationnels
// Fuite mémoire dans les deux méthodes ci-dessous
Rationnel& Rationnel::SQR ()const {
    return (*this)*(*this);
}
Rationnel& Rationnel::CUBE ()const {
    return (*this)*(*this)*(*this);
}
Rationnel& Rationnel::SIGN ()const {
    return *(new Rationnel(-valeur,den));
}
Rationnel& Rationnel::SIN (AngleType angle)const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    double tmp=valeur/(double)this->getDen(); (angle==Degre)?tmp=((valeur/(double)this->getDen())*3.1415)/180:tmp=tmp; return *(new Rationnel(floor(sin(tmp))));
}
Rationnel& Rationnel::COS (AngleType angle)const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    double tmp=valeur/(double)this->getDen();(angle==Degre)?tmp=((valeur/(double)this->getDen())*3.1415)/180:tmp=tmp; return *(new Rationnel(floor(cos(tmp))));
}
Rationnel& Rationnel::TAN (AngleType angle)const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    double tmp=valeur/(double)this->getDen();(angle==Degre)?tmp=((valeur/(double)this->getDen())*3.1415)/180:tmp=tmp; return *(new Rationnel(floor(tan(tmp))));
}
Rationnel& Rationnel::SINH ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    return *(new Rationnel(floor(sinh(valeur/(double)this->getDen()))));
}
Rationnel& Rationnel::COSH ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    return *(new Rationnel(floor(cosh(valeur/(double)this->getDen()))));
}
Rationnel& Rationnel::TANH ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    return *(new Rationnel(floor(tanh(valeur/(double)this->getDen()))));
}
Rationnel& Rationnel::LN ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    return *(new Rationnel(floor(log(valeur/(double)this->getDen()))));
}
Rationnel& Rationnel::LOG ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    return *(new Rationnel(floor(log10(valeur/(double)this->getDen()))));
}
Rationnel& Rationnel::SQRT ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    return *(new Rationnel(floor(sqrt(valeur/(double)this->getDen()))));
}
Rationnel& Rationnel::INV ()const {
    return *(new Rationnel(den,valeur));
}
Rationnel& Rationnel::FACT() const {Exception("La fonction factorielle n'est pas censé être utilisée pour un rationnel").sendMessage().sendLog();return *(new Rationnel());}
Rationnel& Rationnel::EVAL()const {Exception("La fonction eval n'est pas censé être utilisée pour un rationnel").sendMessage().sendLog();return *(new Rationnel());}

// Opérateurs binaires de Entier
Entier& Entier::operator +(const Entier & other)const{ if (other.isNumber()) return *(new Entier(valeur + other.getNum())); else return *(new Entier()); }
Entier& Entier::operator *(const Entier & other)const{  if (other.isNumber()) return *(new Entier(valeur * other.getNum())); else return *(new Entier()); }
Entier& Entier::operator -(const Entier & other)const{  if (other.isNumber()) return *(new Entier(valeur - other.getNum())); else return *(new Entier()); }
Entier& Entier::operator /(const Entier & other)const{  if (other.isNumber()) return *(new Entier(valeur / other.getNum())); else return *(new Entier()); }
Entier& Entier::POW (const Entier & other)const{ if (other.isNumber()) return *(new Entier(floor(pow(valeur,other.getNum())))); else return *(new Entier()); }
Entier& Entier::MOD(const Entier & other) const{ if (other.isNumber()) return *(new Entier(((int)valeur) % other.getNum())); else return *(new Entier()); }

// Opérateurs unaires de Entier
// Fuite mémoire dans les deux fonctions ci-dessous
Entier& Entier::SQR ()const {
    return (*this)*(*this);
}
Entier& Entier::CUBE ()const {
    return (*this)*(*this)*(*this);
}
Entier& Entier::SIGN ()const {
    return *(new Entier(-valeur));
}
Entier& Entier::SIN (AngleType angle)const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    double tmp=valeur;(angle==Degre)?tmp=(valeur*3.1415)/180:tmp=tmp;
    return *(new Entier(floor(sin(tmp))));
}

Entier& Entier::COS (AngleType angle)const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    double tmp=valeur;
    (angle==Degre)?tmp=(valeur*3.1415)/180:tmp=tmp;
    return *(new Entier(floor(cos(tmp))));
}
Entier& Entier::TAN (AngleType angle)const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    double tmp=valeur;(angle==Degre)?tmp=(valeur*3.1415)/180:tmp=tmp;
    return *(new Entier(floor(tan(tmp))));
}
Entier& Entier::SINH ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    return *(new Entier(floor(sinh(valeur))));
}
Entier& Entier::COSH ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    return *(new Entier(floor(cosh(valeur))));
}
Entier& Entier::TANH ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    return *(new Entier(floor(tanh(valeur))));
}
Entier& Entier::LN ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    return *(new Entier(floor(log(valeur))));
}
Entier& Entier::LOG ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    return *(new Entier(floor(log10(valeur))));
}
Entier& Entier::SQRT ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel!").sendMessage().sendLog();
    return *(new Entier(floor(sqrt(valeur))));
}
Entier& Entier::INV ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en réel ou rationnel!").sendMessage().sendLog();
    return *(new Entier(floor(1/valeur)));
}
Entier& Entier::FACT()const{
    if (valeur==0||valeur==1)
        return *(new Entier(1));
    int res = 2;
    for (int i=3; i<=valeur;i++)
        res*=i;
    return *(new Entier(res));
}
Entier& Entier::EVAL() const{Exception("La fonction eval n'est pas censé être utilisée pour un entier").sendMessage().sendLog();return *(new Entier());}

