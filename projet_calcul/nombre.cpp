
#include "nombre.h"

using namespace std;
using namespace calcul;

// --------------------------------------------------------------------
// CONSTRUCTEURS
// --------------------------------------------------------------------

NombreException::NombreException(string message)
: message(message) { }

Nombre::Nombre(const string & string_associe)
: Expression(string_associe) { }
Nombre::Nombre()
: Expression() { }


ComplexeReel::ComplexeReel(const string & string_associe)
: Nombre(string_associe), re(0), img(0) { /* parsing string_associe to attributes */ }
ComplexeReel::ComplexeReel(double re, double img)
: Nombre(), re(re), img(img) { set_string_associe(); }

ComplexeRationnel::ComplexeRationnel(const string & string_associe)
: ComplexeReel(string_associe), den_re(1), den_img(1) { /* parsing string_associe to attributes */ }
ComplexeRationnel::ComplexeRationnel(int re, int den_re, int img, int den_img)
: ComplexeReel((double)re, (double)img), den_re(den_re), den_img(den_img) { set_string_associe(); }

ComplexeEntier::ComplexeEntier(const string & string_associe)
: ComplexeRationnel(string_associe) { /* parsing string_associe to attributes */ }
ComplexeEntier::ComplexeEntier(int re, int img)
: ComplexeRationnel(re, 1, img) { set_string_associe(); }

Reel::Reel(const string & string_associe)
: ComplexeReel(string_associe) { /* parsing string_associe to attributes */ }
Reel::Reel(double valeur)
: ComplexeReel(valeur) { set_string_associe(); }

Rationnel::Rationnel(const string & string_associe)
: ComplexeRationnel(string_associe) { /* parsing string_associe to attributes */ }
Rationnel::Rationnel(int num, int den)
: ComplexeRationnel(num, den) { set_string_associe(); }

Entier::Entier(const string & string_associe)
: Rationnel(string_associe) { /* parsing string_associe to attributes */ }
Entier::Entier(int valeur)
: Rationnel(valeur, 1) { set_string_associe(); }

// --------------------------------------------------------------------
// METHODES
// --------------------------------------------------------------------
string Expression::get_string_associe() const {	return string_associe; }

void NombreException::sendMessage() { cout<<"Exception de nombre levée : "<<message<<"\n"; }

bool Nombre::isNumber() const { return true; }

void Nombre::set_string_associe() { }
void ComplexeReel::set_string_associe() { }
void ComplexeRationnel::set_string_associe() { }

// Les classes filles doivent utiliser ces accesseurs pour les numérateurs (auto cast)
void ComplexeRationnel::set_num_re(int num_re) { re = (double) num_re; }
void ComplexeRationnel::set_num_img(int num_img) { img = (double) num_img; }

int ComplexeRationnel::get_num_re() { return (int) re; }
int ComplexeRationnel::get_num_img() { return (int) img; }
