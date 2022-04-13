#ifndef BAZA_PYTAN_H
#define BAZA_PYTAN_H
#include <QString>
#include <QStringList>
#include <QList>
#include <QFile>
#include <QTextStream>
#include "pytanie.h"

class BazaPytan
{
private:
    QString tresc;
    QList<BazaPytan> bazapytan;
    QList<Pytanie> pytania_pp;
    QList<Pytanie> pytania_po;
    QList<Pytanie> pytania_pg;
    QList<Pytanie> pytania_pz;

public:
    BazaPytan();
    BazaPytan(QString tresc);
    const QString &getTresc() const;
    void zaladujPytnia(QString fileName);;
    QList<Pytanie> losujPytania(int ile, TypPytania typPytania);
    QList<BazaPytan> wypisz(int ile);
};

#endif // PYTANIE_H
