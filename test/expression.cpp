#include "expression.h"

using namespace std;
using namespace calcul;

// --------------------------------------------------------------------
// CONSTRUCTEURS
// --------------------------------------------------------------------
Expression::Expression(const QString & string_associe): string_associe(string_associe) { }
Expression::Expression(): string_associe("") { }

// --------------------------------------------------------------------
// METHODES
// --------------------------------------------------------------------
QString Expression::get_string_associe() const {	return string_associe; }
