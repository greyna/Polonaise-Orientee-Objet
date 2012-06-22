#ifndef ONGLET_H
#define ONGLET_H
#include <QTabWidget>
#include <QWidget>
#include <QtGui>
#include "ui_onglet.h"
#include "moteurCalcul.h"
using namespace Ui;
using namespace calcul;

/*! \class Onglet
 * \brief Classe representant l'onglet qui hérite d'un QWidget
 */
class Onglet:public QWidget{
    Q_OBJECT

public:
    /*!
     *  \brief Constructeur par défaut de la classe Onglet
     *  \param num : Numéro de l'onglet
     *  \param tab : Pointeur du QTabWidget de la calculatrice pour stocker l'onglet
     *  \param init : true pour le premier onglet, false pour tout le reste
     */
    Onglet(unsigned int num, QTabWidget *tab, bool init);
    /*!
     *  \brief Constructeur de recopie de la classe Onglet
     *  \param num : Numéro de l'onglet
     *  \param tab : Pointeur du QTabWidget de la calculatrice pour stocker l'onglet
     *  \param o : Pointeur de l'onglet à dupliquer
     */
    Onglet(unsigned int num, QTabWidget *tab, Onglet* o);
    /*!
     *  \brief Destructeur de la classe Calculatrice
     */
    ~Onglet(){}
    /*!
     *  \brief Retourner le moteur de calcul de l'onglet
     *  \return Le moteur de calcul
     */
    MoteurCalcul getMot() {return moteur;}

    /*! \class evenement
     * \brief Classe interne pour traiter les évenements
     */
    class evenement {
    public:
        /*!
         *  \brief Réagir selon l'action de l'utilisateur
         *  \param typeTraitement : Type d'action
         *  \param ong : Pointeur sur l'onglet actuel
         *  \param sender : Le composant concerné
         */
        void traitement(QString typeTraitement, Onglet* ong, QObject *sender = 0);
        /// Méthode qui désactive les boutons non-accessible aux réels
        void opNonReels(Onglet* ong);
        /// Méthode qui désactive les boutons non-accessible aux complexes
        void opNonComplexes(Onglet* ong);
         /// Méthode qui désactive les boutons non-accessible aux rationnels
        void opNonRationels(Onglet* ong);
        /// Méthode qui affiche ou cache le clavier basic
        void clavierBasicVisible(bool visible, Onglet* ong);
        /// Méthode qui affiche ou cache le clavier avancé
        void clavierAvanceVisible(bool visible, Onglet* ong);
    };

private:
    Ui_Widget ui;   // UI de l'onglet
    MoteurCalcul moteur;    // Le moteur de calcul
    QStack<QString> pile_affichage; // Le pile d'affichage
    QString modeCalcul;    // Le mode de calcul actuel
    unsigned int numOnglet; // Le numéro de l'onglet
    void connects();    // Méthode qui réalise toutes les connections de slots aux signaux

public slots:
    /*!
     *  \brief Change le mode de calcul et active
     * les boutons correspondants quand l'utilisateur
     * change de type de constantes, active ou déactive
     * le mode complexe
     */
    void traitementMode();
    /// Change le mode d'angle
    void traitementAngle();
    /// Agir selon le bouton appuyé
    void traitementBoutons();
    /// Afficher ou cacher les clavier
    void traitementClavier();
    /// Créer un nouvel onglet vide quand CTRL+N appuyé
    void newOnglet();
    /// Supprimer l'onglet actuel quand CTRL+W appuyé
    void deleteOnglet();
    /// Dupliquer l'onglet actuel quand CTRL+T appuyé
    void dupOnglet();
};
#endif
