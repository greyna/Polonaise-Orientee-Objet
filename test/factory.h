#ifndef FACTORY_H
#define FACTORY_H

#include "cst.h"

using namespace std;
namespace calcul {
class Operation;
class Factory
{
public:
    static Operation* CreerOperation(QString str);
    virtual Cst* CreerReel(QString str)=0;
    virtual Cst* CreerRationnel(QString str)=0;
    virtual Cst* CreerEntier(QString str)=0;
    virtual Cst* TransformerReel(Cst* nbr)=0;
    virtual Cst* TransformerRationnel(Cst* nbr)=0;
    virtual Cst* TransformerEntier(Cst* nbr)=0;
};

class FactoryComplexe : public Factory
{
public:
    Complexe* CreerReel(QString str);
    Complexe* CreerRationnel(QString str);
    Complexe* CreerEntier(QString str);
    Complexe* TransformerReel(Cst* nbr);
    Complexe* TransformerRationnel(Cst* nbr);
    Complexe* TransformerEntier(Cst* nbr);

};

class FactoryNormal : public Factory
{
public:
    Reel* CreerReel(QString str);
    Reel* CreerRationnel(QString str);
    Reel* CreerEntier(QString str);
    Reel* TransformerReel(Cst* nbr);
    Reel* TransformerRationnel(Cst* nbr);
    Reel* TransformerEntier(Cst* nbr);

};

}

#endif // FACTORY_H
