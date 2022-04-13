/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_7;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QVBoxLayout *verticalLayout_3;
    QLabel *title;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_9;
    QPushButton *dodajStudentowButton;
    QVBoxLayout *verticalLayout_25;
    QPushButton *rozpocznijButton;
    QVBoxLayout *verticalLayout_19;
    QPushButton *dodajPytaniaButton;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_2;
    QLabel *studentLabel1;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_4;
    QLabel *iloscPytanLabel;
    QLabel *wybierzStudenta;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_17;
    QLabel *ppTitle;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_23;
    QPushButton *ppPlusButton;
    QPushButton *ppMinusButton;
    QVBoxLayout *verticalLayout_24;
    QLabel *ppNumber;
    QVBoxLayout *verticalLayout_18;
    QLabel *poTitle;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_26;
    QPushButton *poPlusButton;
    QPushButton *poMinusButton;
    QVBoxLayout *verticalLayout_27;
    QLabel *poNumber;
    QHBoxLayout *horizontalLayout_16;
    QLabel *pgTitle;
    QLabel *pzTitle;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_21;
    QPushButton *pgPlusButton;
    QPushButton *pgMinusButton;
    QVBoxLayout *verticalLayout_31;
    QLabel *pgNumber;
    QVBoxLayout *verticalLayout_30;
    QPushButton *pzPlusButton;
    QPushButton *pzMinusButton;
    QVBoxLayout *verticalLayout_28;
    QLabel *pzNumber;
    QWidget *page_1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label1;
    QLabel *studentLabel2;
    QVBoxLayout *verticalLayout_10;
    QLabel *tyt1;
    QHBoxLayout *horizontalLayout_12;
    QTextBrowser *pyt1;
    QVBoxLayout *verticalLayout_14;
    QPushButton *losujButton1;
    QPushButton *dobrzeButton1;
    QPushButton *zleButton1;
    QLabel *tyt2;
    QHBoxLayout *horizontalLayout_6;
    QTextBrowser *pyt2;
    QVBoxLayout *verticalLayout_11;
    QPushButton *losujButton2;
    QPushButton *dobrzeButton2;
    QPushButton *zleButton2;
    QLabel *tyt3;
    QHBoxLayout *horizontalLayout_10;
    QTextBrowser *pyt3;
    QVBoxLayout *verticalLayout_13;
    QPushButton *losujButton3;
    QPushButton *dobrzeButton3;
    QPushButton *zleButton3;
    QPushButton *dalejButton;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *dane_2;
    QLabel *studentLabel3;
    QVBoxLayout *verticalLayout_15;
    QLabel *tyt4;
    QHBoxLayout *horizontalLayout_13;
    QTextBrowser *pyt4;
    QVBoxLayout *verticalLayout_16;
    QPushButton *losujButton4;
    QPushButton *dobrzeButton4;
    QPushButton *czescButton;
    QPushButton *zleButton4;
    QPushButton *koniecButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1500, 969);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(0, 0));
        centralwidget->setMaximumSize(QSize(1500, 1500));
        verticalLayout_8 = new QVBoxLayout(centralwidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));

        verticalLayout_8->addLayout(horizontalLayout_11);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        verticalLayout_8->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_8->addLayout(verticalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setCursor(QCursor(Qt::ArrowCursor));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 30, 36);\n"
""));
        page_0 = new QWidget();
        page_0->setObjectName(QString::fromUtf8("page_0"));
        verticalLayout_3 = new QVBoxLayout(page_0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        title = new QLabel(page_0);
        title->setObjectName(QString::fromUtf8("title"));
        title->setEnabled(true);
        title->setMaximumSize(QSize(16777215, 55));
        QFont font;
        font.setPointSize(33);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));
        title->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(title, 0, Qt::AlignVCenter);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        dodajStudentowButton = new QPushButton(page_0);
        dodajStudentowButton->setObjectName(QString::fromUtf8("dodajStudentowButton"));
        dodajStudentowButton->setMinimumSize(QSize(220, 40));
        dodajStudentowButton->setMaximumSize(QSize(220, 40));
        QFont font1;
        font1.setPointSize(16);
        dodajStudentowButton->setFont(font1);
        dodajStudentowButton->setCursor(QCursor(Qt::PointingHandCursor));
        dodajStudentowButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
""));

        verticalLayout_9->addWidget(dodajStudentowButton, 0, Qt::AlignRight|Qt::AlignVCenter);


        horizontalLayout_5->addLayout(verticalLayout_9);

        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        rozpocznijButton = new QPushButton(page_0);
        rozpocznijButton->setObjectName(QString::fromUtf8("rozpocznijButton"));
        rozpocznijButton->setMinimumSize(QSize(335, 65));
        rozpocznijButton->setMaximumSize(QSize(335, 65));
        QFont font2;
        font2.setPointSize(32);
        font2.setBold(false);
        font2.setKerning(false);
        rozpocznijButton->setFont(font2);
        rozpocznijButton->setCursor(QCursor(Qt::PointingHandCursor));
        rozpocznijButton->setLayoutDirection(Qt::LeftToRight);
        rozpocznijButton->setAutoFillBackground(false);
        rozpocznijButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 15px;\n"
"}\n"
"\n"
""));
        rozpocznijButton->setCheckable(false);

        verticalLayout_25->addWidget(rozpocznijButton, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout_5->addLayout(verticalLayout_25);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        dodajPytaniaButton = new QPushButton(page_0);
        dodajPytaniaButton->setObjectName(QString::fromUtf8("dodajPytaniaButton"));
        dodajPytaniaButton->setEnabled(true);
        dodajPytaniaButton->setMinimumSize(QSize(220, 40));
        dodajPytaniaButton->setMaximumSize(QSize(220, 40));
        dodajPytaniaButton->setFont(font1);
        dodajPytaniaButton->setCursor(QCursor(Qt::PointingHandCursor));
        dodajPytaniaButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"\n"
""));

        verticalLayout_19->addWidget(dodajPytaniaButton, 0, Qt::AlignLeft|Qt::AlignVCenter);


        horizontalLayout_5->addLayout(verticalLayout_19);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_2 = new QLabel(page_0);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(70, 16777215));
        QFont font3;
        font3.setPointSize(14);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        horizontalLayout_18->addWidget(label_2);

        studentLabel1 = new QLabel(page_0);
        studentLabel1->setObjectName(QString::fromUtf8("studentLabel1"));
        studentLabel1->setFont(font3);
        studentLabel1->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);"));

        horizontalLayout_18->addWidget(studentLabel1, 0, Qt::AlignLeft);


        verticalLayout_12->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_4 = new QLabel(page_0);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(220, 16777215));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        horizontalLayout_19->addWidget(label_4);

        iloscPytanLabel = new QLabel(page_0);
        iloscPytanLabel->setObjectName(QString::fromUtf8("iloscPytanLabel"));
        iloscPytanLabel->setFont(font3);
        iloscPytanLabel->setStyleSheet(QString::fromUtf8("color: rgb(85, 255, 0);"));

        horizontalLayout_19->addWidget(iloscPytanLabel, 0, Qt::AlignLeft);


        verticalLayout_12->addLayout(horizontalLayout_19);

        wybierzStudenta = new QLabel(page_0);
        wybierzStudenta->setObjectName(QString::fromUtf8("wybierzStudenta"));
        wybierzStudenta->setMaximumSize(QSize(200, 30));
        QFont font4;
        font4.setPointSize(15);
        wybierzStudenta->setFont(font4);
        wybierzStudenta->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));
        wybierzStudenta->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_12->addWidget(wybierzStudenta, 0, Qt::AlignHCenter);

        comboBox = new QComboBox(page_0);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(300, 0));
        comboBox->setMaximumSize(QSize(300, 25));
        comboBox->setFont(font3);
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);"));

        verticalLayout_12->addWidget(comboBox, 0, Qt::AlignHCenter|Qt::AlignTop);


        horizontalLayout->addLayout(verticalLayout_12);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        ppTitle = new QLabel(page_0);
        ppTitle->setObjectName(QString::fromUtf8("ppTitle"));
        QFont font5;
        font5.setPointSize(11);
        ppTitle->setFont(font5);
        ppTitle->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        verticalLayout_17->addWidget(ppTitle);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        ppPlusButton = new QPushButton(page_0);
        ppPlusButton->setObjectName(QString::fromUtf8("ppPlusButton"));
        ppPlusButton->setEnabled(true);
        ppPlusButton->setMinimumSize(QSize(65, 65));
        ppPlusButton->setMaximumSize(QSize(50, 50));
        QFont font6;
        font6.setBold(true);
        ppPlusButton->setFont(font6);
        ppPlusButton->setCursor(QCursor(Qt::PointingHandCursor));
        ppPlusButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 26px;\n"
"font-size: 50px;\n"
"text-align:center;\n"
"}\n"
""));

        verticalLayout_23->addWidget(ppPlusButton, 0, Qt::AlignTop);

        ppMinusButton = new QPushButton(page_0);
        ppMinusButton->setObjectName(QString::fromUtf8("ppMinusButton"));
        ppMinusButton->setMinimumSize(QSize(65, 65));
        ppMinusButton->setMaximumSize(QSize(50, 50));
        ppMinusButton->setFont(font6);
        ppMinusButton->setCursor(QCursor(Qt::PointingHandCursor));
        ppMinusButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 26px;\n"
"font-size: 55px;\n"
"text-align:center;\n"
"}"));

        verticalLayout_23->addWidget(ppMinusButton, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout_9->addLayout(verticalLayout_23);

        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        ppNumber = new QLabel(page_0);
        ppNumber->setObjectName(QString::fromUtf8("ppNumber"));
        QFont font7;
        font7.setPointSize(50);
        ppNumber->setFont(font7);
        ppNumber->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        verticalLayout_24->addWidget(ppNumber, 0, Qt::AlignVCenter);


        horizontalLayout_9->addLayout(verticalLayout_24);


        verticalLayout_17->addLayout(horizontalLayout_9);


        horizontalLayout_2->addLayout(verticalLayout_17);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        poTitle = new QLabel(page_0);
        poTitle->setObjectName(QString::fromUtf8("poTitle"));
        poTitle->setFont(font5);
        poTitle->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        verticalLayout_18->addWidget(poTitle);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        verticalLayout_26 = new QVBoxLayout();
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        poPlusButton = new QPushButton(page_0);
        poPlusButton->setObjectName(QString::fromUtf8("poPlusButton"));
        poPlusButton->setMinimumSize(QSize(65, 65));
        poPlusButton->setMaximumSize(QSize(50, 50));
        poPlusButton->setFont(font6);
        poPlusButton->setCursor(QCursor(Qt::PointingHandCursor));
        poPlusButton->setLayoutDirection(Qt::LeftToRight);
        poPlusButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 26px;\n"
"font-size: 50px;\n"
"text-align:center;\n"
"}\n"
""));

        verticalLayout_26->addWidget(poPlusButton, 0, Qt::AlignLeft);

        poMinusButton = new QPushButton(page_0);
        poMinusButton->setObjectName(QString::fromUtf8("poMinusButton"));
        poMinusButton->setMinimumSize(QSize(65, 65));
        poMinusButton->setMaximumSize(QSize(50, 50));
        poMinusButton->setFont(font6);
        poMinusButton->setCursor(QCursor(Qt::PointingHandCursor));
        poMinusButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 26px;\n"
"font-size: 55px;\n"
"text-align:center;\n"
"}"));

        verticalLayout_26->addWidget(poMinusButton, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout_14->addLayout(verticalLayout_26);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        poNumber = new QLabel(page_0);
        poNumber->setObjectName(QString::fromUtf8("poNumber"));
        poNumber->setFont(font7);
        poNumber->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        verticalLayout_27->addWidget(poNumber);


        horizontalLayout_14->addLayout(verticalLayout_27);


        verticalLayout_18->addLayout(horizontalLayout_14);


        horizontalLayout_2->addLayout(verticalLayout_18);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        pgTitle = new QLabel(page_0);
        pgTitle->setObjectName(QString::fromUtf8("pgTitle"));
        pgTitle->setMinimumSize(QSize(0, 20));
        pgTitle->setMaximumSize(QSize(16777215, 20));
        pgTitle->setFont(font5);
        pgTitle->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        horizontalLayout_16->addWidget(pgTitle);

        pzTitle = new QLabel(page_0);
        pzTitle->setObjectName(QString::fromUtf8("pzTitle"));
        pzTitle->setMinimumSize(QSize(0, 20));
        pzTitle->setMaximumSize(QSize(16777215, 20));
        pzTitle->setFont(font5);
        pzTitle->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        horizontalLayout_16->addWidget(pzTitle);


        verticalLayout_6->addLayout(horizontalLayout_16);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        pgPlusButton = new QPushButton(page_0);
        pgPlusButton->setObjectName(QString::fromUtf8("pgPlusButton"));
        pgPlusButton->setMinimumSize(QSize(65, 65));
        pgPlusButton->setMaximumSize(QSize(50, 50));
        pgPlusButton->setFont(font6);
        pgPlusButton->setCursor(QCursor(Qt::PointingHandCursor));
        pgPlusButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 26px;\n"
"font-size: 50px;\n"
"text-align:center;\n"
"}\n"
""));

        verticalLayout_21->addWidget(pgPlusButton, 0, Qt::AlignLeft|Qt::AlignTop);

        pgMinusButton = new QPushButton(page_0);
        pgMinusButton->setObjectName(QString::fromUtf8("pgMinusButton"));
        pgMinusButton->setMinimumSize(QSize(65, 65));
        pgMinusButton->setMaximumSize(QSize(50, 50));
        pgMinusButton->setFont(font6);
        pgMinusButton->setCursor(QCursor(Qt::PointingHandCursor));
        pgMinusButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 26px;\n"
"font-size: 55px;\n"
"text-align:center;\n"
"}"));

        verticalLayout_21->addWidget(pgMinusButton, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout_4->addLayout(verticalLayout_21);

        verticalLayout_31 = new QVBoxLayout();
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        pgNumber = new QLabel(page_0);
        pgNumber->setObjectName(QString::fromUtf8("pgNumber"));
        pgNumber->setMinimumSize(QSize(0, 0));
        pgNumber->setMaximumSize(QSize(16777215, 16777215));
        QFont font8;
        font8.setPointSize(50);
        font8.setBold(false);
        pgNumber->setFont(font8);
        pgNumber->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        verticalLayout_31->addWidget(pgNumber);


        horizontalLayout_4->addLayout(verticalLayout_31);

        verticalLayout_30 = new QVBoxLayout();
        verticalLayout_30->setObjectName(QString::fromUtf8("verticalLayout_30"));
        pzPlusButton = new QPushButton(page_0);
        pzPlusButton->setObjectName(QString::fromUtf8("pzPlusButton"));
        pzPlusButton->setMinimumSize(QSize(65, 65));
        pzPlusButton->setMaximumSize(QSize(50, 50));
        pzPlusButton->setFont(font6);
        pzPlusButton->setCursor(QCursor(Qt::PointingHandCursor));
        pzPlusButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 26px;\n"
"font-size: 50px;\n"
"text-align:center;\n"
"}\n"
""));

        verticalLayout_30->addWidget(pzPlusButton, 0, Qt::AlignLeft|Qt::AlignTop);

        pzMinusButton = new QPushButton(page_0);
        pzMinusButton->setObjectName(QString::fromUtf8("pzMinusButton"));
        pzMinusButton->setMinimumSize(QSize(65, 65));
        pzMinusButton->setMaximumSize(QSize(50, 50));
        pzMinusButton->setFont(font6);
        pzMinusButton->setCursor(QCursor(Qt::PointingHandCursor));
        pzMinusButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 26px;\n"
"font-size: 55px;\n"
"text-align:center;\n"
"}"));

        verticalLayout_30->addWidget(pzMinusButton, 0, Qt::AlignLeft|Qt::AlignTop);


        horizontalLayout_4->addLayout(verticalLayout_30);

        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        pzNumber = new QLabel(page_0);
        pzNumber->setObjectName(QString::fromUtf8("pzNumber"));
        pzNumber->setMinimumSize(QSize(0, 0));
        pzNumber->setMaximumSize(QSize(16777215, 16777215));
        pzNumber->setFont(font8);
        pzNumber->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        verticalLayout_28->addWidget(pzNumber);


        horizontalLayout_4->addLayout(verticalLayout_28);


        verticalLayout_6->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_3->addLayout(horizontalLayout);

        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        verticalLayout_2 = new QVBoxLayout(page_1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label1 = new QLabel(page_1);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setMaximumSize(QSize(85, 16777215));
        QFont font9;
        font9.setPointSize(14);
        font9.setBold(true);
        label1->setFont(font9);
        label1->setStyleSheet(QString::fromUtf8("color: rgb(148,210,47);"));

        horizontalLayout_20->addWidget(label1);

        studentLabel2 = new QLabel(page_1);
        studentLabel2->setObjectName(QString::fromUtf8("studentLabel2"));
        studentLabel2->setFont(font3);
        studentLabel2->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        horizontalLayout_20->addWidget(studentLabel2);


        verticalLayout_2->addLayout(horizontalLayout_20);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        tyt1 = new QLabel(page_1);
        tyt1->setObjectName(QString::fromUtf8("tyt1"));
        QFont font10;
        font10.setPointSize(18);
        tyt1->setFont(font10);
        tyt1->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        verticalLayout_10->addWidget(tyt1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        pyt1 = new QTextBrowser(page_1);
        pyt1->setObjectName(QString::fromUtf8("pyt1"));
        QFont font11;
        font11.setPointSize(13);
        pyt1->setFont(font11);
        pyt1->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"\n"
""));

        horizontalLayout_12->addWidget(pyt1);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        losujButton1 = new QPushButton(page_1);
        losujButton1->setObjectName(QString::fromUtf8("losujButton1"));
        losujButton1->setEnabled(true);
        losujButton1->setMinimumSize(QSize(80, 27));
        losujButton1->setMaximumSize(QSize(80, 27));
        losujButton1->setFont(font3);
        losujButton1->setCursor(QCursor(Qt::PointingHandCursor));
        losujButton1->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
""));

        verticalLayout_14->addWidget(losujButton1);

        dobrzeButton1 = new QPushButton(page_1);
        dobrzeButton1->setObjectName(QString::fromUtf8("dobrzeButton1"));
        dobrzeButton1->setFont(font3);
        dobrzeButton1->setCursor(QCursor(Qt::PointingHandCursor));
        dobrzeButton1->setStyleSheet(QString::fromUtf8("QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:rgb(148,210,47);\n"
"color: rgb(43, 57, 68);\n"
"}"));

        verticalLayout_14->addWidget(dobrzeButton1);

        zleButton1 = new QPushButton(page_1);
        zleButton1->setObjectName(QString::fromUtf8("zleButton1"));
        zleButton1->setFont(font3);
        zleButton1->setCursor(QCursor(Qt::PointingHandCursor));
        zleButton1->setStyleSheet(QString::fromUtf8("QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:rgb(148,210,47);\n"
"color: rgb(43, 57, 68);\n"
"}"));

        verticalLayout_14->addWidget(zleButton1);


        horizontalLayout_12->addLayout(verticalLayout_14);


        verticalLayout_10->addLayout(horizontalLayout_12);

        tyt2 = new QLabel(page_1);
        tyt2->setObjectName(QString::fromUtf8("tyt2"));
        tyt2->setFont(font10);
        tyt2->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        verticalLayout_10->addWidget(tyt2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pyt2 = new QTextBrowser(page_1);
        pyt2->setObjectName(QString::fromUtf8("pyt2"));
        pyt2->setFont(font11);
        pyt2->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"\n"
""));

        horizontalLayout_6->addWidget(pyt2);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        losujButton2 = new QPushButton(page_1);
        losujButton2->setObjectName(QString::fromUtf8("losujButton2"));
        losujButton2->setFont(font3);
        losujButton2->setCursor(QCursor(Qt::PointingHandCursor));
        losujButton2->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
""));

        verticalLayout_11->addWidget(losujButton2);

        dobrzeButton2 = new QPushButton(page_1);
        dobrzeButton2->setObjectName(QString::fromUtf8("dobrzeButton2"));
        dobrzeButton2->setFont(font3);
        dobrzeButton2->setCursor(QCursor(Qt::PointingHandCursor));
        dobrzeButton2->setStyleSheet(QString::fromUtf8("QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:rgb(148,210,47);\n"
"color: rgb(43, 57, 68);\n"
"}"));

        verticalLayout_11->addWidget(dobrzeButton2);

        zleButton2 = new QPushButton(page_1);
        zleButton2->setObjectName(QString::fromUtf8("zleButton2"));
        zleButton2->setMinimumSize(QSize(80, 27));
        zleButton2->setMaximumSize(QSize(80, 27));
        zleButton2->setFont(font3);
        zleButton2->setCursor(QCursor(Qt::PointingHandCursor));
        zleButton2->setStyleSheet(QString::fromUtf8("QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:rgb(148,210,47);\n"
"color: rgb(43, 57, 68);\n"
"}"));

        verticalLayout_11->addWidget(zleButton2);


        horizontalLayout_6->addLayout(verticalLayout_11);


        verticalLayout_10->addLayout(horizontalLayout_6);

        tyt3 = new QLabel(page_1);
        tyt3->setObjectName(QString::fromUtf8("tyt3"));
        tyt3->setFont(font10);
        tyt3->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        verticalLayout_10->addWidget(tyt3);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pyt3 = new QTextBrowser(page_1);
        pyt3->setObjectName(QString::fromUtf8("pyt3"));
        pyt3->setFont(font11);
        pyt3->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"\n"
""));

        horizontalLayout_10->addWidget(pyt3);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        losujButton3 = new QPushButton(page_1);
        losujButton3->setObjectName(QString::fromUtf8("losujButton3"));
        losujButton3->setMinimumSize(QSize(80, 27));
        losujButton3->setMaximumSize(QSize(80, 27));
        losujButton3->setFont(font3);
        losujButton3->setCursor(QCursor(Qt::PointingHandCursor));
        losujButton3->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
""));

        verticalLayout_13->addWidget(losujButton3);

        dobrzeButton3 = new QPushButton(page_1);
        dobrzeButton3->setObjectName(QString::fromUtf8("dobrzeButton3"));
        dobrzeButton3->setFont(font3);
        dobrzeButton3->setCursor(QCursor(Qt::PointingHandCursor));
        dobrzeButton3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:rgb(148,210,47);\n"
"color: rgb(43, 57, 68);\n"
"}"));

        verticalLayout_13->addWidget(dobrzeButton3);

        zleButton3 = new QPushButton(page_1);
        zleButton3->setObjectName(QString::fromUtf8("zleButton3"));
        zleButton3->setFont(font3);
        zleButton3->setCursor(QCursor(Qt::PointingHandCursor));
        zleButton3->setStyleSheet(QString::fromUtf8("QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:rgb(148,210,47);\n"
"color: rgb(43, 57, 68);\n"
"}"));

        verticalLayout_13->addWidget(zleButton3);


        horizontalLayout_10->addLayout(verticalLayout_13);


        verticalLayout_10->addLayout(horizontalLayout_10);


        verticalLayout_2->addLayout(verticalLayout_10);

        dalejButton = new QPushButton(page_1);
        dalejButton->setObjectName(QString::fromUtf8("dalejButton"));
        dalejButton->setMinimumSize(QSize(300, 0));
        dalejButton->setMaximumSize(QSize(400, 16777215));
        QFont font12;
        font12.setPointSize(23);
        dalejButton->setFont(font12);
        dalejButton->setCursor(QCursor(Qt::PointingHandCursor));
        dalejButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(dalejButton, 0, Qt::AlignHCenter);

        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setEnabled(true);
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        dane_2 = new QLabel(page_2);
        dane_2->setObjectName(QString::fromUtf8("dane_2"));
        dane_2->setMaximumSize(QSize(85, 16777215));
        dane_2->setFont(font9);
        dane_2->setStyleSheet(QString::fromUtf8("color: rgb(148,210,47);"));

        horizontalLayout_8->addWidget(dane_2);

        studentLabel3 = new QLabel(page_2);
        studentLabel3->setObjectName(QString::fromUtf8("studentLabel3"));
        studentLabel3->setFont(font3);
        studentLabel3->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        horizontalLayout_8->addWidget(studentLabel3);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        tyt4 = new QLabel(page_2);
        tyt4->setObjectName(QString::fromUtf8("tyt4"));
        tyt4->setEnabled(true);
        tyt4->setFont(font10);
        tyt4->setStyleSheet(QString::fromUtf8("color: rgb(245,249,250);"));

        verticalLayout_15->addWidget(tyt4);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        pyt4 = new QTextBrowser(page_2);
        pyt4->setObjectName(QString::fromUtf8("pyt4"));
        pyt4->setEnabled(true);
        pyt4->setFont(font10);
        pyt4->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"\n"
""));

        horizontalLayout_13->addWidget(pyt4);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        losujButton4 = new QPushButton(page_2);
        losujButton4->setObjectName(QString::fromUtf8("losujButton4"));
        losujButton4->setEnabled(true);
        losujButton4->setFont(font3);
        losujButton4->setCursor(QCursor(Qt::PointingHandCursor));
        losujButton4->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
""));

        verticalLayout_16->addWidget(losujButton4);

        dobrzeButton4 = new QPushButton(page_2);
        dobrzeButton4->setObjectName(QString::fromUtf8("dobrzeButton4"));
        dobrzeButton4->setEnabled(true);
        dobrzeButton4->setFont(font3);
        dobrzeButton4->setCursor(QCursor(Qt::PointingHandCursor));
        dobrzeButton4->setStyleSheet(QString::fromUtf8("QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:rgb(148,210,47);\n"
"color: rgb(43, 57, 68);\n"
"}"));

        verticalLayout_16->addWidget(dobrzeButton4);

        czescButton = new QPushButton(page_2);
        czescButton->setObjectName(QString::fromUtf8("czescButton"));
        czescButton->setEnabled(true);
        czescButton->setFont(font3);
        czescButton->setCursor(QCursor(Qt::PointingHandCursor));
        czescButton->setStyleSheet(QString::fromUtf8("QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:rgb(148,210,47);\n"
"color: rgb(43, 57, 68);\n"
"}"));

        verticalLayout_16->addWidget(czescButton);

        zleButton4 = new QPushButton(page_2);
        zleButton4->setObjectName(QString::fromUtf8("zleButton4"));
        zleButton4->setEnabled(true);
        zleButton4->setFont(font3);
        zleButton4->setCursor(QCursor(Qt::PointingHandCursor));
        zleButton4->setStyleSheet(QString::fromUtf8("QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
"QPushButton:disabled {\n"
"background-color:rgb(148,210,47);\n"
"color: rgb(43, 57, 68);\n"
"}"));

        verticalLayout_16->addWidget(zleButton4);


        horizontalLayout_13->addLayout(verticalLayout_16);


        verticalLayout_15->addLayout(horizontalLayout_13);


        verticalLayout_5->addLayout(verticalLayout_15);

        koniecButton = new QPushButton(page_2);
        koniecButton->setObjectName(QString::fromUtf8("koniecButton"));
        koniecButton->setEnabled(true);
        koniecButton->setMinimumSize(QSize(300, 0));
        koniecButton->setMaximumSize(QSize(400, 16777215));
        koniecButton->setFont(font12);
        koniecButton->setCursor(QCursor(Qt::PointingHandCursor));
        koniecButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed\n"
"{\n"
" background-color: rgb(148,210,47);\n"
"}\n"
"QPushButton {   \n"
"background-color: rgb(43, 57, 68);\n"
"color: rgb(148,210,47);\n"
"border-color: rgb(148,210,47);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-radius: 7px;\n"
"}\n"
""));

        verticalLayout_5->addWidget(koniecButton, 0, Qt::AlignHCenter);

        stackedWidget->addWidget(page_2);

        verticalLayout_7->addWidget(stackedWidget);


        verticalLayout_4->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1500, 33));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        rozpocznijButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "Egzamin z Teorii Programowania Komputer\303\263w", nullptr));
        dodajStudentowButton->setText(QCoreApplication::translate("MainWindow", "Dodaj list\304\231 student\303\263w", nullptr));
        rozpocznijButton->setText(QCoreApplication::translate("MainWindow", "ROZPOCZNIJ", nullptr));
        dodajPytaniaButton->setText(QCoreApplication::translate("MainWindow", "Dodaj pytania", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Student:", nullptr));
        studentLabel1->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ilo\305\233\304\207 pyta\305\204 dodatkowych:", nullptr));
        iloscPytanLabel->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        wybierzStudenta->setText(QCoreApplication::translate("MainWindow", "Wybierz studenta:", nullptr));
        ppTitle->setText(QCoreApplication::translate("MainWindow", "Programowanie proceduralne", nullptr));
        ppPlusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        ppMinusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        ppNumber->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        poTitle->setText(QCoreApplication::translate("MainWindow", "Programowania obiektowego", nullptr));
        poPlusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        poMinusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        poNumber->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pgTitle->setText(QCoreApplication::translate("MainWindow", "Programowanie generyczne", nullptr));
        pzTitle->setText(QCoreApplication::translate("MainWindow", "Poziom zaawansowany", nullptr));
        pgPlusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pgMinusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pgNumber->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pzPlusButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pzMinusButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pzNumber->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "Student:", nullptr));
        studentLabel2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tyt1->setText(QCoreApplication::translate("MainWindow", "Programowanie proceduralne:", nullptr));
        pyt1->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\"><br /></p></body></html>", nullptr));
        losujButton1->setText(QCoreApplication::translate("MainWindow", "Losuj", nullptr));
        dobrzeButton1->setText(QCoreApplication::translate("MainWindow", "Dobrze", nullptr));
        zleButton1->setText(QCoreApplication::translate("MainWindow", "\305\271le", nullptr));
        tyt2->setText(QCoreApplication::translate("MainWindow", "Programowanie obiektowe:", nullptr));
        pyt2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\"><br /></p></body></html>", nullptr));
        losujButton2->setText(QCoreApplication::translate("MainWindow", "Losuj", nullptr));
        dobrzeButton2->setText(QCoreApplication::translate("MainWindow", "Dobrze", nullptr));
        zleButton2->setText(QCoreApplication::translate("MainWindow", "\305\271le", nullptr));
        tyt3->setText(QCoreApplication::translate("MainWindow", "Programowanie generyczne:", nullptr));
        pyt3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:12pt;\"><br /></p></body></html>", nullptr));
        losujButton3->setText(QCoreApplication::translate("MainWindow", "Losuj", nullptr));
        dobrzeButton3->setText(QCoreApplication::translate("MainWindow", "Dobrze", nullptr));
        zleButton3->setText(QCoreApplication::translate("MainWindow", "\305\271le", nullptr));
        dalejButton->setText(QCoreApplication::translate("MainWindow", "Dalej", nullptr));
        dane_2->setText(QCoreApplication::translate("MainWindow", "Student:", nullptr));
        studentLabel3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tyt4->setText(QCoreApplication::translate("MainWindow", "Pytanie z poziomu zaawansowanego:", nullptr));
        pyt4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:18pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:27pt;\"><br /></p></body></html>", nullptr));
        losujButton4->setText(QCoreApplication::translate("MainWindow", "Losuj", nullptr));
        dobrzeButton4->setText(QCoreApplication::translate("MainWindow", "Dobrze", nullptr));
        czescButton->setText(QCoreApplication::translate("MainWindow", "Cz\304\231\305\233ciowo", nullptr));
        zleButton4->setText(QCoreApplication::translate("MainWindow", "\305\271le", nullptr));
        koniecButton->setText(QCoreApplication::translate("MainWindow", "Zako\305\204cz ocenianie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
