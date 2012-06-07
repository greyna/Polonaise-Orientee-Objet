#include "nombres.h"

using namespace std;
using namespace calcul;

// --------------------------------------------------------------------
// CONSTRUCTEURS
// --------------------------------------------------------------------
Expression::Expression(string string_associe)
: string_associe(string_associe) { }
Expression::Expression()
: string_associe("") { }

NombreException::NombreException(string message)
: message(message) { }

Nombre::Nombre(string string_associe)
: Expression(string_associe) { }
Nombre::Nombre()
: Expression() { }


ComplexeReel::ComplexeReel(string string_associe)
: Nombre(string_associe), re(0), img(0) { /* parsing string_associe to attributes */ }
ComplexeReel::ComplexeReel(double re, double img)
: Nombre(), re(re), img(img) { }

ComplexeRationnel::ComplexeRationnel(string string_associe, int re, int img, int den_re, int den_img)
: ComplexeReel(string_associe, (double) re, (double) img), den_re(den_re), den_img(den_img) { }

ComplexeEntier::ComplexeEntier(string string_associe, int re, int img)
: ComplexeRationnel(string_associe, re, img, 1, 1) { }

Reel::Reel(string string_associe, double valeur)
: ComplexeReel(string_associe, valeur, 0) { }

Rationnel::Rationnel(string string_associe, int nominateur, int denominateur)
: ComplexeRationnel(string_associe, nominateur, 0, denominateur, 1) { }

Entier::Entier(string string_associe, int valeur)
: Rationnel(string_associe, valeur, 1) { }

// --------------------------------------------------------------------
// METHODES
// --------------------------------------------------------------------
string Expression::get_string_associe() const {	return string_associe; }

void NombreException::sendMessage() { cout<<"Exception de nombre levée : "<<message<<"\n"; }

bool Nombre::isNumber() const { return true; }

void Nombre::set_string_associe() { }
void ComplexeReel::set_string_associe() { }
void ComplexeRationnel::set_string_associe() { }
void ComplexeEntier::set_string_associe() { }
void Reel::set_string_associe() { }
void Rationnel::set_string_associe() { }
void Entier::set_string_associe() { }

// Protection des double modifié par des int passés en paramètres à cause de l'héritage
void ComplexeRationnel::set_num_re(int num_re) { re = (double) num_re; }
void ComplexeRationnel::set_num_img(int num_img) { img = (double) num_img; }

int ComplexeRationnel::get_num_re() { return (int) re; }
int ComplexeRationnel::get_num_img() { return (int) img; }
