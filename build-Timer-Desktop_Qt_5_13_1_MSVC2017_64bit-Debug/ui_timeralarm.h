/********************************************************************************
** Form generated from reading UI file 'timeralarm.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMERALARM_H
#define UI_TIMERALARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_timeralarm
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *name;
    QLabel *note;
    QPushButton *closeButton;

    void setupUi(QDialog *timeralarm)
    {
        if (timeralarm->objectName().isEmpty())
            timeralarm->setObjectName(QString::fromUtf8("timeralarm"));
        timeralarm->resize(400, 300);
        timeralarm->setMinimumSize(QSize(400, 300));
        timeralarm->setMaximumSize(QSize(400, 16777215));
        timeralarm->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 60)"));
        gridLayout = new QGridLayout(timeralarm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        name = new QLabel(timeralarm);
        name->setObjectName(QString::fromUtf8("name"));
        name->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));
        name->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(name);

        note = new QLabel(timeralarm);
        note->setObjectName(QString::fromUtf8("note"));
        note->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 14pt \"Calibri Light\";"));
        note->setAlignment(Qt::AlignCenter);
        note->setWordWrap(true);

        verticalLayout->addWidget(note);

        closeButton = new QPushButton(timeralarm);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setStyleSheet(QString::fromUtf8("color:rgb(20, 20, 20);\n"
"background-color: rgba(200, 200, 220, 180);\n"
"border-radius: 20px;\n"
"padding: 15px;\n"
"min-width: 5em;\n"
"font: 25 16pt \"Calibri Light\";\n"
""));

        verticalLayout->addWidget(closeButton, 0, Qt::AlignHCenter);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(timeralarm);

        QMetaObject::connectSlotsByName(timeralarm);
    } // setupUi

    void retranslateUi(QDialog *timeralarm)
    {
        timeralarm->setWindowTitle(QCoreApplication::translate("timeralarm", "Dialog", nullptr));
        name->setText(QCoreApplication::translate("timeralarm", "Name", nullptr));
        note->setText(QString());
        closeButton->setText(QCoreApplication::translate("timeralarm", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class timeralarm: public Ui_timeralarm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMERALARM_H
