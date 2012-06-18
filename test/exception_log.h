#pragma once

#include <QString>
#include <iostream>

using namespace std;

// Design pattern singleton sur LogSysteme
/// La classe LogSysteme est la classe chargé de géré des logs messages.
/// Elle reçoit une demande d'ajout de log venant du programme et créée ainsi une instance log message qu'elle supprime après qu'elle aie envoyé son message sur la console et dans le fichier.
class LogSysteme
{
private:
    static LogSysteme* instanceUnique;
public:
    void addLog(QString str, int priorite);
    static LogSysteme& getInstanceLog();
    static void libereInstance();

    /// La classe LogMessage est une classe éphémère qui n'a pour seule but que de diffuser son message sur les flux voulu.
    class LogMessage
    {
    private:
        QString message;
        int priorite;
    public:
        LogMessage(QString message, int  priorite): message(message), priorite(priorite) {}
        void addConsole();
        void addFichier();
    };
};

// On utilise exception sans throw, pour envoyer des messages ou des logs type "pertes de données pour un sinus d'entier"
class Exception
{
protected:
    QString message;
public:
    Exception(QString message): message(message){}
    QString getMessage() const {return message;}
    const Exception& sendMessage() const { cout<<message.toStdString()<<"\n"; return *this; }
    const Exception& sendLog() const {LogSysteme::getInstanceLog().addLog(message, 5); return *this;}
};

// Et on privilégie ses fils ce qui permet d'utiliser des traitements catch différents en fonction du type de l'erreur
class FactoryException : public Exception {
public:
    FactoryException(QString message): Exception(message){}
};
class OperationException : public Exception {
public:
    OperationException(QString message): Exception(message){}
};
