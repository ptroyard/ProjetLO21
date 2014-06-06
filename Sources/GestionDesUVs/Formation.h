#ifndef FORMATION_H
#define FORMATION_H

#include <QString>
#include <QMap>
#include "UV.h"


class Formation{
    QString intitule;
    QMap <QString, const UV&> uvAutorisees;
public :
    QString getIntitule(){return intitule;}
};

#endif // FORMATION_H
