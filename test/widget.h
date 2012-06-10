#ifndef WIDGET_H
#define WIDGET_H
#include <QTabWidget>
#include <QWidget>
#include <QtGui>
#include "ui_onglet.h"

class MyWidget:public QWidget{
    Q_OBJECT
public:
    MyWidget();
    void add();
    ~MyWidget();
private:
    QTabWidget *tab;
    Ui::Onglet onglet;
    Ui::Onglet onglet2;
    Ui::Onglet onglet3;
    Ui::Onglet **onglets;
    int nbr_onglets;
    int nbr_max;
private slots:
    void slotChild();
};
#endif
