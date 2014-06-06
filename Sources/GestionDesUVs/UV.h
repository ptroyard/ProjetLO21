#ifndef UV_H
#define UV_H

#include <QString>
#include <QMap>
#include "Semestre.h"
#include "Formation.h"

class UV{
    QString nom;
    QString description;
    QString categorie;
    int nbCredits;
    Formation& formation;
    QMap<QString, Semestre> listeSemestres;

public :
    QString getNom() {return nom;}
    QString getDescription(){return description;}
    QString getCategorie(){return categorie;}
    int getnbCredits(){return nbCredits;}

};

#endif // UV_H
