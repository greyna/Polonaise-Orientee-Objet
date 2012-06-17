#ifndef CALCULATRICE_H
#define CALCULATRICE_H
#include "onglet.h"
//Design patter Singleton
namespace calcul {

class Calculatrice{
    public:
        static Calculatrice& GetInstance();
        static void LibereInstance();
        void ouvrir();
    private:
        Calculatrice(unsigned int n=10): nb_onglets(0), nb_max(n), liste(new Onglet* [n]){}
        ~Calculatrice();
        Onglet ** liste;	//liste des onglets
        unsigned int nb_onglets;
        unsigned int nb_max;
        static Calculatrice* instance;
    public slots:
        void newOnglet();
        void duplicate(Onglet* o);
};

}
#endif // CALCULATRICE_H