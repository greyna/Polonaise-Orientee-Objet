#include "expression.h"

using namespace std;
using namespace calcul;

// --------------------------------------------------------------------
// CONSTRUCTEURS et compagnie
// --------------------------------------------------------------------

Expression& Expression::operator +(const Cst& other)const {
    return *(new Expression(string_associe.left(string_associe.size()-1).mid(1) + " " + other.getString() + " +"));
}
Expression& Expression::operator *(const Cst& other)const {
    return *(new Expression(string_associe + " " + other.getString() + " *"));
}
Expression& Expression::operator -(const Cst& other)const {
    return *(new Expression(string_associe + " " + other.getString() + " -"));
}
Expression& Expression::operator /(const Cst& other)const {
    return *(new Expression(string_associe + " " + other.getString() + " /"));
}
Expression& Expression::POW (const Cst& other)const {
    return *(new Expression(string_associe + " " + other.getString() + " POW"));

}
Expression& Expression::MOD(const Cst& other) const {
    return *(new Expression(string_associe + " " + other.getString() + " MOD"));
}
//**********************unaires******************************//
Expression& Expression::SQR ()const {
    return *(new Expression(string_associe + " SQR"));
}

Expression& Expression::CUBE ()const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::SIGN ()const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::SIN (AngleType angle)const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::COS (AngleType angle)const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::TAN (AngleType angle)const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::SINH ()const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::COSH ()const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::TANH ()const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::LN ()const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::LOG ()const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::SQRT ()const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::INV ()const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::FACT()const {
    return *(new Expression(string_associe + " SQR"));
}
Expression& Expression::EVAL()const {
    return *(new Expression(string_associe + " SQR"));
}
