
#pragma once

#include <iostream>
#include <string>
#include "expression.h"

using namespace std;

namespace calcul {

class NombreException
{
protected:
	string message;
public:
	NombreException(string message);
	
	void sendMessage();
};

class Nombre : public Expression
{
protected:
	void set_string_associe() = 0;
public:
	Nombre(const string & string_associe);
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
	ComplexeReel(const string & string_associe);
	ComplexeReel(double re = 0, double img = 0);
};

class ComplexeRationnel : public virtual ComplexeReel
{
protected:
	int den_re;
	int den_img;
	void set_string_associe();
public:
	ComplexeRationnel(const string & string_associe);
	ComplexeRationnel(int re = 0, int den_re = 1, int img = 0, int den_img = 1);
	
	// Les classes filles doivent utiliser ces accesseurs pour les numérateurs (auto cast)
	void set_num_re(int num_re); // cast int->double
	void set_num_img(int num_img);
	int get_num_re(); // cast double->int
	int get_num_img();
};

class ComplexeEntier : public ComplexeRationnel
{
public:
	ComplexeEntier(const string & string_associe);
	ComplexeEntier(int re = 0, int img = 0);
};

class Reel : public virtual ComplexeReel
{
public:
	Reel(const string & string_associe);
	Reel(double valeur = 0);
};

class Rationnel : public ComplexeRationnel, public Reel
{
public:
	Rationnel(const string & string_associe);
	Rationnel(int num = 0, int den = 1);
};

class Entier : public Rationnel
{
public:
	Entier(const string & string_associe);
	Entier(int valeur = 0);
};

}
