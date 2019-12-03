/**
*	@file timersetter.cpp
*
*	@brief setting for creating new timer
*
*	@author Bondarets Daryna K-29
*
*	@version 3/12/19
*/

#include "timersetter.h"
#include "ui_timersetter.h"
#include <QDebug>
#include "smarttimer.h"

/**
* @brief constructor
* @details creates settings window
*/
timersetter::timersetter(QWidget *parent) :
    QDialog(parent),
    ts(new Ui::timersetter)
{
    ts->setupUi(this);
    QWidget* pwidget = parentWidget();
    connect(this,SIGNAL(send_element(SmartTimer*)),pwidget,SLOT(add_element(SmartTimer*)));
}

/**
* @brief destructor
*/
timersetter::~timersetter()
{
    delete ts;
}

/**
* @brief creates new smart timer and closes window
* @details creates main window and sets interval of main timer
*/
void timersetter::on_pushButton_OK_clicked()
{
    if (ts->radio_alarm->isChecked()){
        SmartTimer* timer = new SmartTimerAlarm(ts->plainTextEdit->toPlainText(), ts->timeEdit->time());
        if(ts->check_note->isChecked()) timer->set_note(ts->textEdit->toPlainText());
        if(ts->check_melody->isChecked()) timer->set_melody(melody_path);
        timer->set_type(ts->timer_type->toPlainText());
        send_element(timer);
    }
    else if (ts->radio_timer->isChecked()){        
        SmartTimer* timer = new SmartTimerTimer(ts->plainTextEdit->toPlainText(), ts->timeEdit->time());
        if(ts->check_note->isChecked()) timer->set_note(ts->textEdit->toPlainText());
        if(ts->check_melody->isChecked()) timer->set_melody(melody_path);
        timer->set_type(ts->timer_type->toPlainText());
        send_element(timer);
    }

    close();
}

/**
* @brief closes window
*/
void timersetter::on_pushButton_clicked()
{
    close();
}

/**
* @brief sets new melody for smart timer
*/
void timersetter::on_melody_button_clicked()
{
    melody_path = QFileDialog::getOpenFileUrl(this, "melody", QUrl::fromLocalFile("C:/"), ("wav files (*.wav)"));
}
