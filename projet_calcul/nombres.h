
#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace calcul {

class Expression
{
protected:
	string string_associe;
	virtual void set_string_associe() = 0;
public:
	Expression(string string_associe);
	// : string_associe(string_associe) { }
	Expression();
	// : string_associe("") { }
	
	string get_string_associe() const;
    virtual bool isNumber() const = 0;
};

class NombreException
{
protected:
	string message;
public:
	NombreException(string message);
	// : message(message)
	
	void sendMessage();
};

class Nombre : public virtual Expression
{
protected:
	void set_string_associe();
public:
	Nombre(string string_associe);
	// : Expression(string_associe) { }
	Nombre();
	// : Expression() { }
	
	bool isNumber() const;
};

class ComplexeReel : public virtual Nombre
{
protected:
	double re;
	double img;
	void set_string_associe();
public:
	ComplexeReel(string string_associe);
	// : Nombre(string_associe), re(0), img(0) { /* parsing string_associe to attributes */ }
	ComplexeReel(double re = 0, double img = 0);
	// : Nombre(), re(re), img(img) { }
};

class ComplexeRationnel : public virtual ComplexeReel
{
protected:
	int den_re;
	int den_img;
	void set_string_associe();
public:
	ComplexeRationnel(string string_associe);
	// : ComplexeReel(string_associe), den_re(1), den_img(1) { /* parsing string_associe to attributes */ }
	ComplexeRationnel(int re = 0, int den_re = 1, int img = 0, int den_img = 1);
	// : ComplexeReel((double)re, (double)img), den_re(den_re), den_img(den_img) { }
	
	// Les classes filles doivent utiliser ces accesseurs pour les numérateurs (auto cast)
	void set_num_re(int num_re); // cast int->double
	void set_num_img(int num_img);
	int get_num_re(); // cast double->int
	int get_num_img();
};

class ComplexeEntier : public ComplexeRationnel
{
protected:
	void set_string_associe();
public:
	ComplexeEntier(string string_associe);
	// : ComplexeRationnel(string_associe) { /* parsing string_associe to attributes */ }
	ComplexeEntier(int re = 0, int img = 0);
	// : ComplexeRationnel(re, 1, img) { }
};

class Reel : public virtual ComplexeReel
{
protected:
	void set_string_associe();
public:
	Reel(string string_associe);
	// : ComplexeReel(string_associe) { /* parsing string_associe to attributes */ }
	Reel(double valeur = 0);
	// : ComplexeReel(valeur) { }
};

class Rationnel : public ComplexeRationnel, public Reel
{
protected:
	void set_string_associe();
public:
	Rationnel(string string_associe);
	// : ComplexeRationnel(string_associe) { /* parsing string_associe to attributes */ }
	Rationnel(int num = 0, int den = 1);
	// : ComplexeRationnel(num, den) { }
};

class Entier : public Rationnel
{
protected:
	void set_string_associe();
public:
	Entier(string string_associe);
	// : Rationnel(string_associe) { /* parsing string_associe to attributes */ }
	Entier(int valeur = 0);
	// : Rationnel(num, 1) { }
};


/*
class ExpressionComposee : public Expression
{
protected:
	//Vector<Expression &> tab;
public:
    //ExpressionComposee();
};
*/

}
