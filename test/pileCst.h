#pragma once

#include <QStack>
#include <QString>
#include "expression.h"

namespace calcul {

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
    PileCst(): mode(C), angle(Degre) { }
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
    ~PileCst() {
        clear();
    }

    void setMode(ModeType new_mode) { mode = new_mode; clear(); }
    void setAngle(AngleType new_angle) { angle = new_angle; }
    QString getString() const { return string_associe; }
    const QStack<Cst*>& getPile() const { return pileCst; }
    bool videCst() const { return pileCst.isEmpty(); }

    // Ajouter fait appel a resoudre() si l'on ajoute des operateurs
    void ajouter(QString str);

	void swap (int x, int y);
    void sum(int x);
    void mean (int x);
	void clear ();
	void dup ();	
    void drop ();
};

}
