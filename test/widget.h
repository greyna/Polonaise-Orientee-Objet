#ifndef WIDGET_H
#define WIDGET_H
#include <QTabWidget>
#include <QWidget>
#include <QtGui>
#include "ui_onglet.h"
using namespace Ui;

class MyWidget:public QWidget{
    Q_OBJECT
public:
    MyWidget();
    void add();
    ~MyWidget();
private:
    QTabWidget *tab;
    Onglet **onglets;
    int nbr_onglets;
    int nbr_max;
    void MyWidget::connects(Onglet *ong);
public slots:
    void dupPressed();
    void num0Pressed();
    void num1Pressed();
    void num2Pressed();
    void num3Pressed();
    void num4Pressed();
    void num5Pressed();
    void num6Pressed();
    void num7Pressed();
    void num8Pressed();
    void num9Pressed();
    void enterPressed();
};
#endif
