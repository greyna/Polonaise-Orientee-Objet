/********************************************************************************
** Form generated from reading UI file 'onglet.ui'
**
** Created: Thu Jun 14 22:40:26 2012
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
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
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
    QTextBrowser *piledisplay;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button0;
    QPushButton *Buttonvirgule;
    QPushButton *Buttonswap;
    QPushButton *Buttonmean;
    QPushButton *Buttonln;
    QPushButton *Buttonsinh;
    QPushButton *Buttonsin;
    QPushButton *Buttoncosh;
    QPushButton *Buttontanh;
    QPushButton *Buttontan;
    QPushButton *Buttoncos;
    QPushButton *Buttonmod;
    QPushButton *Buttonxy;
    QPushButton *Buttonx2;
    QPushButton *Buttonx3;
    QPushButton *Buttonsum;
    QPushButton *Buttondollar;
    QTextBrowser *resultdisplay;
    QPushButton *Buttonsign;
    QPushButton *Buttonplus;
    QPushButton *Buttonmoins;
    QPushButton *Buttonfois;
    QPushButton *Buttondiviser;
    QPushButton *Buttoneval;
    QPushButton *Buttoninv;
    QPushButton *Buttonsqrt;
    QPushButton *Buttonegale;
    QPushButton *Buttondup;
    QPushButton *Buttondrop;
    QPushButton *Buttonclear;
    QPushButton *Buttonlog;
    QPushButton *Buttonfact;
    QLabel *label;
    QRadioButton *radioButtonradian;
    QRadioButton *radioButtondegree;
    QGroupBox *groupBox_2;
    QRadioButton *_modEntiers;
    QRadioButton *_modRationnels;
    QRadioButton *_modReels;
    QGroupBox *groupBox_3;
    QCheckBox *_clavierBasic;
    QCheckBox *_clavierAvance;
    QGroupBox *groupBox_4;
    QRadioButton *_modComplexeON;
    QRadioButton *_modComplexeOFF;
    QLabel *label_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(866, 402);
        Widget->setMinimumSize(QSize(750, 400));
        Widget->setBaseSize(QSize(750, 400));
        centralWidget = new QWidget(Widget);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(10, 10, 851, 551));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(140, 20, 701, 351));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        piledisplay = new QTextBrowser(gridLayoutWidget);
        piledisplay->setObjectName(QString::fromUtf8("piledisplay"));

        gridLayout->addWidget(piledisplay, 0, 1, 1, 6);

        Button7 = new QPushButton(gridLayoutWidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));

        gridLayout->addWidget(Button7, 6, 4, 1, 1);

        Button8 = new QPushButton(gridLayoutWidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));

        gridLayout->addWidget(Button8, 6, 5, 1, 1);

        Button9 = new QPushButton(gridLayoutWidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));

        gridLayout->addWidget(Button9, 6, 6, 1, 1);

        Button4 = new QPushButton(gridLayoutWidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));

        gridLayout->addWidget(Button4, 7, 4, 1, 1);

        Button5 = new QPushButton(gridLayoutWidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));

        gridLayout->addWidget(Button5, 7, 5, 1, 1);

        Button6 = new QPushButton(gridLayoutWidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));

        gridLayout->addWidget(Button6, 7, 6, 1, 1);

        Button1 = new QPushButton(gridLayoutWidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));

        gridLayout->addWidget(Button1, 8, 4, 1, 1);

        Button2 = new QPushButton(gridLayoutWidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));

        gridLayout->addWidget(Button2, 8, 5, 1, 1);

        Button3 = new QPushButton(gridLayoutWidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));

        gridLayout->addWidget(Button3, 8, 6, 1, 1);

        Button0 = new QPushButton(gridLayoutWidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));

        gridLayout->addWidget(Button0, 10, 4, 1, 2);

        Buttonvirgule = new QPushButton(gridLayoutWidget);
        Buttonvirgule->setObjectName(QString::fromUtf8("Buttonvirgule"));

        gridLayout->addWidget(Buttonvirgule, 10, 6, 1, 1);

        Buttonswap = new QPushButton(gridLayoutWidget);
        Buttonswap->setObjectName(QString::fromUtf8("Buttonswap"));

        gridLayout->addWidget(Buttonswap, 5, 0, 1, 1);

        Buttonmean = new QPushButton(gridLayoutWidget);
        Buttonmean->setObjectName(QString::fromUtf8("Buttonmean"));

        gridLayout->addWidget(Buttonmean, 5, 1, 1, 1);

        Buttonln = new QPushButton(gridLayoutWidget);
        Buttonln->setObjectName(QString::fromUtf8("Buttonln"));

        gridLayout->addWidget(Buttonln, 6, 1, 1, 1);

        Buttonsinh = new QPushButton(gridLayoutWidget);
        Buttonsinh->setObjectName(QString::fromUtf8("Buttonsinh"));

        gridLayout->addWidget(Buttonsinh, 7, 0, 1, 1);

        Buttonsin = new QPushButton(gridLayoutWidget);
        Buttonsin->setObjectName(QString::fromUtf8("Buttonsin"));

        gridLayout->addWidget(Buttonsin, 7, 1, 1, 1);

        Buttoncosh = new QPushButton(gridLayoutWidget);
        Buttoncosh->setObjectName(QString::fromUtf8("Buttoncosh"));

        gridLayout->addWidget(Buttoncosh, 8, 0, 1, 1);

        Buttontanh = new QPushButton(gridLayoutWidget);
        Buttontanh->setObjectName(QString::fromUtf8("Buttontanh"));

        gridLayout->addWidget(Buttontanh, 10, 0, 1, 1);

        Buttontan = new QPushButton(gridLayoutWidget);
        Buttontan->setObjectName(QString::fromUtf8("Buttontan"));

        gridLayout->addWidget(Buttontan, 10, 1, 1, 1);

        Buttoncos = new QPushButton(gridLayoutWidget);
        Buttoncos->setObjectName(QString::fromUtf8("Buttoncos"));

        gridLayout->addWidget(Buttoncos, 8, 1, 1, 1);

        Buttonmod = new QPushButton(gridLayoutWidget);
        Buttonmod->setObjectName(QString::fromUtf8("Buttonmod"));

        gridLayout->addWidget(Buttonmod, 5, 6, 1, 1);

        Buttonxy = new QPushButton(gridLayoutWidget);
        Buttonxy->setObjectName(QString::fromUtf8("Buttonxy"));

        gridLayout->addWidget(Buttonxy, 6, 2, 1, 1);

        Buttonx2 = new QPushButton(gridLayoutWidget);
        Buttonx2->setObjectName(QString::fromUtf8("Buttonx2"));

        gridLayout->addWidget(Buttonx2, 7, 2, 1, 1);

        Buttonx3 = new QPushButton(gridLayoutWidget);
        Buttonx3->setObjectName(QString::fromUtf8("Buttonx3"));

        gridLayout->addWidget(Buttonx3, 8, 2, 1, 1);

        Buttonsum = new QPushButton(gridLayoutWidget);
        Buttonsum->setObjectName(QString::fromUtf8("Buttonsum"));

        gridLayout->addWidget(Buttonsum, 5, 2, 1, 1);

        Buttondollar = new QPushButton(gridLayoutWidget);
        Buttondollar->setObjectName(QString::fromUtf8("Buttondollar"));

        gridLayout->addWidget(Buttondollar, 5, 5, 1, 1);

        resultdisplay = new QTextBrowser(gridLayoutWidget);
        resultdisplay->setObjectName(QString::fromUtf8("resultdisplay"));

        gridLayout->addWidget(resultdisplay, 0, 8, 1, 1);

        Buttonsign = new QPushButton(gridLayoutWidget);
        Buttonsign->setObjectName(QString::fromUtf8("Buttonsign"));

        gridLayout->addWidget(Buttonsign, 6, 8, 1, 1);

        Buttonplus = new QPushButton(gridLayoutWidget);
        Buttonplus->setObjectName(QString::fromUtf8("Buttonplus"));

        gridLayout->addWidget(Buttonplus, 5, 7, 1, 1);

        Buttonmoins = new QPushButton(gridLayoutWidget);
        Buttonmoins->setObjectName(QString::fromUtf8("Buttonmoins"));

        gridLayout->addWidget(Buttonmoins, 6, 7, 1, 1);

        Buttonfois = new QPushButton(gridLayoutWidget);
        Buttonfois->setObjectName(QString::fromUtf8("Buttonfois"));

        gridLayout->addWidget(Buttonfois, 7, 7, 1, 1);

        Buttondiviser = new QPushButton(gridLayoutWidget);
        Buttondiviser->setObjectName(QString::fromUtf8("Buttondiviser"));

        gridLayout->addWidget(Buttondiviser, 8, 7, 1, 1);

        Buttoneval = new QPushButton(gridLayoutWidget);
        Buttoneval->setObjectName(QString::fromUtf8("Buttoneval"));

        gridLayout->addWidget(Buttoneval, 10, 7, 1, 1);

        Buttoninv = new QPushButton(gridLayoutWidget);
        Buttoninv->setObjectName(QString::fromUtf8("Buttoninv"));

        gridLayout->addWidget(Buttoninv, 7, 8, 1, 1);

        Buttonsqrt = new QPushButton(gridLayoutWidget);
        Buttonsqrt->setObjectName(QString::fromUtf8("Buttonsqrt"));

        gridLayout->addWidget(Buttonsqrt, 5, 8, 1, 1);

        Buttonegale = new QPushButton(gridLayoutWidget);
        Buttonegale->setObjectName(QString::fromUtf8("Buttonegale"));

        gridLayout->addWidget(Buttonegale, 10, 8, 1, 1);

        Buttondup = new QPushButton(gridLayoutWidget);
        Buttondup->setObjectName(QString::fromUtf8("Buttondup"));

        gridLayout->addWidget(Buttondup, 1, 4, 1, 1);

        Buttondrop = new QPushButton(gridLayoutWidget);
        Buttondrop->setObjectName(QString::fromUtf8("Buttondrop"));

        gridLayout->addWidget(Buttondrop, 1, 5, 1, 1);

        Buttonclear = new QPushButton(gridLayoutWidget);
        Buttonclear->setObjectName(QString::fromUtf8("Buttonclear"));

        gridLayout->addWidget(Buttonclear, 1, 6, 1, 1);

        Buttonlog = new QPushButton(gridLayoutWidget);
        Buttonlog->setObjectName(QString::fromUtf8("Buttonlog"));

        gridLayout->addWidget(Buttonlog, 6, 0, 1, 1);

        Buttonfact = new QPushButton(gridLayoutWidget);
        Buttonfact->setObjectName(QString::fromUtf8("Buttonfact"));

        gridLayout->addWidget(Buttonfact, 10, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        radioButtonradian = new QRadioButton(gridLayoutWidget);
        radioButtonradian->setObjectName(QString::fromUtf8("radioButtonradian"));

        gridLayout->addWidget(radioButtonradian, 1, 1, 1, 1);

        radioButtondegree = new QRadioButton(gridLayoutWidget);
        radioButtondegree->setObjectName(QString::fromUtf8("radioButtondegree"));

        gridLayout->addWidget(radioButtondegree, 1, 2, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 110, 111, 91));
        groupBox_2->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        _modEntiers = new QRadioButton(groupBox_2);
        _modEntiers->setObjectName(QString::fromUtf8("_modEntiers"));
        _modEntiers->setGeometry(QRect(0, 20, 143, 20));
        _modEntiers->setChecked(true);
        _modRationnels = new QRadioButton(groupBox_2);
        _modRationnels->setObjectName(QString::fromUtf8("_modRationnels"));
        _modRationnels->setGeometry(QRect(0, 40, 143, 20));
        _modReels = new QRadioButton(groupBox_2);
        _modReels->setObjectName(QString::fromUtf8("_modReels"));
        _modReels->setGeometry(QRect(0, 60, 143, 20));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 210, 118, 160));
        _clavierBasic = new QCheckBox(groupBox_3);
        _clavierBasic->setObjectName(QString::fromUtf8("_clavierBasic"));
        _clavierBasic->setGeometry(QRect(10, 20, 143, 20));
        _clavierBasic->setChecked(true);
        _clavierAvance = new QCheckBox(groupBox_3);
        _clavierAvance->setObjectName(QString::fromUtf8("_clavierAvance"));
        _clavierAvance->setGeometry(QRect(10, 40, 143, 20));
        _clavierAvance->setChecked(true);
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 30, 111, 71));
        _modComplexeON = new QRadioButton(groupBox_4);
        _modComplexeON->setObjectName(QString::fromUtf8("_modComplexeON"));
        _modComplexeON->setGeometry(QRect(10, 20, 143, 20));
        _modComplexeON->setChecked(true);
        _modComplexeOFF = new QRadioButton(groupBox_4);
        _modComplexeOFF->setObjectName(QString::fromUtf8("_modComplexeOFF"));
        _modComplexeOFF->setGeometry(QRect(10, 40, 143, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(760, 0, 46, 13));
        mainToolBar = new QToolBar(Widget);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setGeometry(QRect(0, 0, 4, 12));
        statusBar = new QStatusBar(Widget);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(0, 0, 3, 18));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Onglet", "Onglet", 0, QApplication::UnicodeUTF8));
        Button7->setText(QApplication::translate("Onglet", "7", 0, QApplication::UnicodeUTF8));
        Button8->setText(QApplication::translate("Onglet", "8", 0, QApplication::UnicodeUTF8));
        Button9->setText(QApplication::translate("Onglet", "9", 0, QApplication::UnicodeUTF8));
        Button4->setText(QApplication::translate("Onglet", "4", 0, QApplication::UnicodeUTF8));
        Button5->setText(QApplication::translate("Onglet", "5", 0, QApplication::UnicodeUTF8));
        Button6->setText(QApplication::translate("Onglet", "6", 0, QApplication::UnicodeUTF8));
        Button1->setText(QApplication::translate("Onglet", "1", 0, QApplication::UnicodeUTF8));
        Button2->setText(QApplication::translate("Onglet", "2", 0, QApplication::UnicodeUTF8));
        Button3->setText(QApplication::translate("Onglet", "3", 0, QApplication::UnicodeUTF8));
        Button0->setText(QApplication::translate("Onglet", "0", 0, QApplication::UnicodeUTF8));
        Buttonvirgule->setText(QApplication::translate("Onglet", ",", 0, QApplication::UnicodeUTF8));
        Buttonswap->setText(QApplication::translate("Onglet", "SWAP", 0, QApplication::UnicodeUTF8));
        Buttonmean->setText(QApplication::translate("Onglet", "MEAN", 0, QApplication::UnicodeUTF8));
        Buttonln->setText(QApplication::translate("Onglet", "LN", 0, QApplication::UnicodeUTF8));
        Buttonsinh->setText(QApplication::translate("Onglet", "SINH", 0, QApplication::UnicodeUTF8));
        Buttonsin->setText(QApplication::translate("Onglet", "SIN", 0, QApplication::UnicodeUTF8));
        Buttoncosh->setText(QApplication::translate("Onglet", "COSH", 0, QApplication::UnicodeUTF8));
        Buttontanh->setText(QApplication::translate("Onglet", "TANH", 0, QApplication::UnicodeUTF8));
        Buttontan->setText(QApplication::translate("Onglet", "TAN", 0, QApplication::UnicodeUTF8));
        Buttoncos->setText(QApplication::translate("Onglet", "COS", 0, QApplication::UnicodeUTF8));
        Buttonmod->setText(QApplication::translate("Onglet", "MOD", 0, QApplication::UnicodeUTF8));
        Buttonxy->setText(QApplication::translate("Onglet", "x^y", 0, QApplication::UnicodeUTF8));
        Buttonx2->setText(QApplication::translate("Onglet", "x^2", 0, QApplication::UnicodeUTF8));
        Buttonx3->setText(QApplication::translate("Onglet", "x^3", 0, QApplication::UnicodeUTF8));
        Buttonsum->setText(QApplication::translate("Onglet", "SUM", 0, QApplication::UnicodeUTF8));
        Buttondollar->setText(QApplication::translate("Onglet", "$", 0, QApplication::UnicodeUTF8));
        Buttonsign->setText(QApplication::translate("Onglet", "\302\261", 0, QApplication::UnicodeUTF8));
        Buttonplus->setText(QApplication::translate("Onglet", "+", 0, QApplication::UnicodeUTF8));
        Buttonmoins->setText(QApplication::translate("Onglet", "-", 0, QApplication::UnicodeUTF8));
        Buttonfois->setText(QApplication::translate("Onglet", "*", 0, QApplication::UnicodeUTF8));
        Buttondiviser->setText(QApplication::translate("Onglet", "/", 0, QApplication::UnicodeUTF8));
        Buttoneval->setText(QApplication::translate("Onglet", "EVAL", 0, QApplication::UnicodeUTF8));
        Buttoninv->setText(QApplication::translate("Onglet", "INV", 0, QApplication::UnicodeUTF8));
        Buttonsqrt->setText(QApplication::translate("Onglet", "\342\210\232", 0, QApplication::UnicodeUTF8));
        Buttonegale->setText(QApplication::translate("Onglet", "=", 0, QApplication::UnicodeUTF8));
        Buttondup->setText(QApplication::translate("Onglet", "DUP", 0, QApplication::UnicodeUTF8));
        Buttondrop->setText(QApplication::translate("Onglet", "DROP", 0, QApplication::UnicodeUTF8));
        Buttonclear->setText(QApplication::translate("Onglet", "CLEAR", 0, QApplication::UnicodeUTF8));
        Buttonlog->setText(QApplication::translate("Onglet", "LOG", 0, QApplication::UnicodeUTF8));
        Buttonfact->setText(QApplication::translate("Onglet", "!", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Onglet", "PGMCalculator v0.1", 0, QApplication::UnicodeUTF8));
        radioButtonradian->setText(QApplication::translate("Onglet", "Radian", 0, QApplication::UnicodeUTF8));
        radioButtondegree->setText(QApplication::translate("Onglet", "Degr\303\251", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Onglet", "Type des constantes", 0, QApplication::UnicodeUTF8));
        _modEntiers->setText(QApplication::translate("Onglet", "Enti\303\250res", 0, QApplication::UnicodeUTF8));
        _modRationnels->setText(QApplication::translate("Onglet", "Rationnelles", 0, QApplication::UnicodeUTF8));
        _modReels->setText(QApplication::translate("Onglet", "R\303\251elles", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Onglet", "Affichage claviers", 0, QApplication::UnicodeUTF8));
        _clavierBasic->setText(QApplication::translate("Onglet", "&Basic", 0, QApplication::UnicodeUTF8));
        _clavierAvance->setText(QApplication::translate("Onglet", "&Avanc\303\251", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("Onglet", "Mode complexe", 0, QApplication::UnicodeUTF8));
        _modComplexeON->setText(QApplication::translate("Onglet", "Activ\303\251s", 0, QApplication::UnicodeUTF8));
        _modComplexeOFF->setText(QApplication::translate("Onglet", "D\303\251sactiv\303\251s", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Onglet", "Pile", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Onglet: public Ui_Onglet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONGLET_H
