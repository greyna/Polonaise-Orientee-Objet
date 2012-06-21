#pragma once

#include <QString>
#include "cst.h"

using namespace std;
namespace calcul {

/*! \class Factory
 * \brief Classe abstraite implémentée en Design Pattern Factory Method pour créer des constantes
 */
class Factory
{
public:
    virtual Cst& CreerReel(QString str)=0;
    virtual Cst& CreerRationnel(QString str)=0;
    virtual Cst& CreerEntier(QString str)=0;
};

/*! \class FactoryComplexe
 * \brief Classe implémentée en Design Pattern Factory Method pour créer des constantes en mode complexe
 */
class FactoryComplexe : public Factory
{
public:
    /*!
     *  \brief Créer une constante complexe réelle à partir d'une chaîne de caractère passée en paramètre
     *  \param : str La chaîne de caractère à convertir
     */
    Complexe<Reel>& CreerReel(QString str);
    /*!
     *  \brief Créer une constante complexe rationnelle à partir d'une chaîne de caractère passée en paramètre
     *  \param : str La chaîne de caractère à convertir
     */
    Complexe<Rationnel>& CreerRationnel(QString str);
    /*!
     *  \brief Créer une constante complexe entière à partir d'une chaîne de caractère passée en paramètre
     *  \param : str La chaîne de caractère à convertir
     */
    Complexe<Entier>& CreerEntier(QString str);
};

/*! \class FactoryNormal
 * \brief Classe implémentée en Design Pattern Factory Method pour créer des constantes en mode non-complexe
 */
class FactoryNormal : public Factory
{
public:
    /*!
     *  \brief Créer une constante réelle à partir d'une chaîne de caractère passée en paramètre
     *  \param : str La chaîne de caractère à convertir
     */
    Reel& CreerReel(QString str);
    /*!
     *  \brief Créer une constante rationnelle à partir d'une chaîne de caractère passée en paramètre
     *  \param : str La chaîne de caractère à convertir
     */
    Rationnel& CreerRationnel(QString str);
    /*!
     *  \brief Créer une constante entière à partir d'une chaîne de caractère passée en paramètre
     *  \param : str La chaîne de caractère à convertir
     */
    Entier& CreerEntier(QString str);
};

}
