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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *choice;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *b4;
    QPushButton *b8;
    QPushButton *bmultiply;
    QPushButton *equally;
    QPushButton *bh;
    QPushButton *b9;
    QPushButton *bzero;
    QPushButton *shift;
    QPushButton *b1;
    QPushButton *bplus;
    QPushButton *bdivision;
    QPushButton *b6;
    QPushButton *bdel;
    QPushButton *b2;
    QPushButton *bleft;
    QPushButton *tan;
    QPushButton *bdot;
    QPushButton *b3;
    QPushButton *b7;
    QPushButton *bpi;
    QPushButton *b5;
    QPushButton *sin;
    QPushButton *bright;
    QPushButton *bminus;
    QPushButton *bcos;
    QPushButton *blbracket;
    QPushButton *brbracket;
    QLineEdit *Screen;
    QLabel *shiftlabel;
    QTextEdit *textEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(282, 404);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(49,51,53);\n"
"border-radius: 10px;\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        choice = new QComboBox(centralwidget);
        choice->addItem(QString());
        choice->addItem(QString());
        choice->addItem(QString());
        choice->addItem(QString());
        choice->setObjectName(QString::fromUtf8("choice"));
        choice->setGeometry(QRect(10, 170, 151, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Monaco"));
        choice->setFont(font);
        choice->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"background-color:#86888A;\n"
"color:white;"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 200, 261, 181));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        b4 = new QPushButton(gridLayoutWidget);
        b4->setObjectName(QString::fromUtf8("b4"));
        b4->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(b4, 2, 0, 1, 1);

        b8 = new QPushButton(gridLayoutWidget);
        b8->setObjectName(QString::fromUtf8("b8"));
        b8->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(b8, 1, 1, 1, 1);

        bmultiply = new QPushButton(gridLayoutWidget);
        bmultiply->setObjectName(QString::fromUtf8("bmultiply"));
        bmultiply->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(bmultiply, 2, 3, 1, 1);

        equally = new QPushButton(gridLayoutWidget);
        equally->setObjectName(QString::fromUtf8("equally"));

        gridLayout->addWidget(equally, 4, 2, 1, 1);

        bh = new QPushButton(gridLayoutWidget);
        bh->setObjectName(QString::fromUtf8("bh"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(119, 221, 119, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        bh->setPalette(palette);
        bh->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#77dd77;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(bh, 4, 3, 1, 1);

        b9 = new QPushButton(gridLayoutWidget);
        b9->setObjectName(QString::fromUtf8("b9"));
        b9->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(b9, 1, 2, 1, 1);

        bzero = new QPushButton(gridLayoutWidget);
        bzero->setObjectName(QString::fromUtf8("bzero"));

        gridLayout->addWidget(bzero, 4, 0, 1, 1);

        shift = new QPushButton(gridLayoutWidget);
        shift->setObjectName(QString::fromUtf8("shift"));
        shift->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(shift, 0, 0, 1, 1);

        b1 = new QPushButton(gridLayoutWidget);
        b1->setObjectName(QString::fromUtf8("b1"));
        b1->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(b1, 3, 0, 1, 1);

        bplus = new QPushButton(gridLayoutWidget);
        bplus->setObjectName(QString::fromUtf8("bplus"));
        bplus->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(bplus, 3, 3, 1, 1);

        bdivision = new QPushButton(gridLayoutWidget);
        bdivision->setObjectName(QString::fromUtf8("bdivision"));
        bdivision->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(bdivision, 2, 4, 1, 1);

        b6 = new QPushButton(gridLayoutWidget);
        b6->setObjectName(QString::fromUtf8("b6"));
        b6->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(b6, 2, 2, 1, 1);

        bdel = new QPushButton(gridLayoutWidget);
        bdel->setObjectName(QString::fromUtf8("bdel"));
        bdel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#77dd77;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(bdel, 4, 4, 1, 1);

        b2 = new QPushButton(gridLayoutWidget);
        b2->setObjectName(QString::fromUtf8("b2"));
        b2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(b2, 3, 1, 1, 1);

        bleft = new QPushButton(gridLayoutWidget);
        bleft->setObjectName(QString::fromUtf8("bleft"));
        bleft->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(bleft, 1, 3, 1, 1);

        tan = new QPushButton(gridLayoutWidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        tan->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(tan, 0, 3, 1, 1);

        bdot = new QPushButton(gridLayoutWidget);
        bdot->setObjectName(QString::fromUtf8("bdot"));

        gridLayout->addWidget(bdot, 4, 1, 1, 1);

        b3 = new QPushButton(gridLayoutWidget);
        b3->setObjectName(QString::fromUtf8("b3"));
        b3->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(b3, 3, 2, 1, 1);

        b7 = new QPushButton(gridLayoutWidget);
        b7->setObjectName(QString::fromUtf8("b7"));
        b7->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(b7, 1, 0, 1, 1);

        bpi = new QPushButton(gridLayoutWidget);
        bpi->setObjectName(QString::fromUtf8("bpi"));
        bpi->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(bpi, 0, 4, 1, 1);

        b5 = new QPushButton(gridLayoutWidget);
        b5->setObjectName(QString::fromUtf8("b5"));
        b5->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(b5, 2, 1, 1, 1);

        sin = new QPushButton(gridLayoutWidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sin->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(sin, 0, 1, 1, 1);

        bright = new QPushButton(gridLayoutWidget);
        bright->setObjectName(QString::fromUtf8("bright"));
        bright->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(bright, 1, 4, 1, 1);

        bminus = new QPushButton(gridLayoutWidget);
        bminus->setObjectName(QString::fromUtf8("bminus"));
        bminus->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(bminus, 3, 4, 1, 1);

        bcos = new QPushButton(gridLayoutWidget);
        bcos->setObjectName(QString::fromUtf8("bcos"));
        bcos->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));

        gridLayout->addWidget(bcos, 0, 2, 1, 1);

        blbracket = new QPushButton(centralwidget);
        blbracket->setObjectName(QString::fromUtf8("blbracket"));
        blbracket->setGeometry(QRect(175, 170, 41, 22));
        blbracket->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));
        brbracket = new QPushButton(centralwidget);
        brbracket->setObjectName(QString::fromUtf8("brbracket"));
        brbracket->setGeometry(QRect(230, 170, 40, 22));
        brbracket->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}"));
        Screen = new QLineEdit(centralwidget);
        Screen->setObjectName(QString::fromUtf8("Screen"));
        Screen->setGeometry(QRect(10, 10, 261, 151));
        QFont font1;
        font1.setPointSize(12);
        Screen->setFont(font1);
        Screen->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color:white;"));
        shiftlabel = new QLabel(centralwidget);
        shiftlabel->setObjectName(QString::fromUtf8("shiftlabel"));
        shiftlabel->setGeometry(QRect(20, 10, 21, 20));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        shiftlabel->setFont(font2);
        shiftlabel->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color:white;\n"
"color:#77dd77;"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 261, 151));
        textEdit->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color:white;\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        textEdit->raise();
        choice->raise();
        gridLayoutWidget->raise();
        blbracket->raise();
        brbracket->raise();
        Screen->raise();
        shiftlabel->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        choice->setItemText(0, QApplication::translate("MainWindow", "Degrees/Minutes", nullptr));
        choice->setItemText(1, QApplication::translate("MainWindow", "Minutes/Degrees", nullptr));
        choice->setItemText(2, QApplication::translate("MainWindow", "Degrees/Seconds", nullptr));
        choice->setItemText(3, QApplication::translate("MainWindow", "Seconds/Degrees", nullptr));

        b4->setText(QApplication::translate("MainWindow", "4", nullptr));
        b8->setText(QApplication::translate("MainWindow", "8", nullptr));
        bmultiply->setText(QApplication::translate("MainWindow", "*", nullptr));
        equally->setStyleSheet(QApplication::translate("MainWindow", "\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}", nullptr));
        equally->setText(QApplication::translate("MainWindow", "=", nullptr));
        bh->setText(QApplication::translate("MainWindow", "H", nullptr));
        b9->setText(QApplication::translate("MainWindow", "9", nullptr));
        bzero->setStyleSheet(QApplication::translate("MainWindow", "\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}", nullptr));
        bzero->setText(QApplication::translate("MainWindow", "0", nullptr));
        shift->setText(QApplication::translate("MainWindow", "shift", nullptr));
        b1->setText(QApplication::translate("MainWindow", "1", nullptr));
        bplus->setText(QApplication::translate("MainWindow", "+", nullptr));
        bdivision->setText(QApplication::translate("MainWindow", "\303\267", nullptr));
        b6->setText(QApplication::translate("MainWindow", "6", nullptr));
        bdel->setText(QApplication::translate("MainWindow", "DEL", nullptr));
        b2->setText(QApplication::translate("MainWindow", "2", nullptr));
        bleft->setText(QApplication::translate("MainWindow", "\342\206\220", nullptr));
        tan->setText(QApplication::translate("MainWindow", "tan", nullptr));
        bdot->setStyleSheet(QApplication::translate("MainWindow", "\n"
"QPushButton{\n"
"border-radius: 5px;\n"
"background-color:#86888A;\n"
"font-size: 18px;\n"
"color:white;\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed{\n"
"background-color:#CACCCE;\n"
"}", nullptr));
        bdot->setText(QApplication::translate("MainWindow", ".", nullptr));
        b3->setText(QApplication::translate("MainWindow", "3", nullptr));
        b7->setText(QApplication::translate("MainWindow", "7", nullptr));
        bpi->setText(QApplication::translate("MainWindow", "\317\200", nullptr));
        b5->setText(QApplication::translate("MainWindow", "5", nullptr));
        sin->setText(QApplication::translate("MainWindow", "sin", nullptr));
        bright->setText(QApplication::translate("MainWindow", "\342\206\222", nullptr));
        bminus->setText(QApplication::translate("MainWindow", "-", nullptr));
        bcos->setText(QApplication::translate("MainWindow", "cos", nullptr));
        blbracket->setText(QApplication::translate("MainWindow", "(", nullptr));
        brbracket->setText(QApplication::translate("MainWindow", ")", nullptr));
        Screen->setText(QApplication::translate("MainWindow", "  Press Shift + H to show options.", nullptr));
        shiftlabel->setText(QString());
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">******************************</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Press Shift + Button - &gt; Function.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">******************************</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">shift + DEL -&gt; Delete all line.</p>\n"
"<p style=\" margin-top:0px; ma"
                        "rgin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">shift + H -&gt; Show information.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">shift + cos/sin/tan -&gt; arc/cos/sin/tan.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">******************************</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Choice function + shit -&gt; work with this function.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Example:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Degrees/Minutes + shift -&gt; Converts degrees to minutes.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; marg"
                        "in-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">******************************</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
