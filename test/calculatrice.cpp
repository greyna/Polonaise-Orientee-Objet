#include "calculatrice.h"

Calculatrice * Calculatrice:: instance=0;

Calculatrice& Calculatrice:: GetInstance(){
    if(!instance) instance = new Calculatrice(10);
    return *instance;
}

void Calculatrice:: LibereInstance() {
    if(instance!= 0) delete instance;
    instance = 0;
}

Calculatrice:: ~Calculatrice(){
    if(instance!= 0) delete instance;
}

void Calculatrice:: ouvrir(){
    tab = new QTabWidget();
    liste[nb_onglets] = new Onglet(nb_onglets, tab, 0);
    liste[nb_onglets]->show();
    nb_onglets++;
}

void Calculatrice:: newOnglet(){
    liste[nb_onglets] = new Onglet(nb_onglets, tab, 1);
    //liste[nb_onglets]->show();
    nb_onglets++;
}


void Calculatrice:: deleteOnglet(unsigned int num){
    delete liste[num];
    //liste[nb_onglets]->show();
    nb_onglets--;
}

void duplicate(Onglet* o){

}
