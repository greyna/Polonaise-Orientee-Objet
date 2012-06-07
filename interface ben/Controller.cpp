#include "Controller.h"
#include <QMainWindow>

Controller::Controller(){
    /*constructeur par défaut du controleur
        -création de l'interface graphique
        -création du set de piles
        -restauration de l'état sauvegardé
        -chargement de la configuration
    */
    currentPile = pileArray; //initialiser avec la conf
    pileOperator = new PileOperator(currentPile);

    //MainWindow w;
    w.show();

   // Ui::MainWindow *ui = w.ui;
    w.Connect(this);


}

Controller::~Controller(){
    /*Destruction de l'interface
      sauvegarde des réglages
       sauvegarde de la pile
    */
    delete pileOperator;
}

void Controller::Reset(){
    /*Effacement des piles, des sauvegardes et de la configuration*/
}

void Controller::Input(const std::string& str){
    std::map<std::string,CommonTools::Operators> map = CommonTools().GetMap();
    if(map[str])
        pileOperator->Operate(str);
    else
        pileArray[0].Push(str);

    emit Output(currentPile->GetStringOutput());
    std::cout<<"EMISSIONdebugXXX"<<currentPile->GetStringOutput().toStdString()<<std::endl;
}
