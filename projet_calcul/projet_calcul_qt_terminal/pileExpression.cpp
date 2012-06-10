#include "pileExpression.h"

using namespace std;
using namespace calcul;

// --------------------------------------------------------------------
// CONSTRUCTEURS
// --------------------------------------------------------------------
PileExpression::PileExpression(const QString & string_associe)
: Expression(string_associe) { /* parsing string_associe to stack */ }

// --------------------------------------------------------------------
// METHODES
// --------------------------------------------------------------------
void PileExpression::set_string_associe() { }
bool PileExpression::isNumber() const { return false; }

void PileExpression::push(Expression& nouveau) { donnees.push(&nouveau); }
void PileExpression::pop() { donnees.pop(); }
Expression& PileExpression::top() { return *(donnees.top()); }
