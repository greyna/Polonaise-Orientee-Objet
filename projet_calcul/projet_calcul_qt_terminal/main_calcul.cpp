#include <QtCore/QCoreApplication>
#include "moteurCalcul.h"

using namespace std;
using namespace calcul;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout<<"\nComplexeReel : ";
    ComplexeReel nb10("34.34$34.34");
    ComplexeReel nb20(34.34, 34.34);
    cout<<nb10.get_string_associe().toStdString()<<" + "<<nb20.get_string_associe().toStdString()<<" = "<<(nb10+nb20).get_string_associe().toStdString()<<"\n";
    cout<<nb10.get_string_associe().toStdString()<<" - "<<nb20.get_string_associe().toStdString()<<" = "<<(nb10-nb20).get_string_associe().toStdString()<<"\n";
    cout<<nb10.get_string_associe().toStdString()<<" * "<<nb20.get_string_associe().toStdString()<<" = "<<(nb10*nb20).get_string_associe().toStdString()<<"\n";

    cout<<"\nComplexeRationnel : ";
    ComplexeRationnel nb1("34/34$34/34");
    ComplexeRationnel nb2(34, 34, 34, 34);
    cout<<nb1.get_string_associe().toStdString()<<" + "<<nb2.get_string_associe().toStdString()<<" = "<<(nb1+nb2).get_string_associe().toStdString()<<"\n";
    cout<<nb1.get_string_associe().toStdString()<<" - "<<nb2.get_string_associe().toStdString()<<" = "<<(nb1-nb2).get_string_associe().toStdString()<<"\n";
    cout<<nb1.get_string_associe().toStdString()<<" * "<<nb2.get_string_associe().toStdString()<<" = "<<(nb1*nb2).get_string_associe().toStdString()<<"\n";

    cout<<"\nComplexeEntier : ";
    ComplexeEntier nb3("34$34");
    ComplexeEntier nb4(34, 34);
    cout<<nb3.get_string_associe().toStdString()<<" + "<<nb4.get_string_associe().toStdString()<<" = "<<(nb3+nb4).get_string_associe().toStdString()<<"\n";
    cout<<nb3.get_string_associe().toStdString()<<" - "<<nb4.get_string_associe().toStdString()<<" = "<<(nb3-nb4).get_string_associe().toStdString()<<"\n";
    cout<<nb3.get_string_associe().toStdString()<<" * "<<nb4.get_string_associe().toStdString()<<" = "<<(nb3*nb4).get_string_associe().toStdString()<<"\n";

    cout<<"\nReel : ";
    Reel nb5("34.34");
    Reel nb6(34.34);
    cout<<nb5.get_string_associe().toStdString()<<" + "<<nb6.get_string_associe().toStdString()<<" = "<<(nb5+nb6).get_string_associe().toStdString()<<"\n";
    cout<<nb5.get_string_associe().toStdString()<<" - "<<nb6.get_string_associe().toStdString()<<" = "<<(nb5-nb6).get_string_associe().toStdString()<<"\n";
    cout<<nb5.get_string_associe().toStdString()<<" * "<<nb6.get_string_associe().toStdString()<<" = "<<(nb5*nb6).get_string_associe().toStdString()<<"\n";

    cout<<"\nRationnel : ";
    Rationnel nb7("34/34");
    Rationnel nb8(34, 34);
    cout<<nb7.get_string_associe().toStdString()<<" + "<<nb8.get_string_associe().toStdString()<<" = "<<(nb7+nb8).get_string_associe().toStdString()<<"\n";
    cout<<nb7.get_string_associe().toStdString()<<" - "<<nb8.get_string_associe().toStdString()<<" = "<<(nb7-nb8).get_string_associe().toStdString()<<"\n";
    cout<<nb7.get_string_associe().toStdString()<<" * "<<nb8.get_string_associe().toStdString()<<" = "<<(nb7*nb8).get_string_associe().toStdString()<<"\n";

    cout<<"\nEntier : ";
    Entier nb9("34");
    Entier nb11(34);
    cout<<nb9.get_string_associe().toStdString()<<" + "<<nb11.get_string_associe().toStdString()<<" = "<<(nb9+nb11).get_string_associe().toStdString()<<"\n";
    cout<<nb9.get_string_associe().toStdString()<<" - "<<nb11.get_string_associe().toStdString()<<" = "<<(nb9-nb11).get_string_associe().toStdString()<<"\n";
    cout<<nb9.get_string_associe().toStdString()<<" * "<<nb11.get_string_associe().toStdString()<<" = "<<(nb9*nb11).get_string_associe().toStdString()<<"\n";

    return a.exec();
}
