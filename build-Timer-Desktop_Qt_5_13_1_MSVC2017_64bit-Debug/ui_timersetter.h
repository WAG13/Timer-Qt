/********************************************************************************
** Form generated from reading UI file 'timersetter.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMERSETTER_H
#define UI_TIMERSETTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timersetter
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTimeEdit *timeEdit;
    QDial *dial;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_OK;

    void setupUi(QDialog *timersetter)
    {
        if (timersetter->objectName().isEmpty())
            timersetter->setObjectName(QString::fromUtf8("timersetter"));
        timersetter->resize(510, 400);
        timersetter->setMaximumSize(QSize(885, 16777215));
        timersetter->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 60)"));
        gridLayout = new QGridLayout(timersetter);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label = new QLabel(timersetter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri Light"));
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label, 0, Qt::AlignTop);

        timeEdit = new QTimeEdit(timersetter);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setMinimumSize(QSize(480, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(18);
        timeEdit->setFont(font1);
        timeEdit->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);"));
        timeEdit->setAlignment(Qt::AlignCenter);
        timeEdit->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        timeEdit->setDateTime(QDateTime(QDate(2019, 12, 1), QTime(0, 0, 0)));
        timeEdit->setMaximumDateTime(QDateTime(QDate(2019, 12, 1), QTime(23, 59, 59)));
        timeEdit->setCurrentSection(QDateTimeEdit::MSecSection);

        verticalLayout->addWidget(timeEdit);

        dial = new QDial(timersetter);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setFont(font);
        dial->setValue(0);
        dial->setOrientation(Qt::Horizontal);
        dial->setWrapping(true);
        dial->setNotchTarget(8.699999999999999);
        dial->setNotchesVisible(true);

        verticalLayout->addWidget(dial, 0, Qt::AlignBottom);

        horizontalWidget = new QWidget(timersetter);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(horizontalWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(16);
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("color:rgb(20, 20, 20);\n"
"background-color: rgba(200, 200, 220, 180);\n"
"border-radius: 25px;\n"
"padding: 15px;\n"
"min-width: 5em;"));

        horizontalLayout->addWidget(pushButton, 0, Qt::AlignLeft);

        pushButton_OK = new QPushButton(horizontalWidget);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_OK->setFont(font3);
        pushButton_OK->setStyleSheet(QString::fromUtf8("color:rgb(20, 20, 20);\n"
"background-color: rgba(0, 200, 220, 180);\n"
"border-radius: 25px;\n"
"padding: 15px;\n"
"min-width: 5em;"));

        horizontalLayout->addWidget(pushButton_OK, 0, Qt::AlignRight);


        verticalLayout->addWidget(horizontalWidget, 0, Qt::AlignBottom);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(timersetter);

        QMetaObject::connectSlotsByName(timersetter);
    } // setupUi

    void retranslateUi(QDialog *timersetter)
    {
        timersetter->setWindowTitle(QCoreApplication::translate("timersetter", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("timersetter", "Set time:", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("timersetter", "HH:mm:ss:zzz", nullptr));
        pushButton->setText(QCoreApplication::translate("timersetter", "Cancle", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("timersetter", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class timersetter: public Ui_timersetter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMERSETTER_H
