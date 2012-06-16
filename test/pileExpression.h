#pragma once

#include <stack>
#include <iostream>
#include <QString>
#include "nombre.h"

namespace calcul {

class PileExpression : public Expression {
protected:
    stack<Expression*> donnees;
    void set_string_associe();
public:
    PileExpression(const QString & string_associe = "");
    bool isNumber() const;
    void push(Expression&);
    void pop();
    Expression& top();
    void swap (int x, int y);
    Nombre& sum (int x);
    Nombre& mean (int x);
    void clear ();
    void dup ();
    void drop ();
    void eval ();
};

}
