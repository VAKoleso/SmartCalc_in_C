#include "credit.h"
#include "ui_credit.h"

#include <iostream>
#include <QValidator>
#include <QLineEdit>
#include <QDoubleValidator>
#include <QMessageBox>


Credit::Credit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Credit)
{

    ui->setupUi(this);
    ui->lineEdit_summ->setValidator( new QDoubleValidator(0, 100, 2, this) );
    ui->lineEdit_god->setValidator( new QDoubleValidator(0, 100, 0, this) );
    ui->lineEdit_mes->setValidator( new QDoubleValidator(0, 100, 0, this) );
    ui->lineEdit_staf->setValidator( new QDoubleValidator(0, 100, 2, this) );
    ui->lineEdit_one->setEnabled(false);
    ui->lineEdit_two->setEnabled(false);
    ui->lineEdit_pere->setEnabled(false);
    ui->lineEdit_res->setEnabled(false);

}

Credit::~Credit()
{
    delete ui;
}



void Credit::on_pushButton_clicked() {
    bool ok1, ok2, ok3, ok4;
    double tmp_srok = 0;
    double tmp_summ = ui->lineEdit_summ->text().toDouble(&ok1);
     double tmp_staf = ui->lineEdit_staf->text().toDouble(&ok2);
    double god = ui->lineEdit_god->text().toDouble(&ok3);
    double mes = ui->lineEdit_mes->text().toDouble(&ok4);

    if(ok1) {
    if(ui->radioButton->isChecked()) {

    if (ui->lineEdit_god->text().isEmpty()) {
     god = 0;
    }
    if(ui->lineEdit_mes->text().isEmpty())  {
     mes = 0;
    }
     tmp_srok = god * 12  + mes;


    double staf_v_mec = tmp_staf / 100 / 12;
    double tmp_one = tmp_summ *(staf_v_mec + (staf_v_mec / (pow((1 + staf_v_mec), tmp_srok ) - 1)));
    double obchaya_symm = tmp_one * tmp_srok;
    double pereplata = obchaya_symm - tmp_summ;


    QString one = QString::number(tmp_one, 'f' , 2);
    ui->lineEdit_one->setText(one);
    ui->lineEdit_two->setText(one);
    QString tmp_pereplata = QString::number(pereplata, 'f' , 2);
    ui->lineEdit_pere->setText(tmp_pereplata);
    QString tmp_obchaya = QString::number(obchaya_symm, 'f' , 2);
    ui->lineEdit_res->setText(tmp_obchaya);
    } else if(ui->radioButton_2->isChecked()) {

        double tmp_summ = ui->lineEdit_summ->text().toDouble();

        if (ui->lineEdit_god->text().isEmpty()) {
         tmp_srok = mes;
        } else {
            tmp_srok = god * 12  + mes;
        }

        double rav_dolya = tmp_summ / tmp_srok;
        double staf_v_mec = tmp_staf / 100 / 12;
        double ostatok = tmp_summ;
        double pereplata = 0.0;
        double tmp_one = tmp_summ * staf_v_mec + rav_dolya;
        double tmp_two = 0;

        for(int i = tmp_srok; i > 0; i--) {
            if (i == 1){
                tmp_two = ostatok * staf_v_mec + rav_dolya;
            }
            pereplata += ostatok * staf_v_mec;
            ostatok -= rav_dolya;
        }
        double obchaya_symm = pereplata + tmp_summ;
        QString one = QString::number(tmp_one, 'f' , 2);
        ui->lineEdit_one->setText(one);
        QString two = QString::number(tmp_two, 'f' , 2);
        ui->lineEdit_two->setText(two);
        QString res_pereplata = QString::number(pereplata, 'f' , 2);
        ui->lineEdit_pere->setText(res_pereplata);
        QString tmp_obchaya = QString::number(obchaya_symm, 'f' , 2);
        ui->lineEdit_res->setText(tmp_obchaya);
     }

} else {
 QMessageBox * box = new QMessageBox;
 box->setWindowTitle("ERROR!");
 box->setText("ERROR!!!");
 box->show();

    }
}

