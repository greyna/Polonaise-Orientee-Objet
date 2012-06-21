#pragma once

#include <QString>
#include "exception_log.h"
#include <complex>
#include <typeinfo>

using namespace std;

namespace calcul{

/// Z entier, Q rationnel, R reel, CZ complexe entier, CQ complexe rationnel, C complexe reel
enum ModeType {Z, Q, R, CZ, CQ, C};
enum AngleType {Degre, Radian};

/*! \class Cst
 * \brief Classe abstraite representant les constantes
 */
class Cst
{
protected :
    virtual void setString() = 0;
    QString string_associe;

public:
    QString getString() const{ return string_associe; }
    virtual ~Cst() { }

    virtual bool isNumber() const = 0;

    // On peut supprimmer ces methodes de cette classe abstraite si on fait des dynamic_cast avant leur utilisation dans les operateurs des classes filles
    virtual double getValeur() const { Exception("Methode getValeur de classe abstraite Cst appelee, c'est un probleme!!").sendMessage().sendLog(); return 0; }
    virtual int getNum() const { Exception("Methode getNum de classe abstraite Cst appelee, c'est un probleme!!").sendMessage().sendLog(); return 0; }
    virtual int getDen() const { Exception("Methode getDen de classe abstraite Cst appelee, c'est un probleme!!").sendMessage().sendLog(); return 0; }

    // Ces 20 operations renvoient un nouvel objet alloue (EVAL en plus pour faciliter le polymorphisme).
    virtual Cst& operator +(const Cst& other)const=0;
    virtual Cst& operator *(const Cst& other)const=0;
    virtual Cst& operator -(const Cst& other)const=0;
    virtual Cst& operator /(const Cst& other)const=0;
    virtual Cst& POW (const Cst& other)const=0;
    virtual Cst& MOD(const Cst& other)const=0;

    virtual Cst& SQR ()const=0;
    virtual Cst& CUBE ()const=0;
    virtual Cst& SIGN ()const=0;
    virtual Cst& SIN (AngleType angle = Degre)const=0;
    virtual Cst& COS (AngleType angle = Degre)const=0;
    virtual Cst& TAN (AngleType angle = Degre)const=0;
    virtual Cst& SINH ()const=0;
    virtual Cst& COSH ()const=0;
    virtual Cst& TANH ()const=0;
    virtual Cst& LN ()const=0;
    virtual Cst& LOG ()const=0;
    virtual Cst& SQRT ()const=0;
    virtual Cst& INV ()const=0;
    virtual Cst& FACT()const=0;
    virtual Cst& EVAL()const=0;
};

template <class T>
class Complexe : public Cst, public complex<T>
{
protected :
    void setString(){ string_associe = this->real().getString() + "$" + this->imag().getString(); }

public:
    virtual ~Complexe() { }
    bool isNumber() const { return true; }
    Complexe(const T& re = T(), const T& img = T()): complex<T>(re, img) { setString(); }

    // Fuite memoire dans tous ces operateurs : on utilise les operateurs de reel, rationnel et entier qui renvoient chaque fois un nouvel objet alloue
    Complexe<T>& operator +(const Cst& other)const {
            const Complexe<T>& temp = dynamic_cast< const Complexe<T>& > (other);
            return *(new Complexe<T> (this->real()+temp.real(), this->imag()+temp.imag()));
    }
    Complexe<T>& operator *(const Cst& other)const {
            const Complexe<T>& temp = dynamic_cast< const Complexe<T>& > (other);
            return *(new Complexe<T> (this->real()*temp.real() - this->imag()*temp.imag(), temp.real()*this->imag() + this->real()*temp.imag()));
    }
    Complexe<T>& operator -(const Cst& other)const {
            const Complexe<T>& temp = dynamic_cast< const Complexe<T>& > (other);
            return *(new Complexe<T> (this->real()-temp.real(), this->imag()-temp.imag()));
    }
    Complexe<T>& operator /(const Cst& other)const  {
            const Complexe<T>& temp = dynamic_cast< const Complexe<T>& > (other);
            if (temp.imag().getValeur()==0 && temp.real().getValeur()==0) throw OperationException("division par 0");
            return *(new Complexe<T> ( ((this->real()*temp.real()) + (this->imag()*temp.imag())) / (temp.real().SQR() + temp.imag().SQR()),
                                       ((this->imag()*temp.real()) - (this->real()*temp.imag())) / (temp.real().SQR() + temp.imag().SQR()) ));
    }
    Complexe<T>& MOD(const Cst& other)const{Exception("La fonction modulo n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
    Complexe<T>& POW(const Cst& other)const{Exception("La fonction puissance n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}

    // Fuite memoire dans les 3 ci-dessous pour les mêmes raisons
    Complexe<T>& SQR () const{ return (*this)*(*this); }
    Complexe<T>& CUBE () const{ return (*this)*(*this)*(*this); }
    Complexe<T>& SIGN () const{ return *( new Complexe<T>(this->real().SIGN(), this->imag().SIGN()) ); }

    Complexe<T>& SIN(AngleType angle = Degre)const{Exception("La fonction sinus n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
    Complexe<T>& COS(AngleType angle = Degre)const{Exception("La fonction cosinus n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
    Complexe<T>& TAN(AngleType angle = Degre)const{Exception("La fonction tangente n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
    Complexe<T>& SINH()const{Exception("La fonction sinus hyperbolique n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
    Complexe<T>& COSH()const{Exception("La fonction cosinus hyperbolique n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
    Complexe<T>& TANH()const{Exception("La fonction tangente hyperbolique n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
    Complexe<T>& LN()const{Exception("La fonction logarithme neperien n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
    Complexe<T>& LOG()const{Exception("La fonction logarithme decimal n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
    Complexe<T>& INV()const{Exception("La fonction inverse n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
    Complexe<T>& SQRT()const{Exception("La fonction racine carre n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
    Complexe<T>& FACT()const{Exception("La fonction factorielle n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
    Complexe<T>& EVAL()const{Exception("La fonction eval n'est pas cense être utilisee pour un complexe").sendMessage().sendLog();return *(new Complexe<T>());}
};


class Reel : public Cst
{
protected:
    double valeur;
    void setString();

public:
    virtual ~Reel() { }
    bool isNumber() const { return true; }
    double getValeur() const;
    Reel(double valeur  = 0): valeur(valeur) { setString(); }

    Reel& operator +(const Cst& other)const;
    Reel& operator *(const Cst& other)const;
    Reel& operator -(const Cst& other)const;
    Reel& operator /(const Cst& other)const;
    Reel& POW (const Cst& other)const;
    Reel& MOD(const Cst& other) const;
	
    Reel& SQR ()const;
    Reel& CUBE ()const;
    Reel& SIGN ()const;
    Reel& SIN (AngleType angle = Degre)const;
    Reel& COS (AngleType angle = Degre)const;
    Reel& TAN (AngleType angle = Degre)const;
    Reel& SINH ()const;
    Reel& COSH ()const;
    Reel& TANH ()const;
    Reel& LN ()const;
    Reel& LOG ()const;
    Reel& SQRT ()const;
    Reel& INV ()const;
    Reel& FACT()const;
    Reel& EVAL()const;
};

class Rationnel :  public Reel
{
protected :
    int den;
    void setString();
    int PGCD(int a, int b);

public :
    Rationnel(int num = 0, int den = 1): Reel((double)num), den(den) { setString(); }
    virtual ~Rationnel() { }
    void simplifier();
    int getNum() const;
    int getDen() const;

    Rationnel& operator +(const Cst & other)const;
    Rationnel& operator *(const Cst & other)const;
    Rationnel& operator -(const Cst & other)const;
    Rationnel& operator /(const Cst & other)const;
    Rationnel& POW (const Cst & other)const;
    Rationnel& MOD(const Cst & other) const;
	
    Rationnel& SQR ()const;
    Rationnel& CUBE ()const;
    Rationnel& SIGN ()const;
    Rationnel& SIN (AngleType angle = Degre)const;
    Rationnel& COS (AngleType angle = Degre)const;
    Rationnel& TAN (AngleType angle = Degre)const;
    Rationnel& SINH ()const;
    Rationnel& COSH ()const;
    Rationnel& TANH ()const;
    Rationnel& LN ()const;
    Rationnel& LOG ()const;
    Rationnel& SQRT ()const;
    Rationnel& INV ()const;
    Rationnel& FACT()const;
    Rationnel& EVAL()const;
};

class Entier : public Rationnel
{
public:
    virtual ~Entier() { }
    Entier(int valeur = 0): Rationnel(valeur) { setString(); }
    Entier(const Cst& a_copier) {
        Cst& ref_cmplx_reel = *(new Complexe<Reel>(Reel(1),Reel(1)));
        Cst& ref_cmplx_ratio = *(new Complexe<Rationnel>(Rationnel(1,1),Rationnel(1,1)));
        Cst& ref_cmplx_entier = *(new Complexe<Entier>(Entier(1),Entier()));
        Cst& ref_reel = *(new Reel(1));
        Cst& ref_ratio = *(new Rationnel(1,1));
        Cst& ref_entier = *(new Entier(1));

        if(typeid(a_copier).name()==typeid(ref_cmplx_reel).name()) {
            const Complexe<Reel>& a_copier2 = dynamic_cast<const Complexe<Reel>&>(a_copier);
            valeur = (int) a_copier2.real().getValeur();
        }
        else if(typeid(a_copier).name()==typeid(ref_cmplx_ratio).name()) {
            const Complexe<Rationnel>& a_copier2 = dynamic_cast<const Complexe<Rationnel>&>(a_copier);
            valeur = (int)(a_copier2.real().getNum() / a_copier2.real().getDen());
        }
        else if(typeid(a_copier).name()==typeid(ref_cmplx_entier).name()) {
            const Complexe<Entier>& a_copier2 = dynamic_cast<const Complexe<Entier>&>(a_copier);
            valeur = a_copier2.real().getNum();
        }
        else if(typeid(a_copier).name()==typeid(ref_reel).name()) {
            const Reel& a_copier2 = dynamic_cast<const Reel&>(a_copier);
            valeur = (int) a_copier2.getValeur();
        }
        else if(typeid(a_copier).name()==typeid(ref_ratio).name()) {
            const Rationnel& a_copier2 = dynamic_cast<const Rationnel&>(a_copier);
            valeur = (int)(a_copier2.getNum() / a_copier2.getDen());
        }
        else if(typeid(a_copier).name()==typeid(ref_entier).name()) {
            const Entier& a_copier2 = dynamic_cast<const Entier&>(a_copier);
            valeur = a_copier2.getNum();
        }
        else { valeur = 0; }

        delete &ref_cmplx_entier;
        delete &ref_cmplx_ratio;
        delete &ref_cmplx_reel;
        delete &ref_entier;
        delete &ref_ratio;
        delete &ref_reel;

        setString();
    }

    Entier& operator +(const Cst & other)const;
    Entier& operator *(const Cst & other)const;
    Entier& operator -(const Cst & other)const;
    Entier& operator /(const Cst & other)const;
    Entier& POW (const Cst & other)const;
    Entier& MOD(const Cst & other) const;

    Entier& SQR ()const;
    Entier& CUBE ()const;
    Entier& SIGN ()const;
    Entier& SIN (AngleType angle = Degre)const;
    Entier& COS (AngleType angle = Degre)const;
    Entier& TAN (AngleType angle = Degre)const;
    Entier& SINH ()const;
    Entier& COSH ()const;
    Entier& TANH ()const;
    Entier& LN ()const;
    Entier& LOG ()const;
    Entier& SQRT ()const;
    Entier& INV ()const;
    Entier& FACT()const;
    Entier& EVAL()const;
};

}
