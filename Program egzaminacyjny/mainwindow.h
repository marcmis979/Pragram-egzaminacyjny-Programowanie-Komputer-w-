#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QList>
#include <random>
#include <QStandardPaths>
#include "bazapytan.h"
#include "bazastudentow.h"
#include "student.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //GUI
    void on_dalejButton_clicked();
    void on_koniecButton_clicked();
    void on_dobrzeButton1_clicked();
    void on_dobrzeButton2_clicked();
    void on_dobrzeButton3_clicked();
    void on_dobrzeButton4_clicked();
    void on_zleButton1_clicked();
    void on_zleButton2_clicked();
    void on_zleButton3_clicked();
    void on_zleButton4_clicked();
    void on_czescButton_clicked();
    void on_rozpocznijButton_clicked();
    void on_dodajPytaniaButton_clicked();
    void on_dodajStudentowButton_clicked();
    void on_losujButton1_clicked();
    void on_losujButton2_clicked();
    void on_losujButton3_clicked();
    void on_losujButton4_clicked();
    void on_ppPlusButton_clicked();
    void on_ppMinusButton_clicked();
    void on_poPlusButton_clicked();
    void on_poMinusButton_clicked();
    void on_pgPlusButton_clicked();
    void on_pgMinusButton_clicked();
    void on_pzPlusButton_clicked();
    void on_pzMinusButton_clicked();
    void on_comboBox_currentTextChanged(const QString &arg1);
    //Funkcje
    void podstEtap();
    void zaawansEtap();
    int zmniejsz(int liczba);
    int zwieksz(int liczba);
    int sprawdz_max(int liczba);
    void Aktualizuj();
    void przyznajOcene();
private:
    Ui::MainWindow *ui;
    BazaPytan bazapytan;
    QList<Pytanie> pytania_pp;
    QList<Pytanie> pytania_po;
    QList<Pytanie> pytania_pg;
    QList<Pytanie> pytania_pz;
    Student student;
    BazaStudentow bazaStudentow;
    BazaPytan BazaPytan(QString tresc);
    QFile m_MyFile;
    QList<QString> dane;

};
#endif // MAINWINDOW_H
