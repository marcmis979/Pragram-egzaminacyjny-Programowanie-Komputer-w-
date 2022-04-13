#include "bazapytan.h"
#include <random>
#include <algorithm>

const QString &BazaPytan::getTresc() const
{   return tresc;   }

BazaPytan::BazaPytan()
{}
BazaPytan::BazaPytan(QString tresc)
    : tresc(tresc)
{}
void BazaPytan::zaladujPytnia(QString fileName)
{
    bazapytan.clear();
    QFile file(fileName);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        while(!in.atEnd())
        {
            QString line = in.readLine();
            if(!line.contains(";"))
            {
                continue;
            }
            QList<QString> elements = line.split(";");
            Pytanie p(elements[1], (TypPytania)elements[0].toInt());
            switch (p.getTyp())
            {
            case 0:
                pytania_pp.append(p);
                break;
            case 1:
                pytania_po.append(p);
                break;
            case 2:
                pytania_pg.append(p);
                break;
            case 3:
                pytania_pz.append(p);
                break;
            }
        }
        file.close();
    }
}
QList<Pytanie> BazaPytan::losujPytania(int ile, TypPytania typPytania)
{
    QList<Pytanie> pytania;
    switch (typPytania) {
        case TypPytania::pp:
            pytania = pytania_pp;
        break;
        case TypPytania::po:
            pytania = pytania_po;
        break;
        case TypPytania::pg:
            pytania = pytania_pg;
        break;
        case TypPytania::pz:
         pytania = pytania_pz;
         break;
    }
    QList<Pytanie> wylosowane;
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(pytania.begin(),pytania.end(),g);
    for(int i = 0; i < ile; i++)
    {
        wylosowane.append(pytania[i]);
    }
    return wylosowane;
}


