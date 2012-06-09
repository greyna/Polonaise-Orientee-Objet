#include "expression.h"

using namespace std;
using namespace calcul;

// --------------------------------------------------------------------
// CONSTRUCTEURS
// --------------------------------------------------------------------
Expression::Expression(const string & string_associe)
: string_associe(string_associe) { }
Expression::Expression()
: string_associe("") { }
