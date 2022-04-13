#ifndef BAZASTUDENTOW_H
#define BAZASTUDENTOW_H
#include <QList>
#include <QString>
#include "student.h"
#include <QStringList>
#include <algorithm>

class BazaStudentow
{
private:
    QList<Student> studenci;
public:
    BazaStudentow();
    void zaladujStudentow(QString filename);
    void zapiszStudentow(QString filename);
    QStringList pobierzNazwy();
    void dodajOcene(QString studentDane, int ocena);
    QStringList pobierzPytania();
    Student* pobierzPoDanych(QString dane);
    QList<double> pobierzSrednie();
};

#endif // BAZASTUDENTOW_H
