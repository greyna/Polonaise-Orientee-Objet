#pragma once

#include <iostream>
#include <QString>
#include "expression.h"

using namespace std;

namespace calcul {

class NombreException
{
protected:
    QString message;
public:
    NombreException(QString message);
	
	void sendMessage();
};

class Nombre : public Expression
{
protected:
	void set_string_associe() = 0;
public:
    Nombre(const QString & string_associe);
	Nombre();
	
	bool isNumber() const;
};

class ComplexeReel : public Nombre
{
protected:
	double re;
	double img;
	void set_string_associe();
public:
    ComplexeReel(const QString & string_associe);
	ComplexeReel(double re = 0, double img = 0);

    // --------------------------------------------------------------------
    // METHODES D'OPERATIONS UNAIRES (modifie l'objet)
    // --------------------------------------------------------------------

    // --------------------------------------------------------------------
    // PATRONS DE METHODES D'OPERATIONS BINAIRES (pour avoir le type de retour correct)
    // --------------------------------------------------------------------
    template<class T>
    T operator+(const T& operande) const {
        T res;

        res.re = re + operande.re;
        res.img = img + operande.img;

        // Pour s'assurer que, depuis cette fonction de ComplexeReel,
        // on n'appelle pas la fonction virtuelle set_string_associe d'une de ses filles sans en avoir le droit,
        // on appelle celle depuis ComplexeReel::
        res.ComplexeReel::set_string_associe();
        return res;
    }
    template<class T>
    T operator-(const T& operande) const {
        T res;

        res.re = re - operande.re;
        res.img = img - operande.img;

        // Pour s'assurer que, depuis cette fonction de ComplexeReel,
        // on n'appelle pas la fonction virtuelle set_string_associe d'une de ses filles sans en avoir le droit,
        // on appelle celle depuis ComplexeReel::
        res.ComplexeReel::set_string_associe();
        return res;
    }
    template<class T>
    T operator*(const T& operande) const {
        T res;

        res.re = (re * operande.re) - (img * operande.img);
        res.img = (img * operande.re) + (re * operande.img);

        // Pour s'assurer que, depuis cette fonction de ComplexeReel,
        // on n'appelle pas la fonction virtuelle set_string_associe d'une de ses filles sans en avoir le droit,
        // on appelle celle depuis ComplexeReel::
        res.ComplexeReel::set_string_associe();
        return res;
    }

};

class ComplexeRationnel : public virtual ComplexeReel
{
protected:
	int den_re;
	int den_img;
	void set_string_associe();
public:
    ComplexeRationnel(const QString & string_associe);
	ComplexeRationnel(int re = 0, int den_re = 1, int img = 0, int den_img = 1);
	
	// Les classes filles doivent utiliser ces accesseurs pour les numérateurs (auto cast)
	void set_num_re(int num_re); // cast int->double
	void set_num_img(int num_img);
    int get_num_re() const; // cast double->int
    int get_num_img() const;

    // --------------------------------------------------------------------
    // METHODES D'OPERATIONS UNAIRES (modifie l'objet)
    // --------------------------------------------------------------------

    // --------------------------------------------------------------------
    // PATRONS DE METHODES D'OPERATIONS BINAIRES (pour avoir le type de retour correct)
    // --------------------------------------------------------------------
    template<class T>
    T operator+(const T& operande) const {
        T res;

        res.set_num_re(get_num_re()*operande.den_re + operande.get_num_re()*den_re);
        res.den_re = den_re*operande.den_re;

        res.set_num_img(get_num_img()*operande.den_img + operande.get_num_img()*den_img);
        res.den_img = den_img*operande.den_img;

        // Pour s'assurer que, depuis cette fonction de ComplexeRationnel,
        // on n'appelle pas la fonction virtuelle set_string_associe d'une de ses filles sans en avoir le droit,
        // on appelle celle depuis ComplexeRationnel::
        res.ComplexeRationnel::set_string_associe();
        return res;
    }
    template<class T>
    T operator-(const T& operande) const {
        T res;

        res.set_num_re(get_num_re()*operande.den_re - operande.get_num_re()*den_re);
        res.den_re = den_re*operande.den_re;

        res.set_num_img(get_num_img()*operande.den_img - operande.get_num_img()*den_img);
        res.den_img = den_img*operande.den_img;

        // Pour s'assurer que, depuis cette fonction de ComplexeRationnel,
        // on n'appelle pas la fonction virtuelle set_string_associe d'une de ses filles sans en avoir le droit,
        // on appelle celle depuis ComplexeRationnel::
        res.ComplexeRationnel::set_string_associe();
        return res;
    }
    template<class T>
    T operator*(const T& operande) const {
        T res;
        res.re = (re * operande.re) - (img * operande.img);
        res.img = (img * operande.re) + (re * operande.img);

        res.set_num_re( (get_num_re()*operande.get_num_re()*den_img*operande.den_img) - (operande.get_num_img()*get_num_img()*den_re*operande.den_re) );
        res.den_re = den_re*operande.den_re*operande.den_img*den_img;

        res.set_num_img( (get_num_img()*operande.get_num_re()*den_re*operande.den_img) + (den_img*operande.den_re*get_num_re()*operande.get_num_img()) );
        res.den_img = den_re*operande.den_re*operande.den_img*den_img;

        // Pour s'assurer que, depuis cette fonction de ComplexeRationnel,
        // on n'appelle pas la fonction virtuelle set_string_associe d'une de ses filles sans en avoir le droit,
        // on appelle celle depuis ComplexeRationnel::
        res.ComplexeRationnel::set_string_associe();
        return res;
    }

};

class ComplexeEntier : public ComplexeRationnel
{
public:
    ComplexeEntier(const QString & string_associe);
    ComplexeEntier(int re = 0, int img = 0);
};

class Reel : public virtual ComplexeReel
{
public:
    Reel(const QString & string_associe);
	Reel(double valeur = 0);
};

class Rationnel : public ComplexeRationnel, public Reel
{
public:
    Rationnel(const QString & string_associe);
	Rationnel(int num = 0, int den = 1);
};

class Entier : public Rationnel
{
public:
    Entier(const QString & string_associe);
	Entier(int valeur = 0);
};

}
