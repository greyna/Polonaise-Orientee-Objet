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
    void setMode(ModeType new_mode) { mode = new_mode; }
    void setAngle(AngleType new_angle) { angle = new_angle; }
    QString getString() const { return string_associe; }
    bool videCst() const { return pileCst.isEmpty(); }

    // Ajouter fait appel à résoudre() si l'on ajoute des opérateurs
    void ajouter(QString str);

	void swap (int x, int y);
    void sum(int x);
    void mean (int x);
	void clear ();
	void dup ();	
    void drop ();
};

}
