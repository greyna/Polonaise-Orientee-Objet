#include "factory.h"
#include <QRegExp>

using namespace std;
using namespace calcul;

// --------------------------------------------------------------------
// FACTORY COMPLEXE
// --------------------------------------------------------------------

Complexe<Reel>& FactoryComplexe::CreerReel(QString str) {
    if ( str != QString("") && !QRegExp( "^(\\-?\\d+(\\.\\d+)?)?(\\$\\-?\\d+(\\.\\d+)?)?$" ).exactMatch(str) )
        throw FactoryException(str + QString(" n'est pas valide à la création!"));

    double re=0, img=0;

    int index = str.indexOf("$");
    if (index>=0) {
        img = str.mid(index+1).toDouble();
        re = str.left(index).toDouble();
    }
    else
        re = str.toDouble();

    Reel _re(re);
    Reel _img(img);
    return *(new Complexe<Reel>(_re,_img));
}

Complexe<Rationnel>& FactoryComplexe::CreerRationnel(QString str) {
    if ( str == QString("") || !QRegExp( "^(\\-?\\d+(/\\d+)?)?(\\$\\-?\\d+(/\\d+)?)?$" ).exactMatch(str) )
        throw FactoryException(str + QString(" n'est pas valide à la création!"));

    int num=0, den=1, num_img=0, den_img=1;

    int index = str.indexOf(" ");
    if (index>=0)
        str = str.left(index);

    index = str.indexOf("$");
    if (index>=0) {
        QString str2(str.mid(index+1));
        str = str.left(index);

        index = str.indexOf("/");
        if (index>=0) {
            num = str.left(index).toInt();
            den = str.mid(index+1).toInt();
        }
        else
            num = str.toInt();

        index = str2.indexOf("/");
        if (index>=0) {
            num_img = str2.left(index).toInt();
            den_img = str2.mid(index+1).toInt();
        }
        else
            num_img = str2.toInt();
    }
    else {
        index = str.indexOf("/");
        if (index>=0) {
            num = str.left(index).toInt();
            den = str.mid(index+1).toInt();
        }
        else
            num = str.toInt();
    }

    if (den==0||den_img==0) {
        throw FactoryException("dénominateur à 0");
    }
    Rationnel _re(num,den);
    Rationnel _img(num_img,den_img);
    return *(new Complexe<Rationnel>(_re,_img));
}

Complexe<Entier>& FactoryComplexe::CreerEntier(QString str) {
    if ( str == QString("") || !QRegExp( "^(\\-?\\d+)?(\\$\\-?\\d+)?$" ).exactMatch(str) )
        throw FactoryException(str + QString(" n'est pas valide à la création!"));

    int re=0, img=0;

    int index = str.indexOf(" ");
    if (index>=0)
        str = str.left(index);

    index = str.indexOf("$");
    if (index>=0) {
        img = str.mid(index+1).toInt();
        re = str.left(index).toInt();
    }
    else
        re = str.toInt();

    Entier _re(re);
    Entier _img(img);
    return *(new Complexe<Entier>(_re,_img));
}

// --------------------------------------------------------------------
// FACTORY NORMAL
// --------------------------------------------------------------------
Reel& FactoryNormal::CreerReel(QString str) {
    if ( !QRegExp( "^\\-?\\d+(\\.\\d+)?$" ).exactMatch(str) )
        throw FactoryException(str + QString(" n'est pas valide à la création!"));

    double valeur=0;

    int index = str.indexOf(" ");
    if (index>=0)
        //throw FactoryException("string mal formaté");
        str = str.left(index);

    valeur = str.toDouble();

    return *(new Reel(valeur));
}

Rationnel& FactoryNormal::CreerRationnel(QString str) {
    if (!QRegExp( "^\\-?\\d+(/\\d+)?$" ).exactMatch(str) )
        throw FactoryException(str + QString(" n'est pas valide à la création!"));

    int num=0, den=1;

    int index = str.indexOf(" ");
    if (index>=0)
        str = str.left(index);

    index = str.indexOf("/");
    if (index>=0) {
        num = str.left(index).toInt();
        den = str.mid(index+1).toInt();
    }
    else
        num = str.toInt();

    if (den==0)
        throw FactoryException("erreur : dénominateur à 0");

    return *(new Rationnel(num,den));
}

Entier& FactoryNormal::CreerEntier(QString str) {
    if (!QRegExp( "^\\-?\\d+$" ).exactMatch(str) )
        throw FactoryException(str + QString(" n'est pas valide à la création!"));

    int valeur=0;

    int index = str.indexOf(" ");
    if (index>=0)
        str = str.left(index);

    valeur = str.toDouble();

    return *(new Entier(valeur));
}
