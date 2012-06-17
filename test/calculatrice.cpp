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
    liste[nb_onglets] = new Onglet(nb_onglets);
    liste[nb_onglets]->show();
    nb_onglets++;
}

void Calculatrice:: newOnglet(){

}
