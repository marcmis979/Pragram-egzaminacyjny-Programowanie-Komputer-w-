#include "student.h"
#include "mainwindow.h"

Student::Student(const QString &dane, double srednia)
    : dane(dane), srednia(srednia), ocena(nullptr)
{}

Student::Student(const Student &s)
    : dane(s.dane), srednia(s.srednia), ocena(nullptr)
{
    if(s.ocena != nullptr)
    {
        dodajOcene(*(s.ocena));
    }
}

Student::~Student()
{
    if(ocena != nullptr)
    {
        delete ocena;
    }
}

void Student::dodajOcene(int nowaOcena)
{
    if(ocena != nullptr)
    {
        delete ocena;
    }
    ocena = new int;
    *ocena = nowaOcena;
}

void Student::setDane(const QString &newDane)
{
    dane = newDane;
}
const QString &Student::getDane() const
{   return dane;    }

void Student::setSrednia(const double &newSrednia)
{   srednia = newSrednia;   }

const double &Student::getSrednia() const
{   return srednia;  }


const int *Student::getOcena() const
{   return ocena;   }


