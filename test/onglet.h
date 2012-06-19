#ifndef ONGLET_H
#define ONGLET_H
#include <QTabWidget>
#include <QWidget>
#include <QtGui>
#include "ui_onglet.h"
#include "moteurCalcul.h"
#include "histo.h"
using namespace Ui;
using namespace calcul;

class Onglet:public QWidget{
    Q_OBJECT

public:
    explicit Onglet(unsigned int num, QTabWidget *tab, unsigned int init);
    explicit Onglet(unsigned int num, QTabWidget *tab, Onglet* o);
    ~Onglet();
    void saveContext();
    void loadContext();
    MoteurCalcul getMot();
private:
    //Histo histo;
    Ui_Widget ui;
    MoteurCalcul moteur;
    QStack<QString> pile_affichage;
    QString modeCalcul;
    unsigned int numOnglet;
    void connects();
    void opAll();
    void opNonReels();
    void opNonEntiers();
    void opNonComplexes();
    void opNonRationels();
    void clavierBasicVisible(bool visible);
    void clavierAvanceVisible(bool visible);
    void closeEvent(QCloseEvent *event);
public slots:
    void mode();
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
    void enter();
    void space();
    void annuler();
    void retablir();
    void newOnglet();
    void deleteOnglet();
    void dupOnglet();
};
#endif
