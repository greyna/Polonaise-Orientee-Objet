/********************************************************************************
** Form generated from reading UI file 'onglet2.ui'
**
** Created: Mon Jun 11 00:00:35 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONGLET2_H
#define UI_ONGLET2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "onglet.h"

QT_BEGIN_NAMESPACE

class Ui_onglet
{
public:
    QAction *action_propos;
    QAction *actionQuiiter_ctl_Q;
    QAction *actionNouvel_onglet;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *option;
    QGroupBox *groupBox_4;
    QRadioButton *_modComplexeON;
    QRadioButton *_modComplexeOFF;
    QGroupBox *groupBox;
    QRadioButton *_modDegres;
    QRadioButton *_modRadians;
    QGroupBox *groupBox_2;
    QRadioButton *_modEntiers;
    QRadioButton *_modRationnels;
    QRadioButton *_modReels;
    QGroupBox *groupBox_3;
    QCheckBox *_clavierBasic;
    QCheckBox *_clavierAvance;
    QGridLayout *gridLayout;
    QWidget *widget_clavierBasic;
    QWidget *layoutWidget;
    QGridLayout *_clavierBasicLayout;
    QPushButton *num8;
    QPushButton *num4;
    QPushButton *num5;
    QPushButton *num9;
    QPushButton *num6;
    QPushButton *num2;
    QPushButton *num1;
    QPushButton *num3;
    QPushButton *num0;
    QPushButton *POINT;
    QPushButton *EVAL;
    QPushButton *ESPACE;
    QPushButton *ENTER;
    QPushButton *num7;
    QPushButton *C;
    QPushButton *CE;
    QPushButton *QUOTE;
    QPushButton *DOLLAR;
    QWidget *widget_clavierAvance;
    QWidget *layoutWidget1;
    QGridLayout *_clavierAvanceLayout;
    QPushButton *MOD;
    QPushButton *SQR;
    QPushButton *COSH;
    QPushButton *SINH;
    QPushButton *LN;
    QPushButton *LOG;
    QPushButton *SIN;
    QPushButton *COS;
    QPushButton *SIGN;
    QPushButton *TAN;
    QPushButton *TANH;
    QPushButton *INV;
    QPushButton *FACTORIEL;
    QPushButton *DIVISER;
    QPushButton *MULTIPLIER;
    QPushButton *SOUSTRAIRE;
    QPushButton *ADDITIONNER;
    QPushButton *SQRT;
    QPushButton *CUBE;
    QPushButton *POW;
    QLineEdit *inputLine;
    QListView *listView;

    void setupUi(Onglet *onglet)
    {
        if (onglet->objectName().isEmpty())
            onglet->setObjectName(QString::fromUtf8("onglet"));
        onglet->resize(958, 723);
        action_propos = new QAction(onglet);
        action_propos->setObjectName(QString::fromUtf8("action_propos"));
        actionQuiiter_ctl_Q = new QAction(onglet);
        actionQuiiter_ctl_Q->setObjectName(QString::fromUtf8("actionQuiiter_ctl_Q"));
        actionNouvel_onglet = new QAction(onglet);
        actionNouvel_onglet->setObjectName(QString::fromUtf8("actionNouvel_onglet"));
        centralWidget = new QWidget(onglet);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(0, 0, 1071, 661));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        option = new QVBoxLayout();
        option->setSpacing(6);
        option->setObjectName(QString::fromUtf8("option"));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        _modComplexeON = new QRadioButton(groupBox_4);
        _modComplexeON->setObjectName(QString::fromUtf8("_modComplexeON"));
        _modComplexeON->setGeometry(QRect(10, 20, 143, 20));
        _modComplexeON->setChecked(true);
        _modComplexeOFF = new QRadioButton(groupBox_4);
        _modComplexeOFF->setObjectName(QString::fromUtf8("_modComplexeOFF"));
        _modComplexeOFF->setGeometry(QRect(10, 40, 143, 20));

        option->addWidget(groupBox_4);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        _modDegres = new QRadioButton(groupBox);
        _modDegres->setObjectName(QString::fromUtf8("_modDegres"));
        _modDegres->setGeometry(QRect(0, 10, 161, 20));
        _modDegres->setChecked(true);
        _modRadians = new QRadioButton(groupBox);
        _modRadians->setObjectName(QString::fromUtf8("_modRadians"));
        _modRadians->setGeometry(QRect(0, 30, 161, 20));

        option->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
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

        option->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        _clavierBasic = new QCheckBox(groupBox_3);
        _clavierBasic->setObjectName(QString::fromUtf8("_clavierBasic"));
        _clavierBasic->setGeometry(QRect(10, 20, 143, 20));
        _clavierBasic->setChecked(true);
        _clavierAvance = new QCheckBox(groupBox_3);
        _clavierAvance->setObjectName(QString::fromUtf8("_clavierAvance"));
        _clavierAvance->setGeometry(QRect(10, 40, 143, 20));
        _clavierAvance->setChecked(true);

        option->addWidget(groupBox_3);


        horizontalLayout->addLayout(option);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_clavierBasic = new QWidget(centralWidget);
        widget_clavierBasic->setObjectName(QString::fromUtf8("widget_clavierBasic"));
        layoutWidget = new QWidget(widget_clavierBasic);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 791, 191));
        _clavierBasicLayout = new QGridLayout(layoutWidget);
        _clavierBasicLayout->setSpacing(6);
        _clavierBasicLayout->setContentsMargins(11, 11, 11, 11);
        _clavierBasicLayout->setObjectName(QString::fromUtf8("_clavierBasicLayout"));
        _clavierBasicLayout->setContentsMargins(0, 0, 0, 0);
        num8 = new QPushButton(layoutWidget);
        num8->setObjectName(QString::fromUtf8("num8"));

        _clavierBasicLayout->addWidget(num8, 1, 1, 1, 1);

        num4 = new QPushButton(layoutWidget);
        num4->setObjectName(QString::fromUtf8("num4"));

        _clavierBasicLayout->addWidget(num4, 2, 0, 1, 1);

        num5 = new QPushButton(layoutWidget);
        num5->setObjectName(QString::fromUtf8("num5"));

        _clavierBasicLayout->addWidget(num5, 2, 1, 1, 1);

        num9 = new QPushButton(layoutWidget);
        num9->setObjectName(QString::fromUtf8("num9"));

        _clavierBasicLayout->addWidget(num9, 1, 2, 1, 1);

        num6 = new QPushButton(layoutWidget);
        num6->setObjectName(QString::fromUtf8("num6"));

        _clavierBasicLayout->addWidget(num6, 2, 2, 1, 1);

        num2 = new QPushButton(layoutWidget);
        num2->setObjectName(QString::fromUtf8("num2"));

        _clavierBasicLayout->addWidget(num2, 3, 1, 1, 1);

        num1 = new QPushButton(layoutWidget);
        num1->setObjectName(QString::fromUtf8("num1"));

        _clavierBasicLayout->addWidget(num1, 3, 0, 1, 1);

        num3 = new QPushButton(layoutWidget);
        num3->setObjectName(QString::fromUtf8("num3"));

        _clavierBasicLayout->addWidget(num3, 3, 2, 1, 1);

        num0 = new QPushButton(layoutWidget);
        num0->setObjectName(QString::fromUtf8("num0"));

        _clavierBasicLayout->addWidget(num0, 4, 0, 1, 1);

        POINT = new QPushButton(layoutWidget);
        POINT->setObjectName(QString::fromUtf8("POINT"));

        _clavierBasicLayout->addWidget(POINT, 4, 1, 1, 1);

        EVAL = new QPushButton(layoutWidget);
        EVAL->setObjectName(QString::fromUtf8("EVAL"));

        _clavierBasicLayout->addWidget(EVAL, 5, 1, 1, 1);

        ESPACE = new QPushButton(layoutWidget);
        ESPACE->setObjectName(QString::fromUtf8("ESPACE"));

        _clavierBasicLayout->addWidget(ESPACE, 4, 2, 1, 1);

        ENTER = new QPushButton(layoutWidget);
        ENTER->setObjectName(QString::fromUtf8("ENTER"));

        _clavierBasicLayout->addWidget(ENTER, 5, 0, 1, 1);

        num7 = new QPushButton(layoutWidget);
        num7->setObjectName(QString::fromUtf8("num7"));

        _clavierBasicLayout->addWidget(num7, 1, 0, 1, 1);

        C = new QPushButton(layoutWidget);
        C->setObjectName(QString::fromUtf8("C"));

        _clavierBasicLayout->addWidget(C, 6, 1, 1, 1);

        CE = new QPushButton(layoutWidget);
        CE->setObjectName(QString::fromUtf8("CE"));

        _clavierBasicLayout->addWidget(CE, 6, 2, 1, 1);

        QUOTE = new QPushButton(layoutWidget);
        QUOTE->setObjectName(QString::fromUtf8("QUOTE"));

        _clavierBasicLayout->addWidget(QUOTE, 6, 0, 1, 1);

        DOLLAR = new QPushButton(layoutWidget);
        DOLLAR->setObjectName(QString::fromUtf8("DOLLAR"));

        _clavierBasicLayout->addWidget(DOLLAR, 5, 2, 1, 1);


        gridLayout->addWidget(widget_clavierBasic, 4, 0, 1, 1);

        widget_clavierAvance = new QWidget(centralWidget);
        widget_clavierAvance->setObjectName(QString::fromUtf8("widget_clavierAvance"));
        layoutWidget1 = new QWidget(widget_clavierAvance);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 787, 202));
        _clavierAvanceLayout = new QGridLayout(layoutWidget1);
        _clavierAvanceLayout->setSpacing(6);
        _clavierAvanceLayout->setContentsMargins(11, 11, 11, 11);
        _clavierAvanceLayout->setObjectName(QString::fromUtf8("_clavierAvanceLayout"));
        _clavierAvanceLayout->setContentsMargins(0, 0, 0, 0);
        MOD = new QPushButton(layoutWidget1);
        MOD->setObjectName(QString::fromUtf8("MOD"));

        _clavierAvanceLayout->addWidget(MOD, 1, 0, 1, 1);

        SQR = new QPushButton(layoutWidget1);
        SQR->setObjectName(QString::fromUtf8("SQR"));

        _clavierAvanceLayout->addWidget(SQR, 1, 4, 1, 1);

        COSH = new QPushButton(layoutWidget1);
        COSH->setObjectName(QString::fromUtf8("COSH"));

        _clavierAvanceLayout->addWidget(COSH, 1, 2, 1, 1);

        SINH = new QPushButton(layoutWidget1);
        SINH->setObjectName(QString::fromUtf8("SINH"));

        _clavierAvanceLayout->addWidget(SINH, 0, 2, 1, 1);

        LN = new QPushButton(layoutWidget1);
        LN->setObjectName(QString::fromUtf8("LN"));

        _clavierAvanceLayout->addWidget(LN, 0, 3, 1, 1);

        LOG = new QPushButton(layoutWidget1);
        LOG->setObjectName(QString::fromUtf8("LOG"));

        _clavierAvanceLayout->addWidget(LOG, 1, 3, 1, 1);

        SIN = new QPushButton(layoutWidget1);
        SIN->setObjectName(QString::fromUtf8("SIN"));

        _clavierAvanceLayout->addWidget(SIN, 0, 1, 1, 1);

        COS = new QPushButton(layoutWidget1);
        COS->setObjectName(QString::fromUtf8("COS"));

        _clavierAvanceLayout->addWidget(COS, 1, 1, 1, 1);

        SIGN = new QPushButton(layoutWidget1);
        SIGN->setObjectName(QString::fromUtf8("SIGN"));

        _clavierAvanceLayout->addWidget(SIGN, 2, 0, 1, 1);

        TAN = new QPushButton(layoutWidget1);
        TAN->setObjectName(QString::fromUtf8("TAN"));

        _clavierAvanceLayout->addWidget(TAN, 2, 1, 1, 1);

        TANH = new QPushButton(layoutWidget1);
        TANH->setObjectName(QString::fromUtf8("TANH"));

        _clavierAvanceLayout->addWidget(TANH, 2, 2, 1, 1);

        INV = new QPushButton(layoutWidget1);
        INV->setObjectName(QString::fromUtf8("INV"));

        _clavierAvanceLayout->addWidget(INV, 2, 3, 1, 1);

        FACTORIEL = new QPushButton(layoutWidget1);
        FACTORIEL->setObjectName(QString::fromUtf8("FACTORIEL"));

        _clavierAvanceLayout->addWidget(FACTORIEL, 4, 0, 1, 1);

        DIVISER = new QPushButton(layoutWidget1);
        DIVISER->setObjectName(QString::fromUtf8("DIVISER"));

        _clavierAvanceLayout->addWidget(DIVISER, 4, 2, 1, 1);

        MULTIPLIER = new QPushButton(layoutWidget1);
        MULTIPLIER->setObjectName(QString::fromUtf8("MULTIPLIER"));

        _clavierAvanceLayout->addWidget(MULTIPLIER, 4, 1, 1, 1);

        SOUSTRAIRE = new QPushButton(layoutWidget1);
        SOUSTRAIRE->setObjectName(QString::fromUtf8("SOUSTRAIRE"));

        _clavierAvanceLayout->addWidget(SOUSTRAIRE, 4, 3, 1, 1);

        ADDITIONNER = new QPushButton(layoutWidget1);
        ADDITIONNER->setObjectName(QString::fromUtf8("ADDITIONNER"));

        _clavierAvanceLayout->addWidget(ADDITIONNER, 4, 4, 1, 1);

        SQRT = new QPushButton(layoutWidget1);
        SQRT->setObjectName(QString::fromUtf8("SQRT"));
        SQRT->setAutoExclusive(false);
        SQRT->setAutoDefault(false);
        SQRT->setDefault(false);
        SQRT->setFlat(false);

        _clavierAvanceLayout->addWidget(SQRT, 0, 4, 1, 1);

        CUBE = new QPushButton(layoutWidget1);
        CUBE->setObjectName(QString::fromUtf8("CUBE"));

        _clavierAvanceLayout->addWidget(CUBE, 2, 4, 1, 1);

        POW = new QPushButton(layoutWidget1);
        POW->setObjectName(QString::fromUtf8("POW"));

        _clavierAvanceLayout->addWidget(POW, 0, 0, 1, 1);


        gridLayout->addWidget(widget_clavierAvance, 3, 0, 1, 1);

        inputLine = new QLineEdit(centralWidget);
        inputLine->setObjectName(QString::fromUtf8("inputLine"));
        inputLine->setEnabled(false);

        gridLayout->addWidget(inputLine, 2, 0, 1, 1);

        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);

        gridLayout->addWidget(listView, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(onglet);
        QObject::connect(_clavierAvance, SIGNAL(clicked(bool)), widget_clavierBasic, SLOT(setShown(bool)));
        QObject::connect(_clavierBasic, SIGNAL(clicked(bool)), widget_clavierAvance, SLOT(setShown(bool)));

        QMetaObject::connectSlotsByName(onglet);
    } // setupUi

    void retranslateUi(Onglet *onglet)
    {
        onglet->setWindowTitle(QApplication::translate("onglet", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_propos->setText(QApplication::translate("onglet", "\303\200 propos", 0, QApplication::UnicodeUTF8));
        actionQuiiter_ctl_Q->setText(QApplication::translate("onglet", "quiiter", 0, QApplication::UnicodeUTF8));
        actionQuiiter_ctl_Q->setShortcut(QApplication::translate("onglet", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionNouvel_onglet->setText(QApplication::translate("onglet", "nouvel onglet", 0, QApplication::UnicodeUTF8));
        actionNouvel_onglet->setShortcut(QApplication::translate("onglet", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("onglet", "Mode complexe", 0, QApplication::UnicodeUTF8));
        _modComplexeON->setText(QApplication::translate("onglet", "Activ\303\251s", 0, QApplication::UnicodeUTF8));
        _modComplexeOFF->setText(QApplication::translate("onglet", "D\303\251sactiv\303\251s", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("onglet", "Unit\303\251 de mesure", 0, QApplication::UnicodeUTF8));
        _modDegres->setText(QApplication::translate("onglet", "Degr\303\251s", 0, QApplication::UnicodeUTF8));
        _modRadians->setText(QApplication::translate("onglet", "Radians", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("onglet", "Type des constantes", 0, QApplication::UnicodeUTF8));
        _modEntiers->setText(QApplication::translate("onglet", "Enti\303\250res", 0, QApplication::UnicodeUTF8));
        _modRationnels->setText(QApplication::translate("onglet", "Rationnelles", 0, QApplication::UnicodeUTF8));
        _modReels->setText(QApplication::translate("onglet", "R\303\251elles", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("onglet", "Affichage claviers", 0, QApplication::UnicodeUTF8));
        _clavierBasic->setText(QApplication::translate("onglet", "&Basic", 0, QApplication::UnicodeUTF8));
        _clavierAvance->setText(QApplication::translate("onglet", "&Avanc\303\251", 0, QApplication::UnicodeUTF8));
        num8->setText(QApplication::translate("onglet", "8", 0, QApplication::UnicodeUTF8));
        num8->setShortcut(QApplication::translate("onglet", "8", 0, QApplication::UnicodeUTF8));
        num4->setText(QApplication::translate("onglet", "4", 0, QApplication::UnicodeUTF8));
        num4->setShortcut(QApplication::translate("onglet", "4", 0, QApplication::UnicodeUTF8));
        num5->setText(QApplication::translate("onglet", "5", 0, QApplication::UnicodeUTF8));
        num5->setShortcut(QApplication::translate("onglet", "5", 0, QApplication::UnicodeUTF8));
        num9->setText(QApplication::translate("onglet", "9", 0, QApplication::UnicodeUTF8));
        num9->setShortcut(QApplication::translate("onglet", "9", 0, QApplication::UnicodeUTF8));
        num6->setText(QApplication::translate("onglet", "6", 0, QApplication::UnicodeUTF8));
        num6->setShortcut(QApplication::translate("onglet", "6", 0, QApplication::UnicodeUTF8));
        num2->setText(QApplication::translate("onglet", "2", 0, QApplication::UnicodeUTF8));
        num2->setShortcut(QApplication::translate("onglet", "2", 0, QApplication::UnicodeUTF8));
        num1->setText(QApplication::translate("onglet", "1", 0, QApplication::UnicodeUTF8));
        num1->setShortcut(QApplication::translate("onglet", "1", 0, QApplication::UnicodeUTF8));
        num3->setText(QApplication::translate("onglet", "3", 0, QApplication::UnicodeUTF8));
        num3->setShortcut(QApplication::translate("onglet", "3", 0, QApplication::UnicodeUTF8));
        num0->setText(QApplication::translate("onglet", "0", 0, QApplication::UnicodeUTF8));
        num0->setShortcut(QApplication::translate("onglet", "0", 0, QApplication::UnicodeUTF8));
        POINT->setText(QApplication::translate("onglet", ".", 0, QApplication::UnicodeUTF8));
        POINT->setShortcut(QApplication::translate("onglet", ".", 0, QApplication::UnicodeUTF8));
        EVAL->setText(QApplication::translate("onglet", "EVAL", 0, QApplication::UnicodeUTF8));
        ESPACE->setText(QApplication::translate("onglet", "_", 0, QApplication::UnicodeUTF8));
        ESPACE->setShortcut(QApplication::translate("onglet", "Space", 0, QApplication::UnicodeUTF8));
        ENTER->setText(QApplication::translate("onglet", "ENTRER", 0, QApplication::UnicodeUTF8));
        ENTER->setShortcut(QApplication::translate("onglet", "Enter", 0, QApplication::UnicodeUTF8));
        num7->setText(QApplication::translate("onglet", "7", 0, QApplication::UnicodeUTF8));
        num7->setShortcut(QApplication::translate("onglet", "7", 0, QApplication::UnicodeUTF8));
        C->setText(QApplication::translate("onglet", "C", 0, QApplication::UnicodeUTF8));
        CE->setText(QApplication::translate("onglet", "CE", 0, QApplication::UnicodeUTF8));
        QUOTE->setText(QApplication::translate("onglet", "'", 0, QApplication::UnicodeUTF8));
        QUOTE->setShortcut(QApplication::translate("onglet", "'", 0, QApplication::UnicodeUTF8));
        DOLLAR->setText(QApplication::translate("onglet", "$", 0, QApplication::UnicodeUTF8));
        MOD->setText(QApplication::translate("onglet", "MOD", 0, QApplication::UnicodeUTF8));
        SQR->setText(QApplication::translate("onglet", "SQR", 0, QApplication::UnicodeUTF8));
        COSH->setText(QApplication::translate("onglet", "COSH", 0, QApplication::UnicodeUTF8));
        SINH->setText(QApplication::translate("onglet", "SINH", 0, QApplication::UnicodeUTF8));
        LN->setText(QApplication::translate("onglet", "LN", 0, QApplication::UnicodeUTF8));
        LOG->setText(QApplication::translate("onglet", "LOG", 0, QApplication::UnicodeUTF8));
        SIN->setText(QApplication::translate("onglet", "SIN", 0, QApplication::UnicodeUTF8));
        COS->setText(QApplication::translate("onglet", "COS", 0, QApplication::UnicodeUTF8));
        SIGN->setText(QApplication::translate("onglet", "SIGN", 0, QApplication::UnicodeUTF8));
        TAN->setText(QApplication::translate("onglet", "TAN", 0, QApplication::UnicodeUTF8));
        TANH->setText(QApplication::translate("onglet", "TANH", 0, QApplication::UnicodeUTF8));
        INV->setText(QApplication::translate("onglet", "INV", 0, QApplication::UnicodeUTF8));
        FACTORIEL->setText(QApplication::translate("onglet", "!", 0, QApplication::UnicodeUTF8));
        FACTORIEL->setShortcut(QApplication::translate("onglet", "!", 0, QApplication::UnicodeUTF8));
        DIVISER->setText(QApplication::translate("onglet", "/", 0, QApplication::UnicodeUTF8));
        DIVISER->setShortcut(QApplication::translate("onglet", "/", 0, QApplication::UnicodeUTF8));
        MULTIPLIER->setText(QApplication::translate("onglet", "*", 0, QApplication::UnicodeUTF8));
        MULTIPLIER->setShortcut(QApplication::translate("onglet", "*", 0, QApplication::UnicodeUTF8));
        SOUSTRAIRE->setText(QApplication::translate("onglet", "-", 0, QApplication::UnicodeUTF8));
        SOUSTRAIRE->setShortcut(QApplication::translate("onglet", "-", 0, QApplication::UnicodeUTF8));
        ADDITIONNER->setText(QApplication::translate("onglet", "+", 0, QApplication::UnicodeUTF8));
        ADDITIONNER->setShortcut(QApplication::translate("onglet", "+", 0, QApplication::UnicodeUTF8));
        SQRT->setText(QApplication::translate("onglet", "SQRT", 0, QApplication::UnicodeUTF8));
        CUBE->setText(QApplication::translate("onglet", "CUBE", 0, QApplication::UnicodeUTF8));
        POW->setText(QApplication::translate("onglet", "POW", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class onglet: public Ui_onglet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONGLET2_H