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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QComboBox *comboBox;
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
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *spacer;
    QLabel *Timer_time;
    QProgressBar *progressBar;
    QVBoxLayout *note_layout;
    QLabel *label_3;
    QPlainTextEdit *notes;
    QGridLayout *gridLayout;
    QPushButton *play_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *reset_button;
    QSpacerItem *horizontalSpacer_2;

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

        comboBox = new QComboBox(widget_3);
        comboBox->addItem(QString());
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/Timer_icons/timer.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/Timer_icons/alarm.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon1, QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setAutoFillBackground(false);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox\n"
"{\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    selection-background-color: #111;\n"
"    selection-color: white;\n"
"    color: white;\n"
"    background-color: rgb(153, 153, 153);\n"
"    border-style: solid;\n"
"    border: 2px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"    padding: 1px 0px 1px 20px;\n"
"	font: 25 14pt \"Calibri Light\";\n"
"}\n"
"\n"
"\n"
"QComboBox:hover, QPushButton:hover\n"
"{\n"
"    border: 1px solid rgb(5, 184, 204);\n"
"    color: white;\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"     color: white;\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; \n"
"     border-top-right-radius: 3px; \n"
"     border-bottom-right-radius: 3px;\n"
"     padding-left: 10px;\n"
" }\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    color: white;\n"
"    selecti"
                        "on-background-color: rgba(5, 184, 204, 100);\n"
"}"));
        comboBox->setEditable(false);
        comboBox->setMaxCount(2147483644);
        comboBox->setInsertPolicy(QComboBox::InsertAtBottom);

        verticalLayout_2->addWidget(comboBox);

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

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        spacer = new QSpacerItem(65, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(spacer);

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
        Timer_time->setScaledContents(false);
        Timer_time->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Timer_time->setWordWrap(true);

        horizontalLayout_2->addWidget(Timer_time);


        timer_layout->addLayout(horizontalLayout_2);

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

        notes = new QPlainTextEdit(widget_2);
        notes->setObjectName(QString::fromUtf8("notes"));
        notes->setStyleSheet(QString::fromUtf8("color: rgb(190, 190, 190);\n"
"font: 25 16pt \"Calibri Light\";"));
        notes->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        notes->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        notes->setReadOnly(true);
        notes->setBackgroundVisible(false);

        note_layout->addWidget(notes);


        verticalLayout->addLayout(note_layout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        play_button = new QPushButton(widget_2);
        play_button->setObjectName(QString::fromUtf8("play_button"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Calibri"));
        font7.setPointSize(16);
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        play_button->setFont(font7);
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

        gridLayout->addWidget(play_button, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        reset_button = new QPushButton(widget_2);
        reset_button->setObjectName(QString::fromUtf8("reset_button"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Calibri"));
        font8.setPointSize(16);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setWeight(50);
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

        gridLayout->addWidget(reset_button, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        horizontalLayout->addWidget(widget_2, 0, Qt::AlignHCenter);

        MainWindow->setCentralWidget(widget);

        retranslateUi(MainWindow);

        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Timers:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "all", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "timers", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "alarms", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "working", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "paused", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "with notes", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("MainWindow", "melodic", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("MainWindow", "defoult", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("MainWindow", "my types", nullptr));

        comboBox->setCurrentText(QCoreApplication::translate("MainWindow", "all", nullptr));
        delete_button->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        add_button->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        Timer_name->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        Timer_mode->setText(QCoreApplication::translate("MainWindow", "mode", nullptr));
        Timer_time->setText(QCoreApplication::translate("MainWindow", "00:00:00.0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Note:", nullptr));
        play_button->setText(QCoreApplication::translate("MainWindow", "PAUSE", nullptr));
        reset_button->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
