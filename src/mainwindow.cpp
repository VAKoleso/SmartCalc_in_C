#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    grafic = new Grafic;
    credit = new Credit;
    connect(this,&MainWindow::signal, grafic, &Grafic::slot);
    ui->setupUi(this);
    ui->strochka->setEnabled(false);
    ui->Strochka_2->setEnabled(false);
    ui->strochka->setStyleSheet("color: white; background-color: #252525; border-color: #BEBEBE");
    ui->Strochka_2->setStyleSheet("color: white; background-color: #252525; border-color: #BEBEBE");

    connect(ui->pushButton_0, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_acos, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_asin, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_atan, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_cos, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_del, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_lev, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_ln, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_log, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_ost, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_prav, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_raz, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_sin, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_sqrt, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_ste, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_sum, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_tan, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_toch, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_umn, SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->pushButton_x, SIGNAL(clicked()),this,SLOT(digits_numbers()));

}



MainWindow::~MainWindow() {
    delete ui;
}



void MainWindow::digits_numbers() {
    QPushButton *button = (QPushButton *)sender();
    QString new_label;
    if(ui->radioButton->isChecked()) {
        if(button->text() == "sin") {
    new_label = ui->strochka->text() + "sin(";
    ui->strochka->setText(new_label);
        }else if(button->text() == "cos") {
                new_label = ui->strochka->text() + "cos(";
                ui->strochka->setText(new_label);
        }else if(button->text() == "tan") {
                new_label = ui->strochka->text() + "tan(";
                ui->strochka->setText(new_label);
        }else if(button->text() == "ln") {
                new_label = ui->strochka->text() + "ln(";
                ui->strochka->setText(new_label);
        }else if(button->text() == "sqrt") {
                new_label = ui->strochka->text() + "sqrt(";
                ui->strochka->setText(new_label);
        }else if(button->text() == "asin") {
                new_label = ui->strochka->text() + "asin(";
                ui->strochka->setText(new_label);
        }else if(button->text() == "acos") {
                new_label = ui->strochka->text() + "acos(";
                ui->strochka->setText(new_label);
        }else if(button->text() == "atan") {
                new_label = ui->strochka->text() + "atan(";
                ui->strochka->setText(new_label);
        }else if(button->text() == "log") {
                new_label = ui->strochka->text() + "log(";
                ui->strochka->setText(new_label);
        } else {
    new_label = ui->strochka->text() + button->text();
    ui->strochka->setText(new_label);
        }
    } else if(ui->radioButton_2->isChecked()) {
        if((button->text() >= "0" && button->text() <="9") || (button->text() == "." && !ui->Strochka_2->text().contains('.')) || (button->text() == "-" && ui->Strochka_2->text() == "\0")) {
        new_label = ui->Strochka_2->text() + button->text();
        ui->Strochka_2->setText(new_label);
        }
    }
}



void MainWindow::on_pushButton_ac_clicked()
{
 if(ui->radioButton->isChecked()) {
    ui->strochka->clear();
   } else {
     ui->Strochka_2->clear();
 }
}


void MainWindow::on_pushButton_c_2_clicked()
{
    QString tmp_strochka = ui->strochka->text();
    if(tmp_strochka.endsWith("asin(") || ui->strochka->text().endsWith("acos(") || ui->strochka->text().endsWith("atan(") || ui->strochka->text().endsWith("sqrt(")) {
        tmp_strochka.chop(5);
    } else if (tmp_strochka.endsWith("sin(") || tmp_strochka.endsWith("cos(") || tmp_strochka.endsWith("tan(") || tmp_strochka.endsWith("log(")) {
        tmp_strochka.chop(4);
    } else if (tmp_strochka.endsWith("ln(")) {
        tmp_strochka.chop(3);
    } else {
        tmp_strochka.chop(1);
    }
    ui->strochka->setText(tmp_strochka);
}


void MainWindow::on_pushButton_c_clicked()
{
    QString tmp_Strochka_2 = ui->Strochka_2->text();
    tmp_Strochka_2.chop(1);
    ui->Strochka_2->setText(tmp_Strochka_2);
}


void MainWindow::on_pushButton_rav_clicked()
{
    QString tmp_strochka = ui->strochka->text();
    QString tmp_Strochka_2 = ui->Strochka_2->text();
    if(tmp_strochka.isEmpty()) {

    } else {
        std::string tmp_input_str = tmp_strochka.toUtf8().data();
        char input_str[256] = "\0";
        strcpy(input_str, tmp_input_str.c_str());
        std::string tmp_input_str_2 = tmp_Strochka_2.toUtf8().data();
        char input_str_x[256] = "\0";
        strcpy(input_str_x, tmp_input_str_2.c_str());
        setlocale(LC_NUMERIC, "C");
        QString res = QString("%1").arg(s21_calc(input_str, input_str_x));
        if(tmp_Strochka_2.isEmpty() && tmp_strochka.contains('x')  && !res.contains("ERROR")) {
             grafic->show();
             emit signal(tmp_strochka);
        } else {
        ui->strochka->setText(res);
    }
    }
    }



void MainWindow::on_pushButton_cred_clicked() {
    credit->show();
}

