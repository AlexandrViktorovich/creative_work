#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_b1_clicked()
{
    QString label = ui->Screen->text();
    label+= '1';
    ui->Screen->setText(label);
}

void MainWindow::on_b2_clicked()
{
    QString label = ui->Screen->text();
    label+= '2';
    ui->Screen->setText(label);
}

void MainWindow::on_b3_clicked()
{
    QString label = ui->Screen->text();
    label+= '3';
    ui->Screen->setText(label);
}

void MainWindow::on_b4_clicked()
{
    QString label = ui->Screen->text();
    label+= '4';
    ui->Screen->setText(label);
}

void MainWindow::on_b5_clicked()
{
    QString label = ui->Screen->text();
    label+= '5';
    ui->Screen->setText(label);
}

void MainWindow::on_b6_clicked()
{
    QString label = ui->Screen->text();
    label+= '6';
    ui->Screen->setText(label);
}

void MainWindow::on_b7_clicked()
{
    QString label = ui->Screen->text();
    label+= '7';
    ui->Screen->setText(label);
}

void MainWindow::on_b8_clicked()
{
    QString label = ui->Screen->text();
    label+= '8';
    ui->Screen->setText(label);
}

void MainWindow::on_b9_clicked()
{
    QString label = ui->Screen->text();
    label+= '9';
    ui->Screen->setText(label);
}

void MainWindow::on_bzero_clicked()
{
    QString label = ui->Screen->text();
    label+= '0';
    ui->Screen->setText(label);
}

void MainWindow::on_bdot_clicked()
{
    QString label = ui->Screen->text();
    label+='.';
    ui->Screen->setText(label);
}




void MainWindow::on_bdel_clicked()
{
    QString label = ui->Screen->text();
    QString newlabel;
    if(shift){
        ui->Screen->setText("");
    }else{
        for(int i=0;i<label.size()-1;i++){
            newlabel+=label[i];
        }
        ui->Screen->setText(newlabel);
    }
}


void MainWindow::on_shift_clicked()
{
    if(shift){
        shift=false;
        ui->shiftlabel->setText("");
    }else{
        shift=true;
        ui->shiftlabel->setText("S");
    }
}



void MainWindow::on_sin_clicked()
{
    if(shift){
        QString label = ui->Screen->text();
        label+="arcsin()";
        as=true;
        ui->Screen->setText(label);
    }else{
        QString label = ui->Screen->text();
        label+="sin()";
        s=true;
        ui->Screen->setText(label);
    }
}



void MainWindow::on_bcos_clicked()
{
    if(shift){
        QString label = ui->Screen->text();
        label+="arccos()";
        ac=true;
        ui->Screen->setText(label);
    }else{
        QString label = ui->Screen->text();
        label+="cos()";
        c=true;
        ui->Screen->setText(label);
    }
}


void MainWindow::on_tan_clicked()
{
    if(shift){
        QString label = ui->Screen->text();
        label+="arctan()";
        at=true;
        ui->Screen->setText(label);
    }else{
        QString label = ui->Screen->text();
        label+="tan()";
        t=true;
        ui->Screen->setText(label);
    }
}


void MainWindow::on_bpi_clicked()
{
    QString label = ui->Screen->text();
    label+="π";
    ui->Screen->setText(label);
}


void MainWindow::on_blbracket_clicked()
{
    QString label = ui->Screen->text();
    label+='(';
    ui->Screen->setText(label);
}


void MainWindow::on_brbracket_clicked()
{
    QString label = ui->Screen->text();
    label+=')';
    ui->Screen->setText(label);
}


void MainWindow::on_bmultiply_clicked()
{
    QString label = ui->Screen->text();
    label+='*';
    ui->Screen->setText(label);
}


void MainWindow::on_bdivision_clicked()
{
    QString label = ui->Screen->text();
    label+='/';
    ui->Screen->setText(label);
}


void MainWindow::on_bplus_clicked()
{
    QString label = ui->Screen->text();
    label+='+';
    ui->Screen->setText(label);
}


void MainWindow::on_bminus_clicked()
{
    QString label = ui->Screen->text();
    label+='-';
    ui->Screen->setText(label);
}


void MainWindow::on_equally_clicked(){
    if(shift){
        if(ui->choice->currentText() == "Degrees/Minutes"){
        QString label = ui->Screen->text();
        ui->Screen->setText(QString::number(label.toDouble()*60,'f',2));
        }
        if(ui->choice->currentText() == "Minutes/Degrees"){
        QString label = ui->Screen->text();
        ui->Screen->setText(QString::number(label.toDouble()/60,'f',2));
        }
        if(ui->choice->currentText() == "Degrees/Seconds"){
        QString label = ui->Screen->text();
         ui->Screen->setText(QString::number(label.toDouble()*3600,'f',2));
        }
        if(ui->choice->currentText() == "Seconds/Degrees"){
        QString label = ui->Screen->text();
         ui->Screen->setText(QString::number(label.toDouble()/3600,'f',2));
        }
}





    else{

        QString label = ui->Screen->text();
        QString first;
        QString second;
        QString act;
        double fir;
        double sec;
        double an;
        QString answer;
        int i=0;
        if(s || c || t || as||ac||at){
            QString otvet;
            double otv;
            if(s){
                for(int i=0;i<label.size();i++){
                    if(label[i]>=48 && label[i]<=57){
                        otvet+=label[i];
                    }
                }
                otv = sin(otvet.toDouble());
            }
            if(c){
                for(int i=0;i<label.size();i++){
                    if(label[i]>=48 && label[i]<=57){
                        otvet+=label[i];
                    }
                }
                otv = cos(otvet.toDouble());
            }
            if(t){
                for(int i=0;i<label.size();i++){
                    if(label[i]>=48 && label[i]<=57){
                        otvet+=label[i];
                    }
                }
                otv = tan(otvet.toDouble());
            }
            if(as){
                for(int i=0;i<label.size();i++){
                    if(label[i]>=48 && label[i]<=57){
                        otvet+=label[i];
                    }
                }
                otv = asin(otvet.toDouble());
            }
            if(ac){
                for(int i=0;i<label.size();i++){
                    if(label[i]>=48 && label[i]<=57){
                        otvet+=label[i];
                    }
                }
                otv = acos(otvet.toDouble());
            }
            if(at){
                for(int i=0;i<label.size();i++){
                    if(label[i]>=48 && label[i]<=57){
                        otvet+=label[i];
                    }
                }
                otv = atan(otvet.toDouble());
            }
            ui->Screen->setText(QString::number(otv,'f',4));
        }else{
            while(((label[i]!="*") && (label[i]!="/") && (label[i]!="-") && (label[i]!="+"))&& i<label.size()){
                first+=label[i];
                i++;
            }
            act += label[i];
            for(i=i+1; i<label.size(); i++){
                second+=label[i];
            }
            fir=first.toDouble();
            sec=second.toDouble();
            if(act == "+"){
                an = fir+sec;
                answer = QString::number(an);
            }
            if(act == "-"){
                an = fir-sec;
                answer = QString::number(an);
            }

            if(act == "*"){
                an = fir*sec;
                answer = QString::number(an);
            }

            if(act == "/"){
                an = fir/sec;
                answer = QString::number(an);
            }
            ui->Screen->setText(answer);
        }


    }
    c=false;
    s=false;
    t=false;
    ac=false;
    as=false;
    at=false;
}








void MainWindow::on_bh_clicked()
{
    ui->Screen->show();
    if(shift){
        ui->Screen->hide();
        }
}
