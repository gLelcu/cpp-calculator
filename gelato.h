#ifndef GELATO_H
#define GELATO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class gelato2calc;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    Ui::gelato2calc *ui;
    double first_num = 0;
    bool wait_sec_num = false;
    QString ooperator = "";
private slots:
    void digit_pressed(); // functie pt numere si punct unde le connect pe toate
    void clear_pressed(); // funcetie speciala pt clear
    void equal_pressed(); // functia pt egal
    void operator_pressed();
};
#endif // GELATO_H
