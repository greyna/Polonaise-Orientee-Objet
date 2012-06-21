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

// Methodes setString
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

// Operateurs binaires de Reel
Reel& Reel::operator +(const Cst &other)const{ return *(new Reel(valeur + other.getValeur())); }
Reel& Reel::operator *(const Cst &other)const{ return *(new Reel(valeur * other.getValeur())); }
Reel& Reel::operator -(const Cst &other)const{ return *(new Reel(valeur - other.getValeur())); }
Reel& Reel::operator /(const Cst &other)const{ if (other.getValeur()==0) throw OperationException("division par 0!"); return *(new Reel(valeur / other.getValeur())); }
Reel& Reel::MOD(const Cst &other)const{Exception("La fonction modulo n'est pas cense être utilisee pour un reel").sendMessage().sendLog();return *(new Reel());}
Reel& Reel::POW (const Cst &other)const { return *(new Reel(pow(valeur,other.getValeur()))); }

// Operateurs unaires de Reel
Reel& Reel::SQR ()const { return *(new Reel(valeur*valeur));}
Reel& Reel::CUBE ()const { return *(new Reel(valeur*valeur*valeur));}
Reel& Reel::SIGN ()const { return *(new Reel(-valeur));}
Reel& Reel::SIN (AngleType angle)const {double tmp=valeur;(angle==Degre)?tmp=(valeur*3.1415)/180:tmp=tmp; return *(new Reel(sin(tmp)));}
Reel& Reel::COS (AngleType angle)const {double tmp=valeur;(angle==Degre)?tmp=(valeur*3.1415)/180:tmp=tmp; return *(new Reel(cos(tmp)));}
Reel& Reel::TAN (AngleType angle)const {if (angle==Degre&&(((int)valeur)%180)==90) throw OperationException(QString::number(valeur) + " est une valeur interdite de tangente"); double tmp=valeur;(angle==Degre)?tmp=(valeur*3.1415)/180:tmp=tmp; return *(new Reel(tan(tmp)));}
Reel& Reel::SINH ()const { return *(new Reel(sinh(valeur)));}
Reel& Reel::COSH ()const { return *(new Reel(cosh(valeur)));}
Reel& Reel::TANH ()const { return *(new Reel(tanh(valeur)));}
Reel& Reel::LN ()const { if (valeur<=0) throw OperationException("argument inferieur ou egal a 0 passe a LN."); return *(new Reel(log(valeur)));}
Reel& Reel::LOG ()const { return *(new Reel(log10(valeur)));}
Reel& Reel::SQRT ()const { if (valeur<0) throw OperationException("racine d'un nombre negatif"); return *(new Reel(sqrt(valeur)));}
Reel& Reel::INV ()const { if (valeur==0) throw OperationException("inverse de 0"); return *(new Reel(1/valeur));}
Reel& Reel::FACT() const{Exception("La fonction factorielle n'est pas cense être utilisee pour un reel").sendMessage().sendLog();return *(new Reel());}
Reel& Reel::EVAL() const{Exception("La fonction eval n'est pas cense être utilisee pour un reel").sendMessage().sendLog();return *(new Reel());}

// Operateurs binaires de Rationnel
Rationnel& Rationnel::operator +(const Cst &other)const{
        return *(new Rationnel(this->valeur*other.getDen() + this->den*other.getValeur(), this->den * other.getDen()));
}
Rationnel& Rationnel::operator *(const Cst &other)const{
    return *(new Rationnel(valeur*other.getNum(), den*other.getDen()));
}
Rationnel& Rationnel::operator -(const Cst &other)const{
    return *(new Rationnel(this->valeur*other.getDen() - this->den*other.getValeur(), this->den * other.getDen()));
}
Rationnel& Rationnel::operator /(const Cst &other)const {
    if (other.getDen()==0) throw OperationException("division par 0!");
    return *(new Rationnel(getNum()*other.getDen(), den*other.getNum()));
}
Rationnel& Rationnel::POW (const Cst &other)const{
    return *(new Rationnel(floor(pow(valeur, other.getValeur() / ((double)other.getDen()))),
                               floor(pow(den, other.getValeur() / ((double)other.getDen())))));
}
Rationnel& Rationnel::MOD(const Cst &other) const{Exception("La fonction factorielle n'est pas cense être utilisee pour un rationnel").sendMessage().sendLog();return *(new Rationnel());}

// Operateurs unaires de Rationnels
Rationnel& Rationnel::SQR ()const {
    return *(new Rationnel(valeur*valeur, den*den));
}
Rationnel& Rationnel::CUBE ()const {
    return *(new Rationnel(valeur*valeur*valeur, den*den*den));
}
Rationnel& Rationnel::SIGN ()const {
    return *(new Rationnel(-valeur,den));
}
Rationnel& Rationnel::SIN (AngleType angle)const {
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    double tmp=valeur/(double)this->getDen(); (angle==Degre)?tmp=((valeur/(double)this->getDen())*3.1415)/180:tmp=tmp; return *(new Rationnel(floor(sin(tmp))));
}
Rationnel& Rationnel::COS (AngleType angle)const {
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    double tmp=valeur/(double)this->getDen();(angle==Degre)?tmp=((valeur/(double)this->getDen())*3.1415)/180:tmp=tmp; return *(new Rationnel(floor(cos(tmp))));
}
Rationnel& Rationnel::TAN (AngleType angle)const {
    if (angle==Degre&&(((int)valeur/den)%180)==90) throw OperationException(QString::number(valeur) + " est une valeur interdite de tangente");
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    double tmp=valeur/(double)this->getDen();(angle==Degre)?tmp=((valeur/(double)this->getDen())*3.1415)/180:tmp=tmp; return *(new Rationnel(floor(tan(tmp))));
}
Rationnel& Rationnel::SINH ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    return *(new Rationnel(floor(sinh(valeur/(double)this->getDen()))));
}
Rationnel& Rationnel::COSH ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    return *(new Rationnel(floor(cosh(valeur/(double)this->getDen()))));
}
Rationnel& Rationnel::TANH ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    return *(new Rationnel(floor(tanh(valeur/(double)this->getDen()))));
}
Rationnel& Rationnel::LN ()const {
    if (valeur<=0) throw OperationException("argument inferieur ou egal a 0 passe a LN.");
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    return *(new Rationnel(floor(log(valeur/(double)this->getDen()))));
}
Rationnel& Rationnel::LOG ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    return *(new Rationnel(floor(log10(valeur/(double)this->getDen()))));
}
Rationnel& Rationnel::SQRT ()const {
    if (valeur<0) throw OperationException("racine d'un nombre negatif");
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    return *(new Rationnel(floor(sqrt(valeur/(double)this->getDen()))));
}
Rationnel& Rationnel::INV ()const {
    if (valeur==0) throw OperationException("denominateur a 0 lors du passage de l'inverse");
    return *(new Rationnel(den,valeur));
}
Rationnel& Rationnel::FACT() const {Exception("La fonction factorielle n'est pas cense être utilisee pour un rationnel").sendMessage().sendLog();return *(new Rationnel());}
Rationnel& Rationnel::EVAL()const {Exception("La fonction eval n'est pas cense être utilisee pour un rationnel").sendMessage().sendLog();return *(new Rationnel());}

// Operateurs binaires de Entier
Entier& Entier::operator +(const Cst &other)const{ return *(new Entier(valeur + other.getNum())); }
Entier& Entier::operator *(const Cst &other)const{ return *(new Entier(valeur * other.getNum())); }
Entier& Entier::operator -(const Cst &other)const{ return *(new Entier(valeur - other.getNum())); }
Entier& Entier::operator /(const Cst &other)const{ if (other.getDen()==0) throw OperationException("division par 0!"); return *(new Entier(valeur / other.getNum())); }
Entier& Entier::POW (const Cst &other)const{ return *(new Entier(floor(pow(valeur,other.getNum())))); }
Entier& Entier::MOD(const Cst &other) const{ return *(new Entier(((int)valeur) % other.getNum())); }

// Operateurs unaires de Entier
Entier& Entier::SQR ()const {
    return *(new Entier(valeur*valeur));
}
Entier& Entier::CUBE ()const {
    return *(new Entier(valeur*valeur*valeur));
}
Entier& Entier::SIGN ()const {
    return *(new Entier(-valeur));
}
Entier& Entier::SIN (AngleType angle)const {
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    double tmp=valeur;(angle==Degre)?tmp=(valeur*3.1415)/180:tmp=tmp;
    return *(new Entier(floor(sin(tmp))));
}
Entier& Entier::COS (AngleType angle)const {
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    double tmp=valeur;
    (angle==Degre)?tmp=(valeur*3.1415)/180:tmp=tmp;
    return *(new Entier(floor(cos(tmp))));
}
Entier& Entier::TAN (AngleType angle)const {
    if (angle==Degre&&(((int)valeur)%180)==90) throw OperationException(QString::number(valeur) + " est une valeur interdite de tangente");
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    double tmp=valeur;(angle==Degre)?tmp=(valeur*3.1415)/180:tmp=tmp;
    return *(new Entier(floor(tan(tmp))));
}
Entier& Entier::SINH ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    return *(new Entier(floor(sinh(valeur))));
}
Entier& Entier::COSH ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    return *(new Entier(floor(cosh(valeur))));
}
Entier& Entier::TANH ()const {
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    return *(new Entier(floor(tanh(valeur))));
}
Entier& Entier::LN ()const {
    if (valeur<=0) throw OperationException("argument inferieur ou egal a 0 passe a LN.");
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    return *(new Entier(floor(log(valeur))));
}
Entier& Entier::LOG ()const {
    // Fuite memoire dans les deux fonctions ci-dessous
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    return *(new Entier(floor(log10(valeur))));
}
Entier& Entier::SQRT ()const {
    if (valeur<0) throw OperationException("racine d'un nombre negatif");
    Exception("Attention: pertes d'informations! Veuillez passer en reel!").sendMessage().sendLog();
    return *(new Entier(floor(sqrt(valeur))));
}
Entier& Entier::INV ()const {
    if (valeur==0) throw OperationException("inverse de 0");
    Exception("Attention: pertes d'informations! Veuillez passer en reel ou rationnel!").sendMessage().sendLog();
    return *(new Entier(floor(1/valeur)));
}
Entier& Entier::FACT()const{
    if (valeur<0) throw OperationException("factorielle d'un nombre negatif");
    if (valeur==0||valeur==1)
        return *(new Entier(1));
    int res = 2;
    for (int i=3; i<=valeur;i++)
        res*=i;
    return *(new Entier(res));
}
Entier& Entier::EVAL() const{Exception("La fonction eval n'est pas cense être utilisee pour un entier").sendMessage().sendLog();return *(new Entier());}

