#ifndef ONGLET_H
#define ONGLET_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class Onglet : public QMainWindow
{
    Q_OBJECT

public:
    explicit Onglet(QWidget *parent = 0);
    
private:
    Ui::MainWindow *ui;

signals:
    
private slots:
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

#endif // ONGLET_H



