#ifndef COMMON_H
#define COMMON_H

#include <map>
#include <string>
#include <iostream>


/*Ensemble de classe nécessaire à l'ensemble du projet:
    map opérateur->valeur
    map type -> valeur
*/

class CommonTools{

public:
    enum Operators{SIN=1,COS,TAN,SINH,COSH,TANH,LN,LOG,INV,SQRT,SQR,CUBE, PLUS, MINUS, TIMES, DIV, MOD, POW, FACT, EVAL, SIGN, SWAP, SUM, MEAN, CLEAR, DUP, DROP};
    enum ConstantType {Z=1,Q,R,C,E};


    ConstantType TypeGuess(std::string value1, std::string value2 ="");
    void InitOperatorsMap(std::map<std::string, CommonTools::Operators> *map);
    std::map<std::string, Operators>GetMap();
};

#endif // COMMON_H
