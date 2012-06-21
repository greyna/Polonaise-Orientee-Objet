#pragma once

#include <QString>
#include <QMessageBox>
#include <iostream>

using namespace std;

/*! \class LogSysteme
 * \brief La classe LogSysteme est la classe charge de gere des logs messages. Elle est implémentée en Design pattern singleton.
 * Elle reçoit une demande d'ajout de log venant du programme et creée ainsi une instance log message qu'elle supprime apres qu'elle aie envoye son message sur la console et dans le fichier.
 */
class LogSysteme
{
private:
    static LogSysteme* instanceUnique;
public:
    /*!
     * \brief Ajouter un message dans le log
     * \param : str Le message à écrire dans le log
     * \param : priorite La priorité du message
     */
    void addLog(QString str, int priorite);
    /*!
     *  \brief Récupérer l'instance du LogSysteme
     */
    static LogSysteme& getInstanceLog();
    /*!
     *  \brief Libérer l'instance du LogSysteme
     */
    static void libereInstance();

    /// La classe LogMessage est une classe ephemere qui n'a pour seul but que de diffuser son message sur les flux voulu.
    class LogMessage
    {
    private:
        QString message;
        int priorite;
    public:
        /*!
         *  \brief Constructeur de la classe LogMessage
         *  \param message : Le message à ajouter dans le log
         *  \param priorite : La priorité du message
         */
        LogMessage(QString message, int  priorite): message(message), priorite(priorite) {}
        /*!
         *  \brief Créer un fichier pour le log
         */
        void addFichier();
    };
};
/*! \class Exception
 * \brief La classe représentant une exception. On utilise exception sans throw, pour envoyer des messages ou des logs type "pertes de donnees pour un sinus d'entier"
 */
class Exception
{
protected:
    QString message;
public:
    /*!
     *  \brief Constructeur de la classe Exception
     *  \param message : Le message de l'exception
     */
    Exception(QString message): message(message){}
    /*!
     *  \brief Récupérer le message de l'exception
     *  \return Le message de l'exception
     */
    QString getMessage() const {return message;}
    /*!
     *  \brief Méthode virtual qui crée une boîte de message pour l'exception
     */
    const virtual Exception& sendMessage() const {
        QMessageBox msgBox;
        msgBox.setText("Erreur non vitale : "+message+"\n");
        msgBox.exec();
        return *this;
    }
    /*!
     *  \brief Méthode virtual qui écrit le message dans le fichier log
     */
    const virtual Exception& sendLog() const {LogSysteme::getInstanceLog().addLog("Exception non throw : "+message, 3); return *this;}
};

/*! \class FactoryException
 * \brief On privilégie ses fils ce qui permet d'utiliser des traitements catch differents en fonction du type de l'erreur
 */
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
