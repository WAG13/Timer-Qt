#include "timersetter.h"
#include "ui_timersetter.h"
#include <QDebug>
#include "smarttimer.h"

timersetter::timersetter(QWidget *parent) :
    QDialog(parent),
    ts(new Ui::timersetter)
{
    ts->setupUi(this);
    QWidget* pwidget = parentWidget();
    connect(this,SIGNAL(send_element(SmartTimer*)),pwidget,SLOT(add_element(SmartTimer*)));
}

timersetter::~timersetter()
{
    delete ts;
}


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

void timersetter::on_pushButton_clicked()
{
    close();
}

void timersetter::on_melody_button_clicked()
{
    melody_path = QFileDialog::getOpenFileUrl(this, "melody", QUrl::fromLocalFile("C:/"), ("wav files (*.wav)"));
}
