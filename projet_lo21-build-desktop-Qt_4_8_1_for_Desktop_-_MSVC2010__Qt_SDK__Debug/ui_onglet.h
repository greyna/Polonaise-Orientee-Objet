/********************************************************************************
** Form generated from reading UI file 'onglet.ui'
**
** Created: Sat Jun 9 21:38:15 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONGLET_H
#define UI_ONGLET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Onglet
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Button0;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button7;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button3;
    QPushButton *ButtonPoint;
    QPushButton *Button6;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Buttonswap;
    QPushButton *Buttonmean;
    QPushButton *Buttonsum;
    QPushButton *Buttonclear;
    QPushButton *Buttondup;
    QPushButton *Buttondrop;
    QPushButton *Buttoncube;
    QPushButton *Buttonln;
    QPushButton *Buttoninv;
    QPushButton *Buttonsqrt;
    QPushButton *Buttonsqr;
    QPushButton *Buttonfact;
    QPushButton *Buttonplus;
    QPushButton *Buttonmoin;
    QPushButton *Buttonmultiplier;
    QPushButton *Buttondiviser;
    QPushButton *Buttonsin;
    QPushButton *Buttoncos;
    QPushButton *Buttontan;
    QPushButton *Buttonsinh;
    QPushButton *Buttoncosh;
    QPushButton *Buttontanh;
    QRadioButton *radioButtoncomplex;
    QTextBrowser *resultdisplay;
    QTextBrowser *piledisplay;
    QLabel *label;
    QPushButton *Buttonegale;
    QPushButton *Buttonpow;
    QPushButton *Buttonmod;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QRadioButton *radioButtondegree;
    QRadioButton *radioButtonradian;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 400);
        MainWindow->setMinimumSize(QSize(750, 400));
        MainWindow->setMaximumSize(QSize(1000, 400));
        MainWindow->setBaseSize(QSize(750, 400));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 790, 395));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 0, 770, 395));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Button0 = new QPushButton(gridLayoutWidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));

        gridLayout->addWidget(Button0, 6, 1, 1, 2);

        Button1 = new QPushButton(gridLayoutWidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));

        gridLayout->addWidget(Button1, 5, 1, 1, 1);

        Button2 = new QPushButton(gridLayoutWidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));

        gridLayout->addWidget(Button2, 5, 2, 1, 1);

        Button7 = new QPushButton(gridLayoutWidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));

        gridLayout->addWidget(Button7, 2, 1, 1, 1);

        Button4 = new QPushButton(gridLayoutWidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));

        gridLayout->addWidget(Button4, 4, 1, 1, 1);

        Button5 = new QPushButton(gridLayoutWidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));

        gridLayout->addWidget(Button5, 4, 2, 1, 1);

        Button3 = new QPushButton(gridLayoutWidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));

        gridLayout->addWidget(Button3, 5, 3, 1, 1);

        ButtonPoint = new QPushButton(gridLayoutWidget);
        ButtonPoint->setObjectName(QString::fromUtf8("ButtonPoint"));

        gridLayout->addWidget(ButtonPoint, 6, 3, 1, 1);

        Button6 = new QPushButton(gridLayoutWidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));

        gridLayout->addWidget(Button6, 4, 3, 1, 1);

        Button8 = new QPushButton(gridLayoutWidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));

        gridLayout->addWidget(Button8, 2, 2, 1, 1);

        Button9 = new QPushButton(gridLayoutWidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));

        gridLayout->addWidget(Button9, 2, 3, 1, 1);

        Buttonswap = new QPushButton(gridLayoutWidget);
        Buttonswap->setObjectName(QString::fromUtf8("Buttonswap"));

        gridLayout->addWidget(Buttonswap, 2, 5, 1, 1);

        Buttonmean = new QPushButton(gridLayoutWidget);
        Buttonmean->setObjectName(QString::fromUtf8("Buttonmean"));

        gridLayout->addWidget(Buttonmean, 4, 5, 1, 1);

        Buttonsum = new QPushButton(gridLayoutWidget);
        Buttonsum->setObjectName(QString::fromUtf8("Buttonsum"));

        gridLayout->addWidget(Buttonsum, 5, 5, 1, 1);

        Buttonclear = new QPushButton(gridLayoutWidget);
        Buttonclear->setObjectName(QString::fromUtf8("Buttonclear"));

        gridLayout->addWidget(Buttonclear, 6, 5, 1, 1);

        Buttondup = new QPushButton(gridLayoutWidget);
        Buttondup->setObjectName(QString::fromUtf8("Buttondup"));

        gridLayout->addWidget(Buttondup, 7, 5, 1, 1);

        Buttondrop = new QPushButton(gridLayoutWidget);
        Buttondrop->setObjectName(QString::fromUtf8("Buttondrop"));

        gridLayout->addWidget(Buttondrop, 8, 5, 1, 1);

        Buttoncube = new QPushButton(gridLayoutWidget);
        Buttoncube->setObjectName(QString::fromUtf8("Buttoncube"));

        gridLayout->addWidget(Buttoncube, 2, 6, 1, 1);

        Buttonln = new QPushButton(gridLayoutWidget);
        Buttonln->setObjectName(QString::fromUtf8("Buttonln"));

        gridLayout->addWidget(Buttonln, 4, 6, 1, 1);

        Buttoninv = new QPushButton(gridLayoutWidget);
        Buttoninv->setObjectName(QString::fromUtf8("Buttoninv"));

        gridLayout->addWidget(Buttoninv, 5, 6, 1, 1);

        Buttonsqrt = new QPushButton(gridLayoutWidget);
        Buttonsqrt->setObjectName(QString::fromUtf8("Buttonsqrt"));

        gridLayout->addWidget(Buttonsqrt, 6, 6, 1, 1);

        Buttonsqr = new QPushButton(gridLayoutWidget);
        Buttonsqr->setObjectName(QString::fromUtf8("Buttonsqr"));

        gridLayout->addWidget(Buttonsqr, 7, 6, 1, 1);

        Buttonfact = new QPushButton(gridLayoutWidget);
        Buttonfact->setObjectName(QString::fromUtf8("Buttonfact"));

        gridLayout->addWidget(Buttonfact, 8, 6, 1, 1);

        Buttonplus = new QPushButton(gridLayoutWidget);
        Buttonplus->setObjectName(QString::fromUtf8("Buttonplus"));

        gridLayout->addWidget(Buttonplus, 2, 4, 1, 1);

        Buttonmoin = new QPushButton(gridLayoutWidget);
        Buttonmoin->setObjectName(QString::fromUtf8("Buttonmoin"));

        gridLayout->addWidget(Buttonmoin, 4, 4, 1, 1);

        Buttonmultiplier = new QPushButton(gridLayoutWidget);
        Buttonmultiplier->setObjectName(QString::fromUtf8("Buttonmultiplier"));

        gridLayout->addWidget(Buttonmultiplier, 5, 4, 1, 1);

        Buttondiviser = new QPushButton(gridLayoutWidget);
        Buttondiviser->setObjectName(QString::fromUtf8("Buttondiviser"));

        gridLayout->addWidget(Buttondiviser, 6, 4, 1, 1);

        Buttonsin = new QPushButton(gridLayoutWidget);
        Buttonsin->setObjectName(QString::fromUtf8("Buttonsin"));

        gridLayout->addWidget(Buttonsin, 2, 7, 1, 1);

        Buttoncos = new QPushButton(gridLayoutWidget);
        Buttoncos->setObjectName(QString::fromUtf8("Buttoncos"));

        gridLayout->addWidget(Buttoncos, 4, 7, 1, 1);

        Buttontan = new QPushButton(gridLayoutWidget);
        Buttontan->setObjectName(QString::fromUtf8("Buttontan"));

        gridLayout->addWidget(Buttontan, 5, 7, 1, 1);

        Buttonsinh = new QPushButton(gridLayoutWidget);
        Buttonsinh->setObjectName(QString::fromUtf8("Buttonsinh"));

        gridLayout->addWidget(Buttonsinh, 6, 7, 1, 1);

        Buttoncosh = new QPushButton(gridLayoutWidget);
        Buttoncosh->setObjectName(QString::fromUtf8("Buttoncosh"));

        gridLayout->addWidget(Buttoncosh, 7, 7, 1, 1);

        Buttontanh = new QPushButton(gridLayoutWidget);
        Buttontanh->setObjectName(QString::fromUtf8("Buttontanh"));

        gridLayout->addWidget(Buttontanh, 8, 7, 1, 1);

        radioButtoncomplex = new QRadioButton(gridLayoutWidget);
        radioButtoncomplex->setObjectName(QString::fromUtf8("radioButtoncomplex"));

        gridLayout->addWidget(radioButtoncomplex, 7, 0, 1, 1);

        resultdisplay = new QTextBrowser(gridLayoutWidget);
        resultdisplay->setObjectName(QString::fromUtf8("resultdisplay"));

        gridLayout->addWidget(resultdisplay, 1, 1, 1, 6);

        piledisplay = new QTextBrowser(gridLayoutWidget);
        piledisplay->setObjectName(QString::fromUtf8("piledisplay"));

        gridLayout->addWidget(piledisplay, 0, 1, 1, 6);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        Buttonegale = new QPushButton(gridLayoutWidget);
        Buttonegale->setObjectName(QString::fromUtf8("Buttonegale"));

        gridLayout->addWidget(Buttonegale, 7, 4, 1, 1);

        Buttonpow = new QPushButton(gridLayoutWidget);
        Buttonpow->setObjectName(QString::fromUtf8("Buttonpow"));

        gridLayout->addWidget(Buttonpow, 9, 5, 1, 1);

        Buttonmod = new QPushButton(gridLayoutWidget);
        Buttonmod->setObjectName(QString::fromUtf8("Buttonmod"));

        gridLayout->addWidget(Buttonmod, 9, 6, 1, 1);

        formLayoutWidget_5 = new QWidget(centralWidget);
        formLayoutWidget_5->setObjectName(QString::fromUtf8("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(10, 330, 160, 25));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        radioButtondegree = new QRadioButton(formLayoutWidget_5);
        radioButtondegree->setObjectName(QString::fromUtf8("radioButtondegree"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, radioButtondegree);

        radioButtonradian = new QRadioButton(formLayoutWidget_5);
        radioButtonradian->setObjectName(QString::fromUtf8("radioButtonradian"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, radioButtonradian);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 4, 12));
        MainWindow->addToolBar(mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(0, 0, 3, 18));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("Onglet", "Onglet", 0, QApplication::UnicodeUTF8));
        Button0->setText(QApplication::translate("Onglet", "0", 0, QApplication::UnicodeUTF8));
        Button1->setText(QApplication::translate("Onglet", "1", 0, QApplication::UnicodeUTF8));
        Button2->setText(QApplication::translate("Onglet", "2", 0, QApplication::UnicodeUTF8));
        Button7->setText(QApplication::translate("Onglet", "7", 0, QApplication::UnicodeUTF8));
        Button4->setText(QApplication::translate("Onglet", "4", 0, QApplication::UnicodeUTF8));
        Button5->setText(QApplication::translate("Onglet", "5", 0, QApplication::UnicodeUTF8));
        Button3->setText(QApplication::translate("Onglet", "3", 0, QApplication::UnicodeUTF8));
        ButtonPoint->setText(QApplication::translate("Onglet", ",", 0, QApplication::UnicodeUTF8));
        Button6->setText(QApplication::translate("Onglet", "6", 0, QApplication::UnicodeUTF8));
        Button8->setText(QApplication::translate("Onglet", "8", 0, QApplication::UnicodeUTF8));
        Button9->setText(QApplication::translate("Onglet", "9", 0, QApplication::UnicodeUTF8));
        Buttonswap->setText(QApplication::translate("Onglet", "SWAP", 0, QApplication::UnicodeUTF8));
        Buttonmean->setText(QApplication::translate("Onglet", "MEAN", 0, QApplication::UnicodeUTF8));
        Buttonsum->setText(QApplication::translate("Onglet", "SUM", 0, QApplication::UnicodeUTF8));
        Buttonclear->setText(QApplication::translate("Onglet", "CLEAR", 0, QApplication::UnicodeUTF8));
        Buttondup->setText(QApplication::translate("Onglet", "DUP", 0, QApplication::UnicodeUTF8));
        Buttondrop->setText(QApplication::translate("Onglet", "DROP", 0, QApplication::UnicodeUTF8));
        Buttoncube->setText(QApplication::translate("Onglet", "CUBE", 0, QApplication::UnicodeUTF8));
        Buttonln->setText(QApplication::translate("Onglet", "LN", 0, QApplication::UnicodeUTF8));
        Buttoninv->setText(QApplication::translate("Onglet", "INV", 0, QApplication::UnicodeUTF8));
        Buttonsqrt->setText(QApplication::translate("Onglet", "SQRT", 0, QApplication::UnicodeUTF8));
        Buttonsqr->setText(QApplication::translate("Onglet", "SQR", 0, QApplication::UnicodeUTF8));
        Buttonfact->setText(QApplication::translate("Onglet", "!", 0, QApplication::UnicodeUTF8));
        Buttonplus->setText(QApplication::translate("Onglet", "+", 0, QApplication::UnicodeUTF8));
        Buttonmoin->setText(QApplication::translate("Onglet", "-", 0, QApplication::UnicodeUTF8));
        Buttonmultiplier->setText(QApplication::translate("Onglet", "*", 0, QApplication::UnicodeUTF8));
        Buttondiviser->setText(QApplication::translate("Onglet", "/", 0, QApplication::UnicodeUTF8));
        Buttonsin->setText(QApplication::translate("Onglet", "SIN", 0, QApplication::UnicodeUTF8));
        Buttoncos->setText(QApplication::translate("Onglet", "COS", 0, QApplication::UnicodeUTF8));
        Buttontan->setText(QApplication::translate("Onglet", "TAN", 0, QApplication::UnicodeUTF8));
        Buttonsinh->setText(QApplication::translate("Onglet", "SINH", 0, QApplication::UnicodeUTF8));
        Buttoncosh->setText(QApplication::translate("Onglet", "COSH", 0, QApplication::UnicodeUTF8));
        Buttontanh->setText(QApplication::translate("Onglet", "TANH", 0, QApplication::UnicodeUTF8));
        radioButtoncomplex->setText(QApplication::translate("Onglet", "mode complex", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Onglet", "PGMCalculator v0.1", 0, QApplication::UnicodeUTF8));
        Buttonegale->setText(QApplication::translate("Onglet", "=", 0, QApplication::UnicodeUTF8));
        Buttonpow->setText(QApplication::translate("Onglet", "POW", 0, QApplication::UnicodeUTF8));
        Buttonmod->setText(QApplication::translate("Onglet", "%", 0, QApplication::UnicodeUTF8));
        radioButtondegree->setText(QApplication::translate("Onglet", "degree", 0, QApplication::UnicodeUTF8));
        radioButtonradian->setText(QApplication::translate("Onglet", "radian", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Onglet: public Ui_Onglet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONGLET_H
