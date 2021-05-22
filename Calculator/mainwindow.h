#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_b1_clicked();
    void on_b2_clicked();
    void on_b3_clicked();
    void on_b4_clicked();
    void on_b5_clicked();
    void on_b6_clicked();
    void on_b7_clicked();
    void on_b8_clicked();
    void on_b9_clicked();

    void on_bzero_clicked();

    void on_bdot_clicked();

    void on_bdel_clicked();

    void on_shift_clicked();

    void on_sin_clicked();

    void on_bcos_clicked();

    void on_tan_clicked();

    void on_bpi_clicked();

    void on_blbracket_clicked();

    void on_brbracket_clicked();

    void on_bmultiply_clicked();

    void on_bdivision_clicked();

    void on_bplus_clicked();

    void on_bminus_clicked();

    void on_equally_clicked();
    void on_bh_clicked();

private:
    Ui::MainWindow *ui;
    bool shift=false;
    bool c=false;
    bool s=false;
    bool t=false;
    bool ac=false;
    bool as=false;
    bool at=false;
};




#endif // MAINWINDOW_H
