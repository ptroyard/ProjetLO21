#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <QString>
#include <QMap>
#include "Formation.h"
#include "Semestre.h"

class Etudiant{

    QString nom;
    QString prenom;
    QString adresse;
    QString login;
    Formation& formation;
    QMap<QString, Semestre> listeSemestre;

public :
    QString getnomEtudiant(){return nom;}
    QString getprenomEtudiant(){return prenom;}
    QString getadresseEtudiant(){return adresse;}
    QString getloginEtudiant(){return login;}

};

#endif // ETUDIANT_H
