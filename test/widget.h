#ifndef WIDGET_H
#define WIDGET_H
#include <QTabWidget>
#include <QWidget>
#include <QtGui>
#include "ui_onglet.h"
#include "pileExpression.h"
using namespace Ui;
using namespace calcul;

class MyWidget:public QWidget{
    Q_OBJECT

public:
    MyWidget();
    void newOnglet();
    void changeMode();
    ~MyWidget();

private:
    QTabWidget *tab;
    Onglet **onglets;
    int nbr_onglets;
    int nbr_max;
    //PileExpression pile_affichage;
    void MyWidget::connects(Onglet *ong);

public slots:
    void complexeActive();
    void complexeDesactive();
    void constReel();
    void constRationel();
    void constEntier();
    void clavierBasicOn();
    void clavierBasicOff();
    void clavierAvanceOn();
    void clavierAvanceoff();
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
    void enter();
};
#endif
