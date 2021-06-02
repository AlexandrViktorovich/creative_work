/********************************************************************************
** Form generated from reading UI file 'cityitem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CITYITEM_H
#define UI_CITYITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cityitem
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *back;

    void setupUi(QWidget *cityitem)
    {
        if (cityitem->objectName().isEmpty())
            cityitem->setObjectName(QString::fromUtf8("cityitem"));
        cityitem->resize(600, 630);
        cityitem->setStyleSheet(QString::fromUtf8("background-color:#2f2fa2"));
        horizontalLayoutWidget = new QWidget(cityitem);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 590, 401, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back = new QPushButton(horizontalLayoutWidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setStyleSheet(QString::fromUtf8("background-color:#2f2fa2;\n"
"color:#F64C72;\n"
"border: 2px solid #F64C72;\n"
""));

        horizontalLayout->addWidget(back);


        retranslateUi(cityitem);

        QMetaObject::connectSlotsByName(cityitem);
    } // setupUi

    void retranslateUi(QWidget *cityitem)
    {
        cityitem->setWindowTitle(QApplication::translate("cityitem", "Form", nullptr));
        back->setText(QApplication::translate("cityitem", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cityitem: public Ui_cityitem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CITYITEM_H
