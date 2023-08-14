#ifndef GRAFIC_H
#define GRAFIC_H

#include <QWidget>
#include <QVector>

namespace Ui {
class Grafic;
}

class Grafic : public QWidget
{
    Q_OBJECT

public:
    explicit Grafic(QWidget *parent = nullptr);
    ~Grafic();

private:
    Ui::Grafic *ui;
    double xBegin, xEnd, h, X;
    QVector<double> x,y;

public slots:
    void slot(QString strochka_msg);
private slots:
    void on_pushButton_clicked();
};

#endif // GRAFIC_H
