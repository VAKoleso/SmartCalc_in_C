/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *strochka;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_log;
    QPushButton *pushButton_ste;
    QPushButton *pushButton_lev;
    QPushButton *pushButton_prav;
    QPushButton *pushButton_ost;
    QPushButton *pushButton_del;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_0;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_x;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_toch;
    QPushButton *pushButton_umn;
    QPushButton *pushButton_raz;
    QPushButton *pushButton_sum;
    QPushButton *pushButton_rav;
    QPushButton *pushButton_sin;
    QLineEdit *Strochka_2;
    QPushButton *pushButton_c;
    QPushButton *pushButton_ac;
    QPushButton *pushButton_c_2;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QSpacerItem *verticalSpacer;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_cred;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(513, 591);
        MainWindow->setMinimumSize(QSize(513, 591));
        MainWindow->setMaximumSize(QSize(513, 591));
        QPalette palette;
        QBrush brush(QColor(64, 64, 64, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #404040;\n"
" border-color: #BEBEBE;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        strochka = new QLineEdit(centralwidget);
        strochka->setObjectName(QString::fromUtf8("strochka"));
        strochka->setGeometry(QRect(65, 25, 421, 47));
        QFont font;
        font.setPointSize(26);
        strochka->setFont(font);
        strochka->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: rgb(255, 255, 255);\n"
""));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(28, 380, 82, 47));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Helvetica")});
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setItalic(true);
        pushButton_ln->setFont(font1);
        pushButton_ln->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));
        pushButton_sqrt->setGeometry(QRect(28, 451, 82, 47));
        pushButton_sqrt->setFont(font1);
        pushButton_sqrt->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(28, 238, 82, 47));
        pushButton_cos->setFont(font1);
        pushButton_cos->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(28, 309, 82, 47));
        pushButton_tan->setFont(font1);
        pushButton_tan->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_tan->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName(QString::fromUtf8("pushButton_asin"));
        pushButton_asin->setGeometry(QRect(124, 167, 82, 47));
        pushButton_asin->setFont(font1);
        pushButton_asin->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_asin->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName(QString::fromUtf8("pushButton_acos"));
        pushButton_acos->setGeometry(QRect(124, 238, 82, 47));
        pushButton_acos->setFont(font1);
        pushButton_acos->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName(QString::fromUtf8("pushButton_atan"));
        pushButton_atan->setGeometry(QRect(124, 309, 82, 47));
        pushButton_atan->setFont(font1);
        pushButton_atan->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName(QString::fromUtf8("pushButton_log"));
        pushButton_log->setGeometry(QRect(124, 380, 82, 47));
        pushButton_log->setFont(font1);
        pushButton_log->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_ste = new QPushButton(centralwidget);
        pushButton_ste->setObjectName(QString::fromUtf8("pushButton_ste"));
        pushButton_ste->setGeometry(QRect(124, 451, 82, 47));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Helvetica")});
        font2.setPointSize(24);
        font2.setBold(true);
        pushButton_ste->setFont(font2);
        pushButton_ste->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_ste->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_lev = new QPushButton(centralwidget);
        pushButton_lev->setObjectName(QString::fromUtf8("pushButton_lev"));
        pushButton_lev->setGeometry(QRect(220, 167, 47, 47));
        pushButton_lev->setFont(font2);
        pushButton_lev->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_lev->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_prav = new QPushButton(centralwidget);
        pushButton_prav->setObjectName(QString::fromUtf8("pushButton_prav"));
        pushButton_prav->setGeometry(QRect(281, 167, 47, 47));
        pushButton_prav->setFont(font2);
        pushButton_prav->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_prav->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_ost = new QPushButton(centralwidget);
        pushButton_ost->setObjectName(QString::fromUtf8("pushButton_ost"));
        pushButton_ost->setGeometry(QRect(342, 167, 47, 47));
        pushButton_ost->setFont(font2);
        pushButton_ost->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_ost->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName(QString::fromUtf8("pushButton_del"));
        pushButton_del->setGeometry(QRect(403, 167, 82, 47));
        pushButton_del->setFont(font2);
        pushButton_del->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_del->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(220, 238, 47, 47));
        pushButton_7->setFont(font2);
        pushButton_7->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(220, 309, 47, 47));
        pushButton_4->setFont(font2);
        pushButton_4->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(220, 380, 47, 47));
        pushButton_1->setFont(font2);
        pushButton_1->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(220, 451, 47, 47));
        pushButton_0->setFont(font2);
        pushButton_0->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(281, 238, 47, 47));
        pushButton_8->setFont(font2);
        pushButton_8->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(281, 309, 47, 47));
        pushButton_5->setFont(font2);
        pushButton_5->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(281, 380, 47, 47));
        pushButton_2->setFont(font2);
        pushButton_2->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_x = new QPushButton(centralwidget);
        pushButton_x->setObjectName(QString::fromUtf8("pushButton_x"));
        pushButton_x->setGeometry(QRect(281, 451, 47, 47));
        pushButton_x->setFont(font2);
        pushButton_x->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(342, 238, 47, 47));
        pushButton_9->setFont(font2);
        pushButton_9->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(342, 309, 47, 47));
        pushButton_6->setFont(font2);
        pushButton_6->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(342, 380, 47, 47));
        pushButton_3->setFont(font2);
        pushButton_3->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_toch = new QPushButton(centralwidget);
        pushButton_toch->setObjectName(QString::fromUtf8("pushButton_toch"));
        pushButton_toch->setGeometry(QRect(342, 451, 47, 47));
        pushButton_toch->setFont(font2);
        pushButton_toch->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_toch->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(16, 94, 46);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
""));
        pushButton_umn = new QPushButton(centralwidget);
        pushButton_umn->setObjectName(QString::fromUtf8("pushButton_umn"));
        pushButton_umn->setGeometry(QRect(403, 238, 82, 47));
        pushButton_umn->setFont(font2);
        pushButton_umn->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_umn->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}"));
        pushButton_raz = new QPushButton(centralwidget);
        pushButton_raz->setObjectName(QString::fromUtf8("pushButton_raz"));
        pushButton_raz->setGeometry(QRect(403, 309, 82, 47));
        pushButton_raz->setFont(font2);
        pushButton_raz->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_raz->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}"));
        pushButton_sum = new QPushButton(centralwidget);
        pushButton_sum->setObjectName(QString::fromUtf8("pushButton_sum"));
        pushButton_sum->setGeometry(QRect(403, 380, 82, 47));
        pushButton_sum->setFont(font2);
        pushButton_sum->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_sum->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}"));
        pushButton_rav = new QPushButton(centralwidget);
        pushButton_rav->setObjectName(QString::fromUtf8("pushButton_rav"));
        pushButton_rav->setGeometry(QRect(403, 451, 82, 47));
        pushButton_rav->setFont(font2);
        pushButton_rav->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_rav->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}"));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(28, 167, 82, 47));
        pushButton_sin->setFont(font1);
        pushButton_sin->setCursor(QCursor(Qt::ClosedHandCursor));
        pushButton_sin->setAutoFillBackground(false);
        pushButton_sin->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"    color: rgb(144, 143, 146);\n"
"background-color: rgb(44, 116, 80);\n"
"border-color: rgb(144, 143, 146);\n"
" border-style: solid;\n"
" border-width:2px;\n"
" border-radius:10px;\n"
"}\n"
" max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;"));
        pushButton_sin->setAutoRepeat(false);
        pushButton_sin->setAutoExclusive(false);
        Strochka_2 = new QLineEdit(centralwidget);
        Strochka_2->setObjectName(QString::fromUtf8("Strochka_2"));
        Strochka_2->setGeometry(QRect(120, 96, 271, 47));
        QFont font3;
        font3.setPointSize(24);
        Strochka_2->setFont(font3);
        Strochka_2->setStyleSheet(QString::fromUtf8("background-color: #252525;\n"
"color: rgb(255, 255, 255);\n"
""));
        pushButton_c = new QPushButton(centralwidget);
        pushButton_c->setObjectName(QString::fromUtf8("pushButton_c"));
        pushButton_c->setGeometry(QRect(340, 95, 47, 47));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Helvetica")});
        font4.setPointSize(24);
        pushButton_c->setFont(font4);
        pushButton_c->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_c->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgba(48, 48, 48, 0);\n"
"color: \"white\";\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(144, 143, 146);\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"    color: \"black\";\n"
"}\n"
""));
        pushButton_ac = new QPushButton(centralwidget);
        pushButton_ac->setObjectName(QString::fromUtf8("pushButton_ac"));
        pushButton_ac->setGeometry(QRect(403, 96, 82, 47));
        pushButton_ac->setFont(font4);
        pushButton_ac->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_ac->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"background-color: #828282;\n"
"border-color: #BEBEBE;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:10px;\n"
"max-width:80px;\n"
" max-height:45px;\n"
" min-width:80px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(230, 230, 230);\n"
"background-color: #606060;\n"
"border-color: #BEBEBE;\n"
"border-style: solid;\n"
"border-width:1px;\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:pressed {\n"
"color: \"white\";\n"
"background-color: \"black\";\n"
"border-color: \"white\";\n"
"border-style: solid;\n"
"border-width:2px;\n"
"border-radius:10px;\n"
"}"));
        pushButton_c_2 = new QPushButton(centralwidget);
        pushButton_c_2->setObjectName(QString::fromUtf8("pushButton_c_2"));
        pushButton_c_2->setGeometry(QRect(436, 25, 47, 47));
        pushButton_c_2->setFont(font4);
        pushButton_c_2->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton_c_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgba(48, 48, 48, 0);\n"
"color: \"white\";\n"
" max-width:45px;\n"
" max-height:45px;\n"
" min-width:45px;\n"
" min-height:45px;\n"
"}\n"
"QPushButton:hover {\n"
"color: rgb(144, 143, 146);\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"    color: \"black\";\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 100, 58, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("PT Sans Caption")});
        font5.setPointSize(36);
        label->setFont(font5);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 23, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout->addWidget(radioButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        radioButton_2 = new QRadioButton(layoutWidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setMinimumSize(QSize(0, 0));
        radioButton_2->setSizeIncrement(QSize(0, 0));
        radioButton_2->setBaseSize(QSize(0, 0));

        verticalLayout->addWidget(radioButton_2);

        pushButton_cred = new QPushButton(centralwidget);
        pushButton_cred->setObjectName(QString::fromUtf8("pushButton_cred"));
        pushButton_cred->setGeometry(QRect(130, 511, 261, 31));
        pushButton_cred->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #828282;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 513, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_ste->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_lev->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        pushButton_prav->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        pushButton_ost->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_del->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_toch->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_umn->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_raz->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_rav->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_c->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        pushButton_ac->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButton_c_2->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "x =", nullptr));
        radioButton->setText(QString());
        radioButton_2->setText(QString());
        pushButton_cred->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271 \320\272\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
