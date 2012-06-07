#ifndef PILECONSTANTES_H
#define PILECONSTANTES_H

#include <stack>
#include <string>
#include <iostream>
#include <QString>

class PileConstantes
{
    std::stack<std::string> stack;
    std::stack<std::string> backup;
public:
    PileConstantes(){}

    //fonctions de manipulation de pile
    /*Le param par defaut permet de manipuler la pile de sauvegarde si besoin*/
    PileConstantes& Push(const std::string& str, bool b = true);
    std::string Pop(bool  b =true);

    //fonctions d'état de la pile
    int Length(bool b = true);

    //fonctions de sauvegarde et de restoration de la pile
    void Save();
    void Restore();

    //fonction de debug -> affichage de la pile sur un ostream
     std::ostream &DebugDisplay(std::ostream& f = std::cout);
     QString GetStringOutput();
};

#endif // PILECONSTANTES_H
