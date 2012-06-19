#pragma once

#include <QString>
#include <QMessageBox>
#include <iostream>

using namespace std;

// Design pattern singleton sur LogSysteme
/// La classe LogSysteme est la classe charge de gere des logs messages.
/// Elle reçoit une demande d'ajout de log venant du programme et creée ainsi une instance log message qu'elle supprime apres qu'elle aie envoye son message sur la console et dans le fichier.
class LogSysteme
{
private:
    static LogSysteme* instanceUnique;
public:
    void addLog(QString str, int priorite);
    static LogSysteme& getInstanceLog();
    static void libereInstance();

    /// La classe LogMessage est une classe ephemere qui n'a pour seule but que de diffuser son message sur les flux voulu.
    class LogMessage
    {
    private:
        QString message;
        int priorite;
    public:
        LogMessage(QString message, int  priorite): message(message), priorite(priorite) {}
        void addFichier();
    };
};

// On utilise exception sans throw, pour envoyer des messages ou des logs type "pertes de donnees pour un sinus d'entier"
class Exception
{
protected:
    QString message;
public:
    Exception(QString message): message(message){}
    QString getMessage() const {return message;}
    const virtual Exception& sendMessage() const {
        QMessageBox msgBox;
        msgBox.setText("Erreur non vitale : "+message+"\n");
        msgBox.exec();
        return *this;
    }
    const virtual Exception& sendLog() const {LogSysteme::getInstanceLog().addLog("Exception non throw : "+message, 3); return *this;}
};

// Et on privilegie ses fils ce qui permet d'utiliser des traitements catch differents en fonction du type de l'erreur
class FactoryException : public Exception {
public:
    FactoryException(QString message): Exception(message){}
    const Exception& sendMessage() const {
        QMessageBox msgBox;
        msgBox.setText("Erreur vitale de factory : "+message+"\n");
        msgBox.exec();
        return *this;
    }
    const Exception& sendLog() const {LogSysteme::getInstanceLog().addLog("FactoryException : "+message, 1); return *this;}
};
class OperationException : public Exception {
public:
    OperationException(QString message): Exception(message){}
    const Exception& sendMessage() const {
        QMessageBox msgBox;
        msgBox.setText("Erreur vitale d'operation : "+message+"\n");
        msgBox.exec();
        return *this;
    }
    const Exception& sendLog() const {LogSysteme::getInstanceLog().addLog("OperationException : "+message, 2); return *this;}
};
