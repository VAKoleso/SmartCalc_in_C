#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#ifdef __cplusplus
extern "C" {
#endif
#include "s21_calc.h"
#ifdef __cplusplus
}
#endif

#include <grafic.h>
#include <credit.h>
#include <QMainWindow>
#include <QtWidgets>
#include "qcustomplot.h"


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
    void digits_numbers();

    void on_pushButton_ac_clicked();

    void on_pushButton_c_2_clicked();

    void on_pushButton_c_clicked();

    void on_pushButton_rav_clicked();

    void on_pushButton_cred_clicked();

private:
    Ui::MainWindow *ui;
    Grafic *grafic;
    Credit *credit;
signals:
    void signal(QString);
};

#endif // MAINWINDOW_H
