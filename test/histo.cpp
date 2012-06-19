#include "histo.h"
#include <QRegExp>
#include <QFile>
#include <QTextStream>
using namespace calcul;

bool Histo::enregistre(QString modeCalcul, QStack<QString> pile_affichage){
    if(!file.open(QFile::WriteOnly|QFile::Truncate))
        return false;
    QTextStream s(&file);
    s<<num<<" ";
    s<<modeCalcul<<" ";
    for(int i = 0;i < pile_affichage.size();i++){
        s<<pile_affichage[i];
    }
    s<<endl;
    file.close();
    return true;
}

bool Histo::recuperer(){
    return true;
}

void Histo::annuler(){

}

void Histo::retablir(){

}

