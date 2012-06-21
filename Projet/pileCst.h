#pragma once

#include <QStack>
#include <QString>
#include "expression.h"

namespace calcul {

/*! \class PileCst
 * \brief Classe representant la pile de constantes
 */
class PileCst {
protected:
    QString string_associe;
    QStack<Cst*> pileCst;
	
    ModeType mode;
    AngleType angle;
    void setString();
    void resoudre(QString operateur);

    void pushCst(Cst&);
    void createPushCst(QString str);
    void popCst();
    Cst& topCst();
	
public:
    /*!
     *  \brief Constructeur par défaut de la pile de constantes
     */
    PileCst(): mode(C), angle(Degre) { }
    /*!
     *  \brief Constructeur de recopie de la pile de constantes
     *  \param a_copier : Une référence de pile de constantes à recopier
     */
    PileCst(PileCst& a_copier) {
        mode = a_copier.mode;
        angle = a_copier.angle;

        for (int i=0; i < a_copier.getPile().size(); ++i) {
            if (a_copier.getPile()[i]->isNumber())
                createPushCst(a_copier.getPile()[i]->getString());
            else {
                Cst& exp = *(new Expression(""));
                exp = *a_copier.getPile()[i];
                pushCst(exp);
            }
        }
    }
    /*!
     *  \brief Destructeur de la pile de constantes
     */
    ~PileCst() {
        clear();
    }
    /*!
     *  \brief Configurer le mode de calcul de la pile
     *  \param new_mode : Le nouveau mode de calcul
     */
    void setMode(ModeType new_mode) { mode = new_mode; clear(); }
    /*!
     *  \brief Configurer le mode d'angle de la pile
     *  \param new_angle : Le nouveau mode d'angle
     */
    void setAngle(AngleType new_angle) { angle = new_angle; }
    /*!
     *  \brief Récupérer la chaîne de caractères associée à la pile
     *  \return La chaîne de caractères associée
     */
    QString getString() const { return string_associe; }
    /*!
     *  \brief Récupérer la pile de constantes
     *  \return La pile de constantes
     */
    const QStack<Cst*>& getPile() const { return pileCst; }
    /*!
     *  \brief Vérifier si la pile est vide
     *  \return True si la pile est vide
     */
    bool videCst() const { return pileCst.isEmpty(); }

    /*!
     *  \brief Ajouter une chaîne de caractères à la pile, fait appel a resoudre() si l'on ajoute des operateurs
     *  \param str : La chaîne de caractères à ajouter dans la pile
     */
    void ajouter(QString str);
    /*!
     *  \brief Switcher le Xème et le Yème élément de la pile
     *  \param x : Le numéro du Xème élément
     *  \param y : Le numéro du Yème élément
     */
	void swap (int x, int y);
    /*!
     *  \brief Faire la somme des X derniers éléments de la pile
     *  \param x : Le nombre d'éléments
     */
    void sum(int x);
    /*!
     *  \brief Faire la moyenne des X derniers éléments de la pile
     *  \param x : Le nombre d'éléments
     */
    void mean (int x);
    /*!
     *  \brief Vider la pile
     */
    void clear ();
    /*!
     *  \brief Dupliquer la pile
     */
    void dup ();
    /*!
     *  \brief Supprimer le dernier élément de la pile
     */
    void drop ();
};

}
