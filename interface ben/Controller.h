#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>
#include "Pileconstantes.h"
#include "PileOperator.h"
#include "Common.h"
#include "Configuration.h"
#include <QtGui/QApplication>
#include "mainwindow.h"

class Controller: public QWidget{
    Q_OBJECT

    PileConstantes pileArray[10];//UTILISER COLLECTION STL /*on définit à 10 le nombre d'onglets max*/
    PileOperator* pileOperator;
    PileConstantes* currentPile;
    Configuration* currentConf;
    MainWindow w;


public:
    Controller();
    ~Controller();
    void Reset();
     PileConstantes* GetCurrentPile(){return pileArray;} /*Passer en const*/
    void Input(const std::string& str);

public slots:
    void debugInput0(){Input("0");}
    void debugInput1(){Input("1");}
    void debugInput2(){Input("2");}
    void debugInput3(){Input("3");}
    void debugInput4(){Input("4");}
    void debugInput5(){Input("5");}
    void debugInput6(){Input("6");}
    void debugInput7(){Input("7");}
    void debugInput8(){Input("8");}
    void debugInput9(){Input("9");}
    void debugInputPoint(){Input(".");}

    void debugInputPlus(){Input("+");}
    void debugInputFact(){Input("!");}
    void debugInputMoins(){Input("-");}
    void debugInputDiviser(){Input("/");}
    void debugInputMultiplier(){Input("*");}
    void debugInputCos(){Input("COS");}
    void debugInputSin(){Input("SIN");}
    void debugInputTan(){Input("TAN");}
    void debugInputCosh(){Input("COSH");}
    void debugInputSinh(){Input("SINH");}
    void debugInputTanh(){Input("TANH");}
    void debugInputCube(){Input("CUBE");}
    void debugInputInv(){Input("INV");}
    void debugInputPow(){Input("POW");}
    void debugInputMod(){Input("%");}
    void debugInputSum(){Input("SUM");}
    void debugInputMean(){Input("MEAN");}
    void debugInputDup(){Input("DUP");}
    void debugInputDrop(){Input("DROP");}
    void debugInputSwap(){Input("SWAP");}
    void debugInputComplex(){Input("CLEAR");}
    void debugInputDregree(){Input("CLEAR");}
    void debugInputRadian(){Input("CLEAR");}

signals:
    void Output(QString);
};



#endif // CONTROLLER_H
