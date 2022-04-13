#ifndef PYTANIE_H
#define PYTANIE_H

#include <QString>

enum TypPytania { pp, po, pg, pz };

class Pytanie
{
private:
    QString tresc;
    TypPytania typ;

public:
    Pytanie();
    Pytanie(const QString &tresc, TypPytania typ);

    const QString &getTresc() const;
    TypPytania getTyp() const;
};

#endif // PYTANIE_H
