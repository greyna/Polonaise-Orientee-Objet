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
    liste[nb_onglets] = new Onglet(nb_onglets, tab, true);
    liste[nb_onglets]->show();
    nb_onglets++;
}

void Calculatrice:: newOnglet(){
    if(nb_onglets < nb_max) {
        liste[nb_onglets] = new Onglet(nb_onglets, tab, false);
        nb_onglets++;
    } else {
        Onglet ** new_liste = new Onglet* [nb_max+10];
        for(unsigned int i = 0; i < nb_max; i++) {
            new_liste[i] = liste[i];
        }
        nb_max = nb_max + 10;
        delete[] liste;
        liste = new_liste;
    }
}

void Calculatrice:: deleteOnglet(unsigned int num){
    delete liste[num];
    nb_onglets--;
}

void Calculatrice::duplicate(Onglet* o){
    liste[nb_onglets] = new Onglet(nb_onglets, tab, o);
    nb_onglets++;
}
