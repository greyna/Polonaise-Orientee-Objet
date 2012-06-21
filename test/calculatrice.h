#ifndef CALCULATRICE_H
#define CALCULATRICE_H
#include "onglet.h"
#include "ui_onglet.h"
#include <QObject>
#include <QFile>


/*! \class Calculatrice
 * \brief Classe implémentée en singleton representant la calculatrice
 */
class Calculatrice{
    public:
        /*!
         *  \brief Récupérer l'instance de la calculatrice
         */
        static Calculatrice& GetInstance();
        /*!
         *  \brief Libérer l'instance de la calculatrice
         */
        static void LibereInstance();
        /*!
         *  \brief Ouvrir la calculatrice
         */
        void ouvrir();
        /*!
         *  \brief Methode qui retourne le QTabWidget qui contient
         *  les onglets
         *  \return Pointeur sur le QTabWidget
         */
        QTabWidget* getTab(){return tab;}
    private:
        /*!
         *  \brief Constructeur de la classe Calculatrice
         *  \param n : Nombre maximum d'onglets
         */
        Calculatrice(unsigned int n=10): nb_onglets(0), nb_max(n), liste(new Onglet* [n]){}
        /*!
         *  \brief Destructeur
         *  Destructeur de la classe Calculatrice
         */
        ~Calculatrice();
        Onglet ** liste;	// Liste des onglets
        QTabWidget *tab;    // Un QTabWidget pour contenir les onglets
        unsigned int nb_onglets;    // Nombre d'onglets actuels
        unsigned int nb_max;        // Nombre maximm d'onglets
        static Calculatrice* instance;
    public slots:
        /*!
         *  \brief Créer un nouvel onglet
         */
        void newOnglet();
        /*!
         *  \brief Supprimer un onglet dont le numéro est passé en paramètre
         *  \param num : Numéro de l'onglet à supprimer
         */
        void deleteOnglet(unsigned int num);
        /*!
         *  \brief Dupliquer un onglet passé en paramètre
         *  \param o : L'onglet à dupliquer
         */
        void duplicate(Onglet* o);
};

#endif // CALCULATRICE_H
