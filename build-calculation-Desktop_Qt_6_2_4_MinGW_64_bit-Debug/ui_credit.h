/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QLineEdit *lineEdit_srok;
    QLineEdit *lineEdit_staf;
    QLineEdit *lineEdit_summ;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *lineEdit_one;
    QLineEdit *lineEdit_pere;
    QLineEdit *lineEdit_res;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QLineEdit *lineEdit_two;
    QLabel *label_7;

    void setupUi(QWidget *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->resize(496, 573);
        lineEdit_srok = new QLineEdit(Credit);
        lineEdit_srok->setObjectName(QString::fromUtf8("lineEdit_srok"));
        lineEdit_srok->setGeometry(QRect(60, 170, 161, 51));
        lineEdit_staf = new QLineEdit(Credit);
        lineEdit_staf->setObjectName(QString::fromUtf8("lineEdit_staf"));
        lineEdit_staf->setGeometry(QRect(230, 170, 231, 51));
        lineEdit_summ = new QLineEdit(Credit);
        lineEdit_summ->setObjectName(QString::fromUtf8("lineEdit_summ"));
        lineEdit_summ->setGeometry(QRect(60, 80, 161, 51));
        lineEdit_summ->setMaximumSize(QSize(3242424, 16777215));
        radioButton = new QRadioButton(Credit);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(80, 240, 121, 22));
        radioButton_2 = new QRadioButton(Credit);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(260, 240, 161, 22));
        lineEdit_one = new QLineEdit(Credit);
        lineEdit_one->setObjectName(QString::fromUtf8("lineEdit_one"));
        lineEdit_one->setGeometry(QRect(50, 340, 113, 24));
        lineEdit_pere = new QLineEdit(Credit);
        lineEdit_pere->setObjectName(QString::fromUtf8("lineEdit_pere"));
        lineEdit_pere->setGeometry(QRect(240, 370, 113, 24));
        lineEdit_res = new QLineEdit(Credit);
        lineEdit_res->setObjectName(QString::fromUtf8("lineEdit_res"));
        lineEdit_res->setGeometry(QRect(180, 450, 113, 24));
        label = new QLabel(Credit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 39, 421, 51));
        label_2 = new QLabel(Credit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 150, 91, 16));
        label_3 = new QLabel(Credit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(300, 150, 121, 16));
        label_4 = new QLabel(Credit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 310, 151, 20));
        label_5 = new QLabel(Credit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(240, 340, 141, 16));
        label_6 = new QLabel(Credit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(190, 420, 111, 16));
        pushButton = new QPushButton(Credit);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 290, 80, 24));
        lineEdit_two = new QLineEdit(Credit);
        lineEdit_two->setObjectName(QString::fromUtf8("lineEdit_two"));
        lineEdit_two->setGeometry(QRect(60, 390, 113, 24));
        label_7 = new QLabel(Credit);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 370, 111, 21));

        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QWidget *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "Form", nullptr));
        radioButton->setText(QCoreApplication::translate("Credit", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\271", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Credit", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271", nullptr));
        label->setText(QCoreApplication::translate("Credit", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Credit", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("Credit", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("Credit", "\320\237\320\265\321\200\320\262\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_5->setText(QCoreApplication::translate("Credit", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203", nullptr));
        label_6->setText(QCoreApplication::translate("Credit", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("Credit", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_7->setText(QCoreApplication::translate("Credit", "\320\237\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\271 \320\237\320\273\320\260\321\202\320\265\320\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
