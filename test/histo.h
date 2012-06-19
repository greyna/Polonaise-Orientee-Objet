#ifndef HISTO_H
#define HISTO_H
#include <QString>
#include "moteurCalcul.h"
#include <QFile>
using namespace std;

namespace calcul {

class Histo{
private:
    QString mode;
    PileCst copie;
    QFile file;
    int num;
public:
    Histo(int num) : num(num), file("Pile" + QString::number(num) + ".txt") {}
    bool enregistre(QString modeCalcul, QStack<QString> pile_affichage);
    bool recuperer();
    void annuler();
    void retablir();
};

}

#endif // HISTO_H
