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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timersetter
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radio_alarm;
    QRadioButton *radio_timer;
    QWidget *horizontalWidget;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *timer_type;
    QLabel *label_4;
    QPushButton *melody_button;
    QTextEdit *textEdit;
    QCheckBox *check_melody;
    QCheckBox *check_note;
    QLabel *label_2;
    QTimeEdit *timeEdit;
    QWidget *horizontalWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_OK;

    void setupUi(QDialog *timersetter)
    {
        if (timersetter->objectName().isEmpty())
            timersetter->setObjectName(QString::fromUtf8("timersetter"));
        timersetter->resize(510, 700);
        timersetter->setMaximumSize(QSize(885, 16777215));
        timersetter->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 50, 60)"));
        gridLayout = new QGridLayout(timersetter);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_3 = new QLabel(timersetter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        plainTextEdit = new QPlainTextEdit(timersetter);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(0, 50));
        plainTextEdit->setMaximumSize(QSize(16777215, 50));
        plainTextEdit->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));
        plainTextEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        plainTextEdit->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        plainTextEdit->setOverwriteMode(false);

        verticalLayout->addWidget(plainTextEdit);

        label = new QLabel(timersetter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri Light"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(3);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label, 0, Qt::AlignTop);

        widget = new QWidget(timersetter);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radio_alarm = new QRadioButton(widget);
        radio_alarm->setObjectName(QString::fromUtf8("radio_alarm"));
        radio_alarm->setStyleSheet(QString::fromUtf8("image: url(:/rec/Timer_icons/alarm.png);\n"
"color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));
        radio_alarm->setChecked(true);

        horizontalLayout_2->addWidget(radio_alarm, 0, Qt::AlignTop);

        radio_timer = new QRadioButton(widget);
        radio_timer->setObjectName(QString::fromUtf8("radio_timer"));
        radio_timer->setStyleSheet(QString::fromUtf8("image: url(:/rec/Timer_icons/timer.png);\n"
"color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));

        horizontalLayout_2->addWidget(radio_timer, 0, Qt::AlignTop);


        verticalLayout->addWidget(widget);

        horizontalWidget = new QWidget(timersetter);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri Light"));
        font1.setPointSize(16);
        horizontalWidget->setFont(font1);
        gridLayout_2 = new QGridLayout(horizontalWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        timer_type = new QPlainTextEdit(horizontalWidget);
        timer_type->setObjectName(QString::fromUtf8("timer_type"));
        timer_type->setMinimumSize(QSize(0, 50));
        timer_type->setMaximumSize(QSize(16777215, 50));
        timer_type->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));
        timer_type->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        timer_type->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_2->addWidget(timer_type, 3, 1, 1, 1);

        label_4 = new QLabel(horizontalWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        melody_button = new QPushButton(horizontalWidget);
        melody_button->setObjectName(QString::fromUtf8("melody_button"));
        melody_button->setMaximumSize(QSize(300, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(16);
        melody_button->setFont(font2);
        melody_button->setStyleSheet(QString::fromUtf8("color:rgb(20, 20, 20);\n"
"background-color: rgba(200, 200, 220, 180);\n"
"border-radius: 25px;\n"
"padding: 15px;\n"
"min-width: 5em;"));

        gridLayout_2->addWidget(melody_button, 1, 1, 1, 1);

        textEdit = new QTextEdit(horizontalWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));

        gridLayout_2->addWidget(textEdit, 2, 1, 1, 1);

        check_melody = new QCheckBox(horizontalWidget);
        check_melody->setObjectName(QString::fromUtf8("check_melody"));
        check_melody->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 14pt \"Calibri Light\";"));

        gridLayout_2->addWidget(check_melody, 1, 0, 1, 1);

        check_note = new QCheckBox(horizontalWidget);
        check_note->setObjectName(QString::fromUtf8("check_note"));
        check_note->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 14pt \"Calibri Light\";color: rgb(190, 190, 190);\n"
"font: 25 14pt \"Calibri Light\";"));

        gridLayout_2->addWidget(check_note, 2, 0, 1, 1);


        verticalLayout->addWidget(horizontalWidget);

        label_2 = new QLabel(timersetter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        timeEdit = new QTimeEdit(timersetter);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));
        timeEdit->setAlignment(Qt::AlignCenter);
        timeEdit->setTimeSpec(Qt::LocalTime);

        verticalLayout->addWidget(timeEdit);

        horizontalWidget1 = new QWidget(timersetter);
        horizontalWidget1->setObjectName(QString::fromUtf8("horizontalWidget1"));
        horizontalLayout = new QHBoxLayout(horizontalWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(horizontalWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("color:rgb(20, 20, 20);\n"
"background-color: rgba(200, 200, 220, 180);\n"
"border-radius: 25px;\n"
"padding: 15px;\n"
"min-width: 5em;"));

        horizontalLayout->addWidget(pushButton, 0, Qt::AlignLeft);

        pushButton_OK = new QPushButton(horizontalWidget1);
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


        verticalLayout->addWidget(horizontalWidget1, 0, Qt::AlignBottom);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(timersetter);

        QMetaObject::connectSlotsByName(timersetter);
    } // setupUi

    void retranslateUi(QDialog *timersetter)
    {
        timersetter->setWindowTitle(QCoreApplication::translate("timersetter", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("timersetter", "Name:", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("timersetter", "Smart timer", nullptr));
        label->setText(QCoreApplication::translate("timersetter", "Set type:", nullptr));
        radio_alarm->setText(QCoreApplication::translate("timersetter", "Alarm", nullptr));
        radio_timer->setText(QCoreApplication::translate("timersetter", "Timer", nullptr));
        timer_type->setPlainText(QCoreApplication::translate("timersetter", "default", nullptr));
        label_4->setText(QCoreApplication::translate("timersetter", "Type:", nullptr));
        melody_button->setText(QCoreApplication::translate("timersetter", "Choose melody", nullptr));
        textEdit->setHtml(QCoreApplication::translate("timersetter", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Calibri Light'; font-size:16pt; font-weight:24; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        check_melody->setText(QCoreApplication::translate("timersetter", "Melodic", nullptr));
        check_note->setText(QCoreApplication::translate("timersetter", "Note", nullptr));
        label_2->setText(QCoreApplication::translate("timersetter", "Set time:", nullptr));
        timeEdit->setDisplayFormat(QCoreApplication::translate("timersetter", "HH:mm:ss.z", nullptr));
        pushButton->setText(QCoreApplication::translate("timersetter", "Cancel", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("timersetter", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class timersetter: public Ui_timersetter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMERSETTER_H
