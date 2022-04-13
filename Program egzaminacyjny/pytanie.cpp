#include "pytanie.h"

const QString &Pytanie::getTresc() const
{  return tresc; }

TypPytania Pytanie::getTyp() const
{  return typ; }

Pytanie::Pytanie()
{}

Pytanie::Pytanie(const QString &tresc, TypPytania typ) : tresc(tresc),
    typ(typ)
{}
