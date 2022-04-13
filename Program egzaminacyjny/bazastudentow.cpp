#include "bazastudentow.h"

BazaStudentow::BazaStudentow()
{}

void BazaStudentow::zaladujStudentow(QString filename)
{
    studenci.clear();

    QFile file(filename);
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
            auto elements = line.split(";");
            Student s(elements[0], elements[1].toDouble());
            if(elements.length() > 2)
            {
                s.dodajOcene(elements[2].toInt());
            }
            studenci.append(s);
        }
        file.close();
    }
}

void BazaStudentow::zapiszStudentow(QString filename)
{
    QFile file(filename);
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);
        for(auto& s : studenci)
        {
            out << s.getDane() << ";" << s.getSrednia();
            if(s.getOcena() != nullptr)
            {
                out << ";" << *s.getOcena();
            }
            out << "\n";
        }
        file.close();
    }
}

QStringList BazaStudentow::pobierzNazwy()
{
    QStringList result;
    std::for_each(studenci.begin(), studenci.end(), [&result](const Student& s) { result.append(s.getDane()); });
    return result;
}

void BazaStudentow::dodajOcene(QString studentDane, int ocena)
{
    for(auto& s : studenci)
    {
        if(s.getDane() == studentDane)
        {
            s.dodajOcene(ocena);
            break;
        }
    }
}

Student *BazaStudentow::pobierzPoDanych(QString dane)
{
    for(auto& x : studenci)
    {
        if(x.getDane() == dane)
        {
            return &x;
        }
    }
    return nullptr;
}

QList<double> BazaStudentow::pobierzSrednie()
{
    QList<double> result;
    std::for_each(studenci.begin(), studenci.end(), [&result](const Student& s) { result.append(s.getSrednia()); });
    return result;
}
