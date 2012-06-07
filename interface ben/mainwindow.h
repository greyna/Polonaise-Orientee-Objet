#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    Ui::MainWindow* GetUi()const;
    
public:
    Ui::MainWindow *ui;
    void Connect(QObject* c);
};

#endif // MAINWINDOW_H
