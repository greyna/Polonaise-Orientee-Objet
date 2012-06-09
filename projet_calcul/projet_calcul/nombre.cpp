
#include "nombre.h"

using namespace std;
using namespace calcul;

// --------------------------------------------------------------------
// CONSTRUCTEURS
// --------------------------------------------------------------------

NombreException::NombreException(QString message)
: message(message) { }

Nombre::Nombre(const QString & string_associe)
: Expression(string_associe) { }
Nombre::Nombre()
: Expression() { }


ComplexeReel::ComplexeReel(const QString & string_associe)
: Nombre(string_associe), re(0), img(0) {
    QString temp(string_associe);

    int n = temp.indexOf(" ");
    if (n>=0)
        temp = temp.left(n-1);

    n = temp.indexOf("$");
    if (n>=0) {
        img = temp.mid(n).toDouble();
        re = temp.left(n-1).toDouble();
    }
    else
        re = temp.toDouble();
    set_string_associe();
}
ComplexeReel::ComplexeReel(double re, double img)
: Nombre(), re(re), img(img) { set_string_associe(); }

ComplexeRationnel::ComplexeRationnel(const QString & string_associe)
: ComplexeReel(string_associe), den_re(1), den_img(1) {
    QString temp(string_associe);

    int n = temp.indexOf(" ");
    if (n>=0)
        temp = temp.left(n-1);


    n = temp.indexOf("$");
    if (n>=0) {
        QString temp2(temp.mid(n));
        temp = temp.left(n-1);

        n = temp.indexOf("/");
        if (n>=0) {
            set_num_re(temp.left(n-1).toInt());
            den_re = temp.mid(n).toInt();
        }
        else
            set_num_re(temp.toInt());

        n = temp2.indexOf("/");
        if (n>=0) {
            set_num_img(temp2.left(n-1).toInt());
            den_img = temp2.mid(n).toInt();
        }
        else
            set_num_img(temp2.toInt());
    }
    else {
        n = temp.indexOf("/");
        if (n>=0) {
            set_num_re(temp.left(n-1).toInt());
            den_re = temp.mid(n).toInt();
        }
        else
            set_num_re(temp.toInt());
    }
    set_string_associe();
}
ComplexeRationnel::ComplexeRationnel(int re, int den_re, int img, int den_img)
: ComplexeReel((double)re, (double)img), den_re(den_re), den_img(den_img) { set_string_associe(); }

ComplexeEntier::ComplexeEntier(const QString & string_associe)
: ComplexeRationnel(string_associe) { }
ComplexeEntier::ComplexeEntier(int re, int img)
: ComplexeRationnel(re, 1, img) { set_string_associe(); }

Reel::Reel(const QString & string_associe)
: ComplexeReel(string_associe) { }
Reel::Reel(double valeur)
: ComplexeReel(valeur) { set_string_associe(); }

Rationnel::Rationnel(const QString & string_associe)
: ComplexeRationnel(string_associe) { }
Rationnel::Rationnel(int num, int den)
: ComplexeRationnel(num, den) { set_string_associe(); }

Entier::Entier(const QString & string_associe)
: Rationnel(string_associe) { }
Entier::Entier(int valeur)
: Rationnel(valeur, 1) { set_string_associe(); }

// --------------------------------------------------------------------
// METHODES
// --------------------------------------------------------------------
void NombreException::sendMessage() { }

bool Nombre::isNumber() const { return true; }

void ComplexeReel::set_string_associe() {
    if (img!=0 && re!=0)
        string_associe = QString("%1$%2").arg(re).arg(img);
    else if (re!=0)
        string_associe = QString("%1").arg(re);
    else if (img!=0)
        string_associe = QString("$%1").arg(img);
    else
        string_associe = QString("0");
}

void ComplexeRationnel::set_string_associe() {
    if (img!=0 && re!=0 && den_re==1 && den_img==1)
        string_associe = QString("%1$%2").arg(re).arg(img);
    else if (img!=0 && re!=0 && den_re==1)
        string_associe = QString("%1$%2/%3").arg(re).arg(img).arg(den_img);
    else if (img!=0 && re!=0 && den_img==1)
        string_associe = QString("%1/%2$%3").arg(re).arg(den_re).arg(img);
    else if (img!=0 && re!=0)
        string_associe = QString("%1/%2$%3/%4").arg(re).arg(den_re).arg(img).arg(den_img);
    else if (img!=0 && den_img!=1)
        string_associe = QString("$%1/%2").arg(img).arg(den_img);
    else if (img!=0)
        string_associe = QString("$%1").arg(img);
    else if (re!=0 && den_re!=1)
        string_associe = QString("%1/%2").arg(re).arg(den_re);
    else if (re!=0)
        string_associe = QString("%1").arg(re);
    else
        string_associe = QString("0");
}

void Rationnel::set_string_associe() { ComplexeRationnel::set_string_associe(); }

// Les classes filles doivent utiliser ces accesseurs pour les numérateurs (auto cast)
void ComplexeRationnel::set_num_re(int num_re) { re = (double) num_re; }
void ComplexeRationnel::set_num_img(int num_img) { img = (double) num_img; }

int ComplexeRationnel::get_num_re() { return (int) re; }
int ComplexeRationnel::get_num_img() { return (int) img; }
