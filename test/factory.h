#pragma once

#include <QString>
#include "cst.h"

using namespace std;
namespace calcul {

class Factory
{
public:
    virtual Cst& CreerReel(QString str)=0;
    virtual Cst& CreerRationnel(QString str)=0;
    virtual Cst& CreerEntier(QString str)=0;
};

class FactoryComplexe : public Factory
{
public:

    Complexe<Reel>& CreerReel(QString str);
    Complexe<Rationnel>& CreerRationnel(QString str);
    Complexe<Entier>& CreerEntier(QString str);
};

class FactoryNormal : public Factory
{
public:
    Reel& CreerReel(QString str);
    Rationnel& CreerRationnel(QString str);
    Entier& CreerEntier(QString str);
};

}
