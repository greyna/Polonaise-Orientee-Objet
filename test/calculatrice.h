#ifndef CALCULATRICE_H
#define CALCULATRICE_H
#include "onglet.h"
#include <QObject>
#include <QFile>
//Design patter Singleton
namespace calcul {

class Calculatrice{
    public:
        static Calculatrice& GetInstance();
        static void LibereInstance();
        void ouvrir();
        QTabWidget* getTab(){return tab;}
    private:
        Calculatrice(unsigned int n=10): nb_onglets(0), nb_max(n), liste(new Onglet* [n]){}
        ~Calculatrice();
        Onglet ** liste;	//liste des onglets
        QTabWidget *tab;
        unsigned int nb_onglets;
        unsigned int nb_max;
        static Calculatrice* instance;
    public slots:
        void newOnglet();
        void deleteOnglet(unsigned int num);
        void duplicate(Onglet* o);
};

}
#endif // CALCULATRICE_H
