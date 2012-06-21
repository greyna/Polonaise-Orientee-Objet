#include "expression.h"

using namespace std;
using namespace calcul;

// --------------------------------------------------------------------
// CONSTRUCTEURS et compagnie
// --------------------------------------------------------------------

Expression& Expression::operator +(const Cst& other)const {
    if (other.isNumber())
        return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString() + " +"));
    else
        return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString().left(other.getString().size()-1).mid(1) + " +"));
}
Expression& Expression::operator *(const Cst& other)const {
    if (other.isNumber())
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString() + " *"));
    else
        return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString().left(other.getString().size()-1).mid(1) + " *"));
}
Expression& Expression::operator -(const Cst& other)const {
    if (other.isNumber())
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString() + " -"));
    else
        return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString().left(other.getString().size()-1).mid(1) + " -"));
}
Expression& Expression::operator /(const Cst& other)const {
    if (other.isNumber())
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString() + " /"));
    else
        return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString().left(other.getString().size()-1).mid(1) + " /"));
}
Expression& Expression::POW (const Cst& other)const {
    if (other.isNumber())
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString() + " POW"));
    else
        return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString().left(other.getString().size()-1).mid(1) + " POW"));
}
Expression& Expression::MOD(const Cst& other) const {
    if (other.isNumber())
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString() + " MOD"));
    else
        return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString().left(other.getString().size()-1).mid(1) + " MOD"));
}

//**********************unaires******************************//
Expression& Expression::SQR ()const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " SQR"));
}

Expression& Expression::CUBE ()const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " CUBE"));
}
Expression& Expression::SIGN ()const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " SIGN"));
}
Expression& Expression::SIN (AngleType angle)const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " SIN"));
}
Expression& Expression::COS (AngleType angle)const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " COS"));
}
Expression& Expression::TAN (AngleType angle)const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " TAN"));
}
Expression& Expression::SINH ()const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " SINH"));
}
Expression& Expression::COSH ()const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " COSH"));
}
Expression& Expression::TANH ()const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " TANH"));
}
Expression& Expression::LN ()const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " LN"));
}
Expression& Expression::LOG ()const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " LOG"));
}
Expression& Expression::SQRT ()const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " SQRT"));
}
Expression& Expression::INV ()const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " INV"));
}
Expression& Expression::FACT()const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " FACT"));
}
Expression& Expression::EVAL()const { // ne sera jamais appele, le traitement de cette fonction est gere par PileCst::resoudre()
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " EVAL"));
}
