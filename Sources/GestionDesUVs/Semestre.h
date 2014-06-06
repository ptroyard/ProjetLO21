#ifndef SEMESTRE_H
#define SEMESTRE_H

#include <QString>
#include <QMap>
#include "UV.h"


class Semestre{
    QString nom;
    QMap<QString, const UV&> listeUVSemestre;
public :
    QString getNom(){return nom;}
};

#endif // SEMESTRE_H
