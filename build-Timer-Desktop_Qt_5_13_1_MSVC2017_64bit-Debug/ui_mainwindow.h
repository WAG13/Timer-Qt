/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *delete_button;
    QPushButton *add_button;
    QFrame *line;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *timer_layout;
    QLabel *Timer_name;
    QLabel *Timer_mode;
    QLabel *Timer_time;
    QProgressBar *progressBar;
    QVBoxLayout *note_layout;
    QLabel *label_3;
    QLabel *Timer_note;
    QHBoxLayout *buttons_layout;
    QPushButton *stop_button;
    QPushButton *play_button;
    QPushButton *reset_button;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 650);
        MainWindow->setMinimumSize(QSize(900, 650));
        MainWindow->setMaximumSize(QSize(900, 16777215));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 25, 30)"));
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        widget->setFont(font);
        widget->setMouseTracking(false);
        widget->setAutoFillBackground(false);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri Light"));
        font1.setPointSize(16);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(90, 90, 90);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        listWidget = new QListWidget(widget_3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri Light"));
        font2.setPointSize(14);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(3);
        listWidget->setFont(font2);
        listWidget->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 14pt \"Calibri Light\";"));

        verticalLayout_2->addWidget(listWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        delete_button = new QPushButton(widget_3);
        delete_button->setObjectName(QString::fromUtf8("delete_button"));
        delete_button->setEnabled(false);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(16);
        delete_button->setFont(font3);
        delete_button->setStyleSheet(QString::fromUtf8("color:rgb(20, 20, 20);\n"
"background-color: rgb(255, 105, 105, 180);\n"
"border-radius: 25px;\n"
"padding: 15px;\n"
"min-width: 5em;"));

        horizontalLayout_3->addWidget(delete_button, 0, Qt::AlignLeft);

        add_button = new QPushButton(widget_3);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setWeight(50);
        add_button->setFont(font4);
        add_button->setStyleSheet(QString::fromUtf8("color:rgb(20, 20, 20);\n"
"background-color: rgba(0, 200, 220, 180);\n"
"border-radius: 25px;\n"
"padding: 15px;\n"
"min-width: 5em;"));

        horizontalLayout_3->addWidget(add_button, 0, Qt::AlignRight);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout->addWidget(widget_3);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        timer_layout = new QVBoxLayout();
        timer_layout->setObjectName(QString::fromUtf8("timer_layout"));
        Timer_name = new QLabel(widget_2);
        Timer_name->setObjectName(QString::fromUtf8("Timer_name"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(20);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(3);
        Timer_name->setFont(font5);
        Timer_name->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 20pt \"Calibri\""));
        Timer_name->setAlignment(Qt::AlignCenter);

        timer_layout->addWidget(Timer_name, 0, Qt::AlignTop);

        Timer_mode = new QLabel(widget_2);
        Timer_mode->setObjectName(QString::fromUtf8("Timer_mode"));
        Timer_mode->setEnabled(true);
        Timer_mode->setFont(font2);
        Timer_mode->setStyleSheet(QString::fromUtf8("color: rgb(90, 90, 90);\n"
"font: 25 14pt \"Calibri Light\";"));
        Timer_mode->setAlignment(Qt::AlignCenter);

        timer_layout->addWidget(Timer_mode, 0, Qt::AlignTop);

        Timer_time = new QLabel(widget_2);
        Timer_time->setObjectName(QString::fromUtf8("Timer_time"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Segoe UI"));
        font6.setPointSize(30);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(9);
        Timer_time->setFont(font6);
        Timer_time->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 75 30pt \"Segoe UI\";"));
        Timer_time->setAlignment(Qt::AlignCenter);

        timer_layout->addWidget(Timer_time);

        progressBar = new QProgressBar(widget_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMinimumSize(QSize(370, 0));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: #05B8CC;\n"
"	width: 1px;\n"
" }"));
        progressBar->setMaximum(100);
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        timer_layout->addWidget(progressBar, 0, Qt::AlignBottom);


        verticalLayout->addLayout(timer_layout);

        note_layout = new QVBoxLayout();
        note_layout->setObjectName(QString::fromUtf8("note_layout"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 50));
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 20pt \"Calibri\""));
        label_3->setAlignment(Qt::AlignCenter);

        note_layout->addWidget(label_3, 0, Qt::AlignTop);

        Timer_note = new QLabel(widget_2);
        Timer_note->setObjectName(QString::fromUtf8("Timer_note"));
        Timer_note->setMinimumSize(QSize(0, 150));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Calibri Light"));
        font7.setPointSize(16);
        font7.setBold(false);
        font7.setItalic(false);
        font7.setWeight(3);
        Timer_note->setFont(font7);
        Timer_note->setToolTipDuration(-1);
        Timer_note->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));
        Timer_note->setAlignment(Qt::AlignCenter);

        note_layout->addWidget(Timer_note, 0, Qt::AlignTop);


        verticalLayout->addLayout(note_layout);

        buttons_layout = new QHBoxLayout();
        buttons_layout->setObjectName(QString::fromUtf8("buttons_layout"));
        stop_button = new QPushButton(widget_2);
        stop_button->setObjectName(QString::fromUtf8("stop_button"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Calibri"));
        font8.setPointSize(16);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setWeight(50);
        stop_button->setFont(font8);
        stop_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:rgb(20, 20, 20);\n"
"background-color: rgb(255, 105, 105, 180);\n"
"border-radius: 25px;\n"
"padding: 15px;\n"
"min-width: 5em;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 105, 105, 150);\n"
"}"));

        buttons_layout->addWidget(stop_button);

        play_button = new QPushButton(widget_2);
        play_button->setObjectName(QString::fromUtf8("play_button"));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Calibri"));
        font9.setPointSize(16);
        font9.setBold(true);
        font9.setItalic(false);
        font9.setWeight(75);
        play_button->setFont(font9);
        play_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:rgb(20, 20, 20);\n"
"background-color: rgb(5, 184, 204);\n"
"border-radius: 55px;\n"
"padding: 15px;\n"
"min-width: 5em;\n"
"min-height: 5em;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(5, 184, 204, 180);\n"
"}"));
        play_button->setAutoDefault(false);
        play_button->setFlat(false);

        buttons_layout->addWidget(play_button);

        reset_button = new QPushButton(widget_2);
        reset_button->setObjectName(QString::fromUtf8("reset_button"));
        reset_button->setFont(font8);
        reset_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:rgb(20, 20, 20);\n"
"background-color: rgb(190, 190, 190, 180);\n"
"border-radius: 25px;\n"
"padding: 15px;\n"
"min-width: 5em;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(190, 190, 190, 150);\n"
"}"));

        buttons_layout->addWidget(reset_button);


        verticalLayout->addLayout(buttons_layout);


        horizontalLayout->addWidget(widget_2, 0, Qt::AlignHCenter);

        MainWindow->setCentralWidget(widget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Timers:", nullptr));
        delete_button->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        add_button->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        Timer_name->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        Timer_mode->setText(QCoreApplication::translate("MainWindow", "mode", nullptr));
        Timer_time->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Note:", nullptr));
        Timer_note->setText(QString());
        stop_button->setText(QCoreApplication::translate("MainWindow", "STOP", nullptr));
        play_button->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        reset_button->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
