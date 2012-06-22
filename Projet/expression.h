#pragma once

#include <QString>
#include "factory.h"

using namespace std;

namespace calcul {

/*! \class Expression
 * \brief Classe hérite de la classe Cst et représente une expression
 */
class Expression : public Cst {
protected:
    void setString() { }

public:
    /*!
     *  \brief Constructeur de la classe Expression
     *  \param str : La chaîne de caractère à convertir en Expression
     */
    Expression(QString str) { string_associe = "'"+str+"'"; }
    /*!
     *  \brief Vérifier si l'expression est un nombre
     *  \return True si l'expression est un nombre
     */
    bool isNumber() const { return false; }

    Expression& operator +(const Cst& other)const;
    Expression& operator *(const Cst& other)const;
    Expression& operator -(const Cst& other)const;
    Expression& operator /(const Cst& other)const;
    Expression& POW (const Cst& other)const;
    Expression& MOD(const Cst& other) const;
    Expression& SQR ()const;
    Expression& CUBE ()const;
    Expression& SIGN ()const;
    Expression& SIN (AngleType angle = Degre)const;
    Expression& COS (AngleType angle = Degre)const;
    Expression& TAN (AngleType angle = Degre)const;
    Expression& SINH ()const;
    Expression& COSH ()const;
    Expression& TANH ()const;
    Expression& LN ()const;
    Expression& LOG ()const;
    Expression& SQRT ()const;
    Expression& INV ()const;
    Expression& FACT()const;
    Expression& EVAL()const;
};

}
