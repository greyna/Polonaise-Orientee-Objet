#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

Ui::MainWindow* MainWindow::GetUi()const{
    return ui;
}

void MainWindow::Connect(QObject* c){

    QObject::connect(ui->Button0,SIGNAL(clicked()),c,SLOT(debugInput0()));
    QObject::connect(ui->Button1,SIGNAL(clicked()),c,SLOT(debugInput1()));
    QObject::connect(ui->Button2,SIGNAL(clicked()),c,SLOT(debugInput2()));
    QObject::connect(ui->Button3,SIGNAL(clicked()),c,SLOT(debugInput3()));
    QObject::connect(ui->Button4,SIGNAL(clicked()),c,SLOT(debugInput4()));
    QObject::connect(ui->Button5,SIGNAL(clicked()),c,SLOT(debugInput5()));
    QObject::connect(ui->Button6,SIGNAL(clicked()),c,SLOT(debugInput6()));
    QObject::connect(ui->Button7,SIGNAL(clicked()),c,SLOT(debugInput7()));
    QObject::connect(ui->Button8,SIGNAL(clicked()),c,SLOT(debugInput8()));
    QObject::connect(ui->Button9,SIGNAL(clicked()),c,SLOT(debugInput9()));
    QObject::connect(ui->ButtonPoint,SIGNAL(clicked()),c,SLOT(debugInputPoint()));

    QObject::connect(ui->Buttonplus,SIGNAL(clicked()),c,SLOT(debugInputPlus()));
    QObject::connect(ui->Buttonmoin,SIGNAL(clicked()),c,SLOT(debugInputMoins()));
    QObject::connect(ui->Buttonmultiplier,SIGNAL(clicked()),c,SLOT(debugInputMultiplier()));
    QObject::connect(ui->Buttondiviser,SIGNAL(clicked()),c,SLOT(debugInputDiviser()));
    QObject::connect(ui->Buttoncos,SIGNAL(clicked()),c,SLOT(debugInputCos()));
    QObject::connect(ui->Buttonsin,SIGNAL(clicked()),c,SLOT(debugInputSin()));
    QObject::connect(ui->Buttontan,SIGNAL(clicked()),c,SLOT(debugInputTan()));
    QObject::connect(ui->Buttoncosh,SIGNAL(clicked()),c,SLOT(debugInputCosh()));
    QObject::connect(ui->Buttonsinh,SIGNAL(clicked()),c,SLOT(debugInputSinh()));
    QObject::connect(ui->Buttontanh,SIGNAL(clicked()),c,SLOT(debugInputTanh()));
    QObject::connect(ui->Buttonfact,SIGNAL(clicked()),c,SLOT(debugInputFact()));
    QObject::connect(ui->Buttoninv,SIGNAL(clicked()),c,SLOT(debugInputInv()));



    QObject::connect(ui->Buttonsum,SIGNAL(clicked()),c,SLOT(debugInputSum()));
    QObject::connect(ui->Buttonmean,SIGNAL(clicked()),c,SLOT(debugInputMean()));
    QObject::connect(ui->Buttondrop,SIGNAL(clicked()),c,SLOT(debugInputDrop()));
    QObject::connect(ui->Buttondup,SIGNAL(clicked()),c,SLOT(debugInputDup()));
    QObject::connect(ui->Buttonswap,SIGNAL(clicked()),c,SLOT(debugInputSwap()));
    QObject::connect(ui->Buttonclear,SIGNAL(clicked()),c,SLOT(debugInputClear()));
    QObject::connect(ui->Buttoncube,SIGNAL(clicked()),c,SLOT(debugInputCube()));
    QObject::connect(ui->Buttonpow,SIGNAL(clicked()),c,SLOT(debugInputPow()));
    QObject::connect(ui->Buttonmod,SIGNAL(clicked()),c,SLOT(debugInputMod()));



    QObject::connect(ui->radioButtoncomplex,SIGNAL(clicked()),c,SLOT(debugInputComplex()));
    QObject::connect(ui->radioButtondegree,SIGNAL(clicked()),c,SLOT(debugInputDegree()));
    QObject::connect(ui->radioButtonradian,SIGNAL(clicked()),c,SLOT(debugInputRadian()));


    QObject::connect(c,SIGNAL(Output(QString)),ui->piledisplay,SLOT(setText(QString)));
}
