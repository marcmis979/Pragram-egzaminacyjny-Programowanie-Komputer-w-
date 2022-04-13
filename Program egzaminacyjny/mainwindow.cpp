#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <iostream>
//ZMIENNE STATYCZNE:
static int pkt1;  //ilość pkt za pyt1
static int pkt2;  //ilość pkt za pyt2
static int pkt3;  //ilość pkt za pyt3
static int pkt4;  //ilość pkt za pyt4
static int punkty; //ilość wszystkich punktów
static int pp_pyt=1; //ilość pytań z programowania proceduralnego
static int po_pyt=1; //ilość pytań z programowania obiektowego
static int pg_pyt=1; //ilość pytań z programowania genereycznego
static int pz_pyt=1; //ilość pytań z poziomu zaawansowanego
static int iloscdod; //dodatkowe pytania wynikające ze śrendiej
static int max_pyt; //domyślna ilość pytań (po jednym) + dodatkowe pytania wynikające ze śrendiej
static int ile_pytan; //ile jeszcze pytań można dodać
static QString plik_studenci; //nazwa pliku dla listy studentów.txt
//KONSTRUKTOR I DESTRUKTOR
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->page_0);
    ui->dalejButton->setEnabled(false);
    punkty=0;
    pkt1,pkt2,pkt3,pkt4=0;
}
MainWindow::~MainWindow()
{
    delete ui;
}
//SYSTEM OCENIANIA I ETAPÓW-------------------------------------------------------------------------------------------------------------------------
void MainWindow::przyznajOcene()
{
    int ocena=pkt1 + pkt2 + pkt3 + pkt4;   //ocena dla studenta
    if(ocena <3) ocena=2;
    QString studentDane = ui->comboBox->currentText();
    bazaStudentow.dodajOcene(studentDane, ocena);
    bazaStudentow.zapiszStudentow(plik_studenci);
}
void MainWindow::podstEtap()
{
    if (punkty>=3) ui->dalejButton->setEnabled(true);
    else ui->dalejButton->setEnabled(false);
}
void MainWindow::zaawansEtap()
{
    if (punkty>=1) ui->koniecButton->setEnabled(true);
    else ui->koniecButton->setEnabled(false);
}
int MainWindow::zwieksz(int liczba)
{
    liczba++;
    if (liczba >5) liczba=5;
    else  ile_pytan--;
    Aktualizuj();
    return liczba;
}
int MainWindow::zmniejsz(int liczba)
{
    liczba--;
    if (liczba < 1) liczba=1;
    else  ile_pytan++;
    Aktualizuj();
    return liczba;
}
int MainWindow::sprawdz_max(int liczba)
{
    if(max_pyt<pp_pyt+po_pyt+pg_pyt+pz_pyt) liczba--;
    return liczba;
}
void MainWindow::Aktualizuj()
{
    QString maks=QString::number(iloscdod);
    if(ile_pytan<0) ile_pytan=0;
    QString ile=QString::number(ile_pytan);
    ui->iloscPytanLabel->setText(ile+"/"+maks);
}
//PIERWSZY ETAP: ROZPOCZĘCIE-------------------------------------------------------------------------------------------------------------------------
void MainWindow::on_rozpocznijButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_1);
    //pp
    QList pytaniepp = bazapytan.losujPytania(pp_pyt, TypPytania::pp);
    QString trescpp;
    for(int i = 0; i < pytaniepp.length(); i++)
    {
        trescpp += pytaniepp[i].getTresc() +"\n"+ "\n";
    }
    ui->pyt1->setText(trescpp);//wyświetlamy treść
    //po
    QList pytaniepo = bazapytan.losujPytania(po_pyt, TypPytania::po);
    QString trescpo;
    for(int i = 0; i < pytaniepo.length(); i++)
    {
        trescpo += pytaniepo[i].getTresc() + "\n"+ "\n";
    }
    ui->pyt2->setText(trescpo);//wyświetlamy treść
    //pg
    QList pytaniepg = bazapytan.losujPytania(pg_pyt, TypPytania::pg);
    QString trescpg;
    for(int i = 0; i < pytaniepg.length(); i++)
    {
        trescpg += pytaniepg[i].getTresc() + "\n"+ "\n";
    }
    ui->pyt3->setText(trescpg);//wyświetlamy treść
    //pz
    QList pytaniepz = bazapytan.losujPytania(pz_pyt, TypPytania::pz);
    QString trescpz;
    for(int i = 0; i < pytaniepz.length(); i++)
    {
        trescpz += pytaniepz[i].getTresc() + "\n"+ "\n";
    }
    ui->pyt4->setText(trescpz);//wyświetlamy treść
}
void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
     ui->studentLabel1->setText(arg1);
     ui->studentLabel2->setText(arg1);
     ui->studentLabel3->setText(arg1);
     Student* s = bazaStudentow.pobierzPoDanych(arg1);
     if(s != nullptr)
     {
       iloscdod =(s->getSrednia() -3.0)/0.5;
       max_pyt  =4+iloscdod;
       ile_pytan=iloscdod;
       QString maks=QString::number(iloscdod);
       QString ile=QString::number(ile_pytan);
       ui->iloscPytanLabel->setText(ile+"/"+maks);
     }
}
void MainWindow::on_ppPlusButton_clicked()
{
    pp_pyt++;
    if (pp_pyt >5) pp_pyt=5;
    else  ile_pytan--;
    QString maks=QString::number(iloscdod);
    if(ile_pytan<0) ile_pytan=0;
    QString ile=QString::number(ile_pytan);
    ui->iloscPytanLabel->setText(ile+"/"+maks);
    if(max_pyt<pp_pyt+po_pyt+pg_pyt+pz_pyt) pp_pyt--;
    QString text=QString::number(pp_pyt);
    ui->ppNumber->setText(text);
}
void MainWindow::on_ppMinusButton_clicked()
{
    pp_pyt=zmniejsz(pp_pyt);
    QString text=QString::number(pp_pyt);
    ui->ppNumber->setText(text);
}
void MainWindow::on_poPlusButton_clicked()
{
    po_pyt= zwieksz(po_pyt);
    po_pyt= sprawdz_max(po_pyt);
    QString text=QString::number(po_pyt);
    ui->poNumber->setText(text);
}
void MainWindow::on_poMinusButton_clicked()
{
    po_pyt= zmniejsz(po_pyt);
    QString text=QString::number(po_pyt);
    ui->poNumber->setText(text);
}
void MainWindow::on_pgPlusButton_clicked()
{
    pg_pyt= zwieksz(pg_pyt);
    pg_pyt= sprawdz_max(pg_pyt);
    QString text=QString::number(pg_pyt);
    ui->pgNumber->setText(text);
}
void MainWindow::on_pgMinusButton_clicked()
{
    pg_pyt= zmniejsz(pg_pyt);
    QString text=QString::number(pg_pyt);
    ui->pgNumber->setText(text);
}
void MainWindow::on_pzPlusButton_clicked()
{
    pz_pyt= zwieksz(pz_pyt);
    pz_pyt= sprawdz_max(pz_pyt);
    QString text=QString::number(pz_pyt);
    ui->pzNumber->setText(text);
}
void MainWindow::on_pzMinusButton_clicked()
{
    pz_pyt= zmniejsz(pz_pyt);
    QString text=QString::number(pz_pyt);
    ui->pzNumber->setText(text);
}
void MainWindow::on_dodajStudentowButton_clicked()
{
    QFileDialog fileDialog(this);
       fileDialog.setFileMode(QFileDialog::AnyFile);
       fileDialog.setNameFilter(tr("Text (*.txt)"));
       fileDialog.setViewMode(QFileDialog::Detail);
       if(fileDialog.exec())
       {
           QStringList files = fileDialog.selectedFiles();
           try {
               bazaStudentow.zaladujStudentow(files[0]);
               plik_studenci=files[0];
               ui->comboBox->clear();
               ui->comboBox->addItems(bazaStudentow.pobierzNazwy());
                }
           catch(QException& ex)
                       {
                        qDebug() << ex.what() << "\n";
                       }
       }
}
void MainWindow::on_dodajPytaniaButton_clicked()
{
    QFileDialog dialog(this);
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setNameFilter(tr("Text (*.txt)"));
    dialog.setViewMode(QFileDialog::Detail);
    if(dialog.exec())
    {
        QStringList files = dialog.selectedFiles();
        try {
            bazapytan.zaladujPytnia(files[0]);//wczytujemy z pliku
        }
        catch(QException& ex)
                    {
                     qDebug() << ex.what() << "\n";
                    }
    }
}
//DRUGI ETAP: POZIOM PODSTAWOWY----------------------------------------------------------------------------------------------------
void MainWindow::on_dobrzeButton1_clicked()
{
    pkt1=0;
    pkt1++;
    punkty++;
    ui->dobrzeButton1->setEnabled(false);
    ui->zleButton1->setEnabled(true);
    podstEtap();
}
void MainWindow::on_dobrzeButton2_clicked()
{
    pkt2=0;
    pkt2++;
    punkty++;
    ui->dobrzeButton2->setEnabled(false);
    ui->zleButton2->setEnabled(true);
    podstEtap();
}
void MainWindow::on_dobrzeButton3_clicked()
{
    pkt3=0;
    pkt3++;
    punkty++;
    ui->dobrzeButton3->setEnabled(false);
    ui->zleButton3->setEnabled(true);
    podstEtap();
}
void MainWindow::on_zleButton1_clicked()
{
    pkt1=0;
    pkt1--;
    punkty++;
    ui->dobrzeButton1->setEnabled(true);
    ui->zleButton1->setEnabled(false);
    podstEtap();
}
void MainWindow::on_zleButton2_clicked()
{
    pkt2=0;
    pkt2--;
    punkty++;
    ui->dobrzeButton2->setEnabled(true);
    ui->zleButton2->setEnabled(false);
    podstEtap();
}
void MainWindow::on_zleButton3_clicked()
{
    pkt3=0;
    pkt3--;
    punkty++;
    ui->dobrzeButton3->setEnabled(true);
    ui->zleButton3->setEnabled(false);
    podstEtap();
}
void MainWindow::on_losujButton1_clicked() //pytania_pp
{
    //pp
    QList pytaniepp = bazapytan.losujPytania(pp_pyt, TypPytania::pp);
    QString trescpp;
    for(int i = 0; i < pytaniepp.length(); i++)
    {
        trescpp += pytaniepp[i].getTresc() + "\n"+ "\n";
    }
    ui->pyt1->setText(trescpp);//wyświetlamy treść
}
void MainWindow::on_losujButton2_clicked() //pytania_po
{
    //po
    QList pytaniepo = bazapytan.losujPytania(po_pyt, TypPytania::po);
    QString trescpo;
    for(int i = 0; i < pytaniepo.length(); i++)
    {
        trescpo += pytaniepo[i].getTresc() + "\n"+ "\n";
    }
    ui->pyt2->setText(trescpo);//wyświetlamy treść
}
void MainWindow::on_losujButton3_clicked() //pytania_pg
{
    //pg
    QList pytaniepg = bazapytan.losujPytania(pg_pyt, TypPytania::pg);
    QString trescpg;
    for(int i = 0; i < pytaniepg.length(); i++)
    {
        trescpg += pytaniepg[i].getTresc() + "\n"+ "\n";
    }
    ui->pyt3->setText(trescpg);//wyświetlamy treść
}
void MainWindow::on_dalejButton_clicked()
{
    if(pkt1+pkt2+pkt3==3) ui->stackedWidget->setCurrentWidget(ui->page_2);
    else
    { //zmiana studenta
        przyznajOcene(); //koniec oceniania
        ui->stackedWidget->setCurrentWidget(ui->page_0);
       pkt1,pkt2,pkt3=0;
    }
    ui->dobrzeButton1->setEnabled(true);
    ui->dobrzeButton2->setEnabled(true);
    ui->dobrzeButton3->setEnabled(true);
    ui->zleButton1->setEnabled(true);
    ui->zleButton2->setEnabled(true);
    ui->zleButton3->setEnabled(true);
    punkty=0;
    zaawansEtap();
}
//TRZECI ETAP: POZIOM ZAAWANSOWANY----------------------------------------------------------------------------------------------------
void MainWindow::on_dobrzeButton4_clicked()
{
    pkt4=0;
    pkt4+=2;
    punkty++;
    ui->dobrzeButton4->setEnabled(false);
    ui->czescButton->setEnabled(true);
    ui->zleButton4->setEnabled(true);
    zaawansEtap();
}
void MainWindow::on_zleButton4_clicked()
{
    pkt4=0;
    punkty++;
    ui->dobrzeButton4->setEnabled(true);
    ui->czescButton->setEnabled(true);
    ui->zleButton4->setEnabled(false);
    zaawansEtap();
}
void MainWindow::on_czescButton_clicked()
{
    pkt4=0;
    pkt4++;
    punkty++;
    ui->dobrzeButton4->setEnabled(true);
    ui->czescButton->setEnabled(false);
    ui->zleButton4->setEnabled(true);
    zaawansEtap();
}
void MainWindow::on_losujButton4_clicked() //pytania_pz
{
    //pz
    QList pytaniepz = bazapytan.losujPytania(pz_pyt, TypPytania::pz);
    QString trescpz;
    for(int i = 0; i < pytaniepz.length(); i++)
    {
        trescpz += pytaniepz[i].getTresc() + "\n"+ "\n";
    }
    ui->pyt4->setText(trescpz);//wyświetlamy treść
}
void MainWindow::on_koniecButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_0);
    ui->dobrzeButton4->setEnabled(true);
    ui->zleButton4->setEnabled(true);
    ui->czescButton->setEnabled(true);
    przyznajOcene(); //koniec oceniania
    pkt1,pkt2,pkt3,pkt4=0;
}






