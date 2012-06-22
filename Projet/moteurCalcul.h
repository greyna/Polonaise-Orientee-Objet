#pragma once

#include <iostream>
#include <QString>
#include "pileCst.h"

using namespace std;

namespace calcul {

/*! \class MoteurCalcul
 * \brief Classe representant le moteur de calcul
 */
class MoteurCalcul {
private:
    PileCst pile_stockage;
	
public:
    /*!
     *  \brief Constructeur par défaut du moteur de calcul
     */
    MoteurCalcul() { }
    /*!
     *  \brief Constructeur de recopie du moteur de calcul
     *  \param a_copier : a_copier Une référence de moteur de calcul à recopier
     */
    MoteurCalcul(MoteurCalcul& a_copier) { pile_stockage = PileCst(a_copier.pile_stockage); }
    /*!
     *  \brief Ajouter dans la pile de stockage une cha?ne de caractère passée en paramètre et résoud l'expression si le dernier élément est un opérateur
     *  \param ajout : La cha?ne de caractère à ajouter dans la pile de stockage
     */
    void ajouterResoudre(QString ajout);
    /*!
     *  \brief Récupérer la pile de constantes
     *  \return La pile de stockage
     */
    const PileCst& getPile() const { return pile_stockage; }
    /*!
     *  \brief Changer le mode de calcul
     *  \param mode_type : Le nouveau mode de calcul
     */
    void changerMode(QString mode_type = "C");
    /*!
     *  \brief Changer le mode d'angle
     *  \param mode_angle : Le nouveau mode d'angle
     */
    void changerAngle (QString mode_angle = "degre");
};

}
