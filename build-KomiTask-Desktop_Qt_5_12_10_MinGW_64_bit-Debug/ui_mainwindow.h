/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Display;
    QTableWidget *LinksTable;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Accept_2;
    QPushButton *Accept;
    QPushButton *Visual;
    QPushButton *Answer;
    QPushButton *Create;
    QLineEdit *City;
    QLabel *Check;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(461, 453);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:#2f2fa2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Display = new QLabel(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(10, 10, 181, 81));
        Display->setStyleSheet(QString::fromUtf8("color:white;\n"
"border: 2px solid #F64C72;\n"
""));
        LinksTable = new QTableWidget(centralwidget);
        LinksTable->setObjectName(QString::fromUtf8("LinksTable"));
        LinksTable->setGeometry(QRect(10, 130, 431, 291));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(200, 10, 251, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Accept_2 = new QPushButton(gridLayoutWidget);
        Accept_2->setObjectName(QString::fromUtf8("Accept_2"));
        Accept_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#2F2FA2;\n"
"color:#F64C72;\n"
"border: 2px solid #F64C72;\n"
"}\n"
"QPushButton:hover {\n"
"background-color:#F64C72;\n"
"color:#2F2FA2;\n"
"}"));

        gridLayout->addWidget(Accept_2, 2, 1, 1, 1);

        Accept = new QPushButton(gridLayoutWidget);
        Accept->setObjectName(QString::fromUtf8("Accept"));
        Accept->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#2F2FA2;\n"
"color:#F64C72;\n"
"border: 2px solid #F64C72;\n"
"}\n"
"QPushButton:hover {\n"
"background-color:#F64C72;\n"
"color:#2F2FA2;\n"
"}"));

        gridLayout->addWidget(Accept, 2, 0, 1, 1);

        Visual = new QPushButton(gridLayoutWidget);
        Visual->setObjectName(QString::fromUtf8("Visual"));
        Visual->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#2F2FA2;\n"
"color:#F64C72;\n"
"border: 2px solid #F64C72;\n"
"}\n"
"QPushButton:hover {\n"
"background-color:#F64C72;\n"
"color:#2F2FA2;\n"
"}"));

        gridLayout->addWidget(Visual, 1, 1, 1, 1);

        Answer = new QPushButton(gridLayoutWidget);
        Answer->setObjectName(QString::fromUtf8("Answer"));
        Answer->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#2F2FA2;\n"
"color:#F64C72;\n"
"border: 2px solid #F64C72;\n"
"}\n"
"QPushButton:hover {\n"
"background-color:#F64C72;\n"
"color:#2F2FA2;\n"
"}"));

        gridLayout->addWidget(Answer, 1, 0, 1, 1);

        Create = new QPushButton(centralwidget);
        Create->setObjectName(QString::fromUtf8("Create"));
        Create->setGeometry(QRect(330, 100, 121, 21));
        Create->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#2F2FA2;\n"
"color:#F64C72;\n"
"border: 2px solid #F64C72;\n"
"}\n"
"QPushButton:hover {\n"
"background-color:#F64C72;\n"
"color:#2F2FA2;\n"
"}"));
        City = new QLineEdit(centralwidget);
        City->setObjectName(QString::fromUtf8("City"));
        City->setGeometry(QRect(10, 100, 311, 21));
        City->setStyleSheet(QString::fromUtf8("color:white;\n"
"border: 2px solid #F64C72;\n"
""));
        Check = new QLabel(centralwidget);
        Check->setObjectName(QString::fromUtf8("Check"));
        Check->setGeometry(QRect(10, 130, 431, 301));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Display->setText(QApplication::translate("MainWindow", "Enter the number of cities ", nullptr));
        Accept_2->setText(QApplication::translate("MainWindow", "Remove city", nullptr));
        Accept->setText(QApplication::translate("MainWindow", "Add city", nullptr));
        Visual->setText(QApplication::translate("MainWindow", "Drawing", nullptr));
        Answer->setText(QApplication::translate("MainWindow", "Answer", nullptr));
        Create->setText(QApplication::translate("MainWindow", "Create", nullptr));
        City->setText(QString());
        Check->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
