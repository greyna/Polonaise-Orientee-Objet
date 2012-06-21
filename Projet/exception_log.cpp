#include "exception_log.h"

#include <QDateTime>
#include <fstream>

using namespace std;


// Design pattern singleton sur LogSysteme
LogSysteme* LogSysteme::instanceUnique=0;
LogSysteme& LogSysteme::getInstanceLog()
{
    if(instanceUnique==0)
    {
        instanceUnique = new LogSysteme();
    }
    return * instanceUnique;
}
void LogSysteme::libereInstance()
{
    delete instanceUnique;
}

void LogSysteme::addLog(QString str, int priorite)
{
    LogMessage mess(str, priorite);
    mess.addFichier();
}

void LogSysteme::LogMessage::addFichier()
{
    ofstream fichier("log.txt", ios::out | ios::app);
    if(fichier){
        QDateTime Date(QDateTime::currentDateTime());
        QString str = "["+Date.toString()+"] Priorite "+QString::number(this->priorite)+"\t\t"+this->message+"\n";
        fichier << str.toStdString();
        fichier.close();
    }

}
