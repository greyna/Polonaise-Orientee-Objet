#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->Button0,SIGNAL(clicked()),this,SLOT(num0Pressed()));
    connect(ui->Button1,SIGNAL(clicked()),this,SLOT(num1Pressed()));
    connect(ui->Button2,SIGNAL(clicked()),this,SLOT(num2Pressed()));
    connect(ui->Button3,SIGNAL(clicked()),this,SLOT(num3Pressed()));
    connect(ui->Button4,SIGNAL(clicked()),this,SLOT(num4Pressed()));
    connect(ui->Button5,SIGNAL(clicked()),this,SLOT(num5Pressed()));
    connect(ui->Button6,SIGNAL(clicked()),this,SLOT(num6Pressed()));
    connect(ui->Button7,SIGNAL(clicked()),this,SLOT(num7Pressed()));
    connect(ui->Button8,SIGNAL(clicked()),this,SLOT(num8Pressed()));
    connect(ui->Button9,SIGNAL(clicked()),this,SLOT(num9Pressed()));
    connect(ui->Buttonegale,SIGNAL(clicked()),this,SLOT(enterPressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::num0Pressed(){
    ui->resultdisplay->setPlainText(ui->resultdisplay->toPlainText()+"0");
}

void MainWindow::num1Pressed(){
    ui->resultdisplay->setPlainText(ui->resultdisplay->toPlainText()+"1");
}

void MainWindow::num2Pressed(){
    ui->resultdisplay->setPlainText(ui->resultdisplay->toPlainText()+"2");
}

void MainWindow::num3Pressed(){
    ui->resultdisplay->setPlainText(ui->resultdisplay->toPlainText()+"3");
}

void MainWindow::num4Pressed(){
    ui->resultdisplay->setPlainText(ui->resultdisplay->toPlainText()+"4");
}

void MainWindow::num5Pressed(){
    ui->resultdisplay->setPlainText(ui->resultdisplay->toPlainText()+"5");
}

void MainWindow::num6Pressed(){
    ui->resultdisplay->setPlainText(ui->resultdisplay->toPlainText()+"6");
}

void MainWindow::num7Pressed(){
    ui->resultdisplay->setPlainText(ui->resultdisplay->toPlainText()+"7");
}

void MainWindow::num8Pressed(){
    ui->resultdisplay->setPlainText(ui->resultdisplay->toPlainText()+"8");
}

void MainWindow::num9Pressed(){
    ui->resultdisplay->setPlainText(ui->resultdisplay->toPlainText()+"9");
}

void MainWindow::enterPressed(){

}
