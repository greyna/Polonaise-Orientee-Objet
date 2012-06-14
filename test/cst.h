#ifndef CST_H
#define CST_H
#include <QString>
#include <math.h>
#include <iostream>

/*
 *
 *  Pour les calculs travailler par ref grâce au patron de méthode --> surcharge
 *  Le cast sur opérande est �  faire avant d'appeller la methode de resoltion
 *
 *prevoir des constructeur de recopie,
 *on les appelles qund on depile
*/
using namespace std;
namespace calcul {
class Cst
{
public:
    Cst();
    virtual ~Cst(){}
    QString getString() { return string_associe; }

protected:
    QString string_associe;

    virtual void setString() = 0;
    //Pour la manipulation de la string interne
};

class Reel;
class Complexe : public Cst
{
protected:
    Reel * re;
    Reel * img;

    void setString();
public:
    Complexe(Reel* re, Reel* img);
};

class Reel : public Complexe
{
protected:
    double valeur;
    void setString();

public:
    Reel(double valeur = 0);
};

class Rationnel :  public Reel
{
protected :
    int den;
    void setString();
public :
    Rationnel(int num = 0, int den = 1);
};

class Entier : public Rationnel
{
protected :
    void setString();
public:
    Entier(int valeur = 0);
};
}

#endif // CST_H
