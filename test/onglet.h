#ifndef ONGLET_H
#define ONGLET_H
#include <QTabWidget>
#include <QWidget>
#include <QtGui>
#include "ui_onglet.h"
#include "moteurCalcul.h"
using namespace Ui;
using namespace calcul;

class Onglet:public QWidget{
    Q_OBJECT

public:
    Onglet(unsigned int num);
    ~Onglet();
private:
    QTabWidget *tab;
    Ui_Widget ui;
    MoteurCalcul moteur;
    QStack<QString> pile_affichage;
    void connects();
    void opAll();
    void opNonReels();
    void opNonEntiers();
    void opNonComplexes();
    void opNonRationels();
    void clavierBasicVisible(bool visible);
    void clavierAvanceVisible(bool visible);
public slots:
    void complexeActive();
    void complexeDesactive();
    void constReel();
    void constRationel();
    void constEntier();
    void clavierBasic();
    void clavierAvance();
    void radian();
    void degre();
    void dup();
    void drop();
    void clear();
    void swap();
    void log();
    void sinh();
    void cosh();
    void tanh();
    void mean();
    void ln();
    void sin();
    void cos();
    void tan();
    void sum();
    void xy();
    void x2();
    void x3();
    void apo();
    void fact();
    void dollar();
    void mod();
    void num0();
    void num1();
    void num2();
    void num3();
    void num4();
    void num5();
    void num6();
    void num7();
    void num8();
    void num9();
    void virgule();
    void plus();
    void moins();
    void fois();
    void diviser();
    void eval();
    void sqrt();
    void signe();
    void inv();
    void egale();
    void enter();
};
#endif
