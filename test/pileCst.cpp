#include "pileCst.h"
#include <QStringList>

using namespace std;
using namespace calcul;


// --------------------------------------------------------------------
// METHODES
// --------------------------------------------------------------------
void PileCst::resoudre(QString operateur) {
try {
    // Test d'autorisation des operations
    if( (mode==C || mode==CQ || mode==CZ) &&
            QRegExp( "^(\\b(!|MOD|POW|SIN|COS|TAN|SINH|COSH|TANH|SQRT|INV|LN|LOG|FACT)\\b)$" )
            .exactMatch(operateur) )
        throw OperationException(operateur + " non disponible en complexe.");

    if( (mode==C || mode==Q) &&
            QRegExp( "^(!|(\\b(MOD|FACT)\\b))$" )
            .exactMatch(operateur) )
        throw OperationException(operateur + " non disponible en reel ou rationnel.");

    if (operateur=="EVAL" && topCst().isNumber())
        throw OperationException(operateur + " non disponible sur un nombre.");

    // Operation EVAL
    else if (operateur=="EVAL") {

        if (videCst())
            throw OperationException("Pile vide!");
        Cst& operande = topCst();
        popCst();
        ajouter(operande.getString());
        delete &operande;
        return;
    }

    // Operation binaire
    if ( QRegExp("^([+\\-\\*/]|\\b(SWAP|POW|MOD)\\b)$")
          .exactMatch(operateur) ) {

        if (videCst())
            throw OperationException("Pile vide!");
        Cst* operande11 = &topCst();
        popCst();
        if (videCst())
            throw OperationException("Operation binaire sur un seul element!");
        Cst* operande22 = &topCst();
        popCst();

        if (!operande22->isNumber()) {
            Cst* temp = operande22;
            operande22 = operande11;
            operande11 = temp;
        }
        Cst& operande1 = *operande11;
        Cst& operande2 = *operande22;

        if (operateur=="+") { pushCst(operande1+operande2); }
        else if (operateur=="-") { pushCst(operande1-operande2); }
        else if (operateur=="*") { pushCst(operande1*operande2); }
        else if (operateur=="/") { pushCst(operande1/operande2); }
        else if (operateur=="MOD") { pushCst(operande1.MOD(operande2)); }
        else if (operateur=="POW") { pushCst(operande1.POW(operande2)); }
        // Operateur de pile a revoir : echange seulement le premier et le dernier element
        else if (operateur=="SWAP") { swap(Entier(operande1).getNum(), Entier(operande2).getNum()); }

        delete &operande1;
        delete &operande2;
        return;
    }

    // Operation unaire
    if ( QRegExp("^(!|\\b(SUM|MEAN|FACT|SIN|COS|TAN|SINH|COSH|TANH|SQRT|INV|LN|LOG|SQR|SQRT|CUBE)\\b)$")
          .exactMatch(operateur) ) {

        if (videCst())
            throw OperationException("Pile vide!");
        Cst& operande = topCst();
        popCst();

        if (operateur=="SIN") { pushCst(operande.SIN(angle)); }
        else if (operateur=="COS") { pushCst(operande.COS(angle)); }
        else if (operateur=="SINH") { pushCst(operande.SINH()); }
        else if (operateur=="TAN") { pushCst(operande.TAN(angle)); }
        else if (operateur=="COSH") { pushCst(operande.COSH()); }
        else if (operateur=="TANH") { pushCst(operande.TANH()); }
        else if (operateur=="LN") { pushCst(operande.LN()); }
        else if (operateur=="LOG") { pushCst(operande.LOG()); }
        else if (operateur=="INV") { pushCst(operande.INV()); }
        else if (operateur=="SQRT") { pushCst(operande.SQRT()); }
        else if (operateur=="SQR") { pushCst(operande.SQR()); }
        else if (operateur=="CUBE") { pushCst(operande.CUBE()); }
        else if (operateur=="FACT") { pushCst(operande.FACT()); }
        else if (operateur=="SIGN") { pushCst(operande.SIGN()); }

        // Operateur de pile a revoir, font la somme et la moyenne de tous les elements pour le moment
        else if (operateur=="SUM") { sum(Entier(operande).getNum()); }
        else if (operateur=="MEAN") { mean(Entier(operande).getNum()); }

        delete &operande;
        return;
    }

    // Operation sans argument (sur la pile)
    if ( QRegExp("^(\\b(DUP|DROP|CLEAR)\\b)$")
          .exactMatch(operateur) ) {
        if (operateur=="DUP") { dup(); }
        else if (operateur=="DROP") { drop(); }
        else if (operateur=="CLEAR") { clear(); }
        return;
    }
}
catch (OperationException exc) {
    exc.sendMessage().sendLog();
}
catch (FactoryException exc) {
    exc.sendMessage().sendLog();
}
}

void PileCst::ajouter(QString str) {

    QStringList listeExpression = str.split("'", QString::SkipEmptyParts);
    for (int i=0; i < listeExpression.size(); ++i) {
        if ((i%2)==0) {
            QStringList listeNombre = listeExpression.at(i).split(" ", QString::SkipEmptyParts);
            for (int j=0; j < listeNombre.size(); ++j) {
                QString str2 = listeNombre.at(j);
                if(QRegExp( "^([+\\-\\*/!]|\\b(MOD|POW|SIN|COS|TAN|SINH|COSH|TANH|SQR|CUBE|SQRT|SIGN|INV|LN|LOG|FACT|EVAL|SWAP|SUM|MEAN|DUP|DROP|CLEAR)\\b)$" )
                        .exactMatch(str2)) {
                    resoudre(str2);
                }
                else createPushCst(str2);
            }
        }
        else {
            QString str2 = listeExpression.at(i);
            Expression& cstExpression = *(new Expression(str2));
            pushCst(cstExpression);
        }
    }
}


void PileCst::setString() {
    QString temp(" ");
    for (int i=0; i < pileCst.size(); ++i)
        temp = temp + " " + pileCst[i]->getString();
    //temp = temp + "  (sommet a droite)";
    string_associe = temp;
}
void PileCst::pushCst(Cst& nouveau) { pileCst.push(&nouveau); setString(); }
void PileCst::createPushCst(QString str) {
    try {
        if (mode==C)
            pushCst(FactoryComplexe().CreerReel(str));
        else if (mode==CQ)
            pushCst(FactoryComplexe().CreerRationnel(str));
        else if (mode==CZ)
            pushCst(FactoryComplexe().CreerEntier(str));
        else if (mode==R)
            pushCst(FactoryNormal().CreerReel(str));
        else if (mode==Q)
            pushCst(FactoryNormal().CreerRationnel(str));
        else if (mode==Z)
            pushCst(FactoryNormal().CreerEntier(str));
    }
    catch (FactoryException exc) {
        exc.sendMessage().sendLog();
    }
}

void PileCst::popCst() { pileCst.pop(); setString(); }
Cst& PileCst::topCst() { return *(pileCst.top()); }

void PileCst::swap (int x, int y) {
    try {
        if (x<0 || y<0 || x>=pileCst.size() || y>=pileCst.size())
            throw OperationException("Indice de swap incorrects");

        Cst* pt_temp = pileCst[x];
        pileCst.replace(x,pileCst[y]);
        pileCst.replace(y, pt_temp);

        setString();
    }
    catch (OperationException exc) {
        exc.sendMessage().sendLog();
    }
}
void PileCst::sum (int x) {
    try {
        if (x<=0 || x>pileCst.size())
            throw OperationException("Nombre d'elements de sum incorrects");

        Cst* resultat = &topCst();
        popCst();
        // Fuite memoire ici, mais impossible de savoir comment la gerer...
        for (int i = 1; i<x; ++i) {
            Cst* temp = &(*resultat + topCst());
            //cout<<"resultat = "<<resultat->getString().toStdString()<<"  ; topCst() = "<<topCst().getString().toStdString()<<"  ; temp = "<<temp->getString().toStdString()<<endl;
            resultat = temp;
            delete &topCst();
            popCst();
        }
        pushCst(*resultat);

        setString();
    }
    catch (OperationException exc) {
        exc.sendMessage().sendLog();
    }
}
void PileCst::mean (int x) {
    try {
        if (x<=0 || x>pileCst.size())
            throw OperationException("Nombre d'elements de mean incorrects");

        sum(x);
        Cst& somme = topCst();
        popCst();
        ajouter(QString::number(x));
        Cst& nb_elt = topCst();
        popCst();
        pushCst(somme / nb_elt);
        delete &somme;
        delete &nb_elt;

        setString();
    }
    catch (OperationException exc) {
        exc.sendMessage().sendLog();
    }
}
void PileCst::clear () {
    while (!videCst()) {
        delete &topCst();
        popCst();
    }
    setString();
}
void PileCst::dup () {
    try {
        if (videCst())
            throw OperationException("Dup sur pile vide");

        ajouter(topCst().getString());

        setString();
    }
    catch (OperationException exc) {
        exc.sendMessage().sendLog();
    }
}
void PileCst::drop () {
    if (!videCst())
        popCst();
    setString();
}
