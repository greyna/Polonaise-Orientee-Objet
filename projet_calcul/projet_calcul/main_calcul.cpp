#include <QApplication>
#include <QPushButton>
#include "moteurCalcul.h"

using namespace std;
//using namespace calcul;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QPushButton bouton("Salut les Zéros, la forme ?");
    bouton.show();
    enum calcul::ModeAngle test = calcul::deg;
    return app.exec();
}
