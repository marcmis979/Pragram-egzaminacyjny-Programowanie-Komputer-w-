#ifndef STUDENT_H
#define STUDENT_H

#include <QString>
#include <QList>
#include "bazapytan.h"
class BazaPytan;

class Student
{
private:
    QString dane; //imię, nazwisko
    double srednia;
    int* ocena;
    int iloscDodatkowychPytan;
public:
    Student() : ocena(nullptr){};
    Student(const QString &dane, double srednia);
    Student(const Student& s);
    ~Student();

    void dodajOcene(int nowaOcena);

    void setDane(const QString &newDane);
    void setSrednia(const double &newSrednia);


    const QString &getDane() const;
    const double &getSrednia() const;
    const int* getOcena() const;
    QString toTXT() const;

};
#endif // STUDENT_H
