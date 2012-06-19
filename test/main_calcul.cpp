#include <QtCore/QCoreApplication>
#include "moteurCalcul.h"
#include <typeinfo>

using namespace std;
using namespace calcul;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    try {
        /*
        cout<<"\n"<<"-------------- TEST REEL -----------"<<"\n";
        Reel & test10 = FactoryNormal().CreerReel("3.3");
        cout<<"cast entier : "<<Entier(test10).getString().toStdString()<<endl;
        Reel & test11 = FactoryNormal().CreerReel("4.7");
        Reel& test12 = test10+test11;
        cout<<test10.getString().toStdString()<<" + "<<test11.getString().toStdString()<<" = "<<test12.getString().toStdString()<<"\n";
        Reel& test13 = test10-test11;
        cout<<test10.getString().toStdString()<<" - "<<test11.getString().toStdString()<<" = "<<test13.getString().toStdString()<<"\n";
        Reel& test14 = test10 * test11;
        cout<<test10.getString().toStdString()<<" * "<<test11.getString().toStdString()<<" = "<<test14.getString().toStdString()<<"\n";
        Reel& test15 = test10 / test11;
        cout<<test10.getString().toStdString()<<" / "<<test11.getString().toStdString()<<" = "<<test15.getString().toStdString()<<"\n";
        Reel& test16 = test10.COS();
        cout<<"COS( "<<test10.getString().toStdString()<<" ) = "<<test16.getString().toStdString()<<"\n";
        Reel& test17 = test10.FACT();
        cout<<"FACT( "<<test10.getString().toStdString()<<" ) = "<<test17.getString().toStdString()<<"\n";

        cout<<"\n"<<"-------------- TEST RATIONNEL -----------"<<"\n";
        Rationnel & test20 = FactoryNormal().CreerRationnel("3/3");
        cout<<"cast entier : "<<Entier(test20).getString().toStdString()<<endl;
        Rationnel & test21 = FactoryNormal().CreerRationnel("4/7");
        Rationnel& test22 = test20+test21;
        cout<<test20.getString().toStdString()<<" + "<<test21.getString().toStdString()<<" = "<<test22.getString().toStdString()<<"\n";
        Rationnel& test23 = test20-test21;
        cout<<test20.getString().toStdString()<<" - "<<test21.getString().toStdString()<<" = "<<test23.getString().toStdString()<<"\n";
        Rationnel& test24 = test20*test21;
        cout<<test20.getString().toStdString()<<" * "<<test21.getString().toStdString()<<" = "<<test24.getString().toStdString()<<"\n";
        Rationnel& test25 = test20/ test21;
        cout<<test20.getString().toStdString()<<" / "<<test21.getString().toStdString()<<" = "<<test25.getString().toStdString()<<"\n";
        Rationnel& test26 = test20.COS();
        cout<<"COS( "<<test20.getString().toStdString()<<" ) = "<<test26.getString().toStdString()<<"\n";
        Rationnel& test27 = test20.FACT();
        cout<<"FACT( "<<test20.getString().toStdString()<<" ) = "<<test27.getString().toStdString()<<"\n";

        cout<<"\n"<<"-------------- TEST ENTIER -----------"<<"\n";
        Entier & test30 = FactoryNormal().CreerEntier("3");
        cout<<"cast entier : "<<Entier(test30).getString().toStdString()<<endl;
        Entier & test31 = FactoryNormal().CreerEntier("4");
        Entier& test32 = test30+test31;
        cout<<test30.getString().toStdString()<<" + "<<test31.getString().toStdString()<<" = "<<test32.getString().toStdString()<<"\n";
        Entier& test33 = test30-test31;
        cout<<test30.getString().toStdString()<<" - "<<test31.getString().toStdString()<<" = "<<test33.getString().toStdString()<<"\n";
        Entier& test34 = test30*test31;
        cout<<test30.getString().toStdString()<<" * "<<test31.getString().toStdString()<<" = "<<test34.getString().toStdString()<<"\n";
        Entier& test35 = test30/ test31;
        cout<<test30.getString().toStdString()<<" / "<<test31.getString().toStdString()<<" = "<<test35.getString().toStdString()<<"\n";
        Reel& test36 = test30.COS();
        cout<<"COS( "<<test30.getString().toStdString()<<" ) = "<<test36.getString().toStdString()<<"\n";
        Reel& test37 = test30.FACT();
        cout<<"FACT( "<<test30.getString().toStdString()<<" ) = "<<test37.getString().toStdString()<<"\n";

        cout<<"\n"<<"-------------- TEST COMPLEXE -----------"<<"\n";
        Complexe<Reel>& test40= FactoryComplexe().CreerReel("3$4.5");
        cout<<"cast entier : "<<Entier(test40).getString().toStdString()<<endl;
        Complexe<Reel>& test41= FactoryComplexe().CreerReel("5.5$4");
        cout<<test40.getString().toStdString()<<"\n";
        Complexe<Reel>& test42 = test40+test41;
        cout<<test40.getString().toStdString()<<" + "<<test41.getString().toStdString()<<" = "<<test42.getString().toStdString()<<"\n";
        Complexe<Reel>& test43 = test40-test41;
        cout<<test40.getString().toStdString()<<" - "<<test41.getString().toStdString()<<" = "<<test43.getString().toStdString()<<"\n";
        Complexe<Reel>& test44 = test40*test41;
        cout<<test40.getString().toStdString()<<" * "<<test41.getString().toStdString()<<" = "<<test44.getString().toStdString()<<"\n";
        Complexe<Reel>& test45 = test40/test41;
        cout<<test40.getString().toStdString()<<" / "<<test41.getString().toStdString()<<" = "<<test45.getString().toStdString()<<"\n";


        cout<<"\n"<<"-------------- TEST PILE -----------"<<"\n";
        PileCst pile1;
        pile1.ajouter("1 2 3");
        cout<<"pile1 : "<<pile1.getString().toStdString()<<endl;
        pile1.swap(0,2);
        cout<<"après swap(0,2) : "<<pile1.getString().toStdString()<<endl;
        pile1.swap(1,2);
        cout<<"après swap(1,2) : "<<pile1.getString().toStdString()<<endl;
        pile1.swap(1,14);
        cout<<"après swap(1,14) : "<<pile1.getString().toStdString()<<endl;
        pile1.dup();
        cout<<"après dup() : "<<pile1.getString().toStdString()<<endl;
        pile1.drop();
        cout<<"après drop() : "<<pile1.getString().toStdString()<<endl;
        pile1.clear();
        cout<<"après clear() : "<<pile1.getString().toStdString()<<endl;

        PileCst pile2;
        pile2.ajouter("3 4 1 2 + * +");
        cout<<"pile2 après ajouter(3 4 1 2 + * +) (=15) : "<<pile2.getString().toStdString()<<endl;

        PileCst pile3;
        pile3.ajouter("1 2 3 4 5");
        cout<<"pile3 : "<<pile3.getString().toStdString()<<endl;
        pile3.sum(4);
        cout<<"après sum(4) : "<<pile3.getString().toStdString()<<endl;

        pile3.ajouter("6 7 8 9 10");
        cout<<"pile3 ajout : "<<pile3.getString().toStdString()<<endl;
        pile3.mean(7);
        cout<<"après mean(7) : "<<pile3.getString().toStdString()<<endl;

        cout<<"\n"<<"-------------- TEST MOTEUR -----------"<<"\n";
        MoteurCalcul moteur;
        moteur.ajouterResoudre("1 2 + 4 * 3 +");
        moteur.ajouterResoudre("30 /");
        moteur.ajouterResoudre("2$3 +");
        moteur.ajouterResoudre("SIN");
        moteur.ajouterResoudre("SQR");
        moteur.ajouterResoudre("1 2 3 2 3");
        moteur.ajouterResoudre("SWAP");
        moteur.ajouterResoudre("4");
        moteur.ajouterResoudre("MEAN");
        */

        cout<<"\n"<<"-------------- TEST EXPRESSION -----------"<<"\n";
        MoteurCalcul moteur;
        moteur.ajouterResoudre(" '1000' 3 / '1000' * 5 - 4 +");
        moteur.ajouterResoudre("EVAL");
        moteur.ajouterResoudre("EVAL");


    }
    catch (OperationException exc) {
        exc.sendMessage().sendLog();
    }
    catch (FactoryException exc) {
        exc.sendMessage().sendLog();
    }

    return a.exec();
}
