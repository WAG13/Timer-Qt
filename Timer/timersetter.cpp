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
        SmartTimer* timer = new SmartTimerAlarm(ts->plainTextEdit->toPlainText(), QDateTime::currentDateTimeUtc(), ts->timeEdit->time());
        send_element(timer);
    }
    else if (ts->radio_timer->isChecked()){        
        SmartTimer* timer = new SmartTimerTimer(ts->plainTextEdit->toPlainText(), QDateTime::currentDateTimeUtc(), ts->timeEdit->time());
        send_element(timer);
    }

    close();
}

void timersetter::on_pushButton_clicked()
{
    close();
}
