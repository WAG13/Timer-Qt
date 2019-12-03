#include "smarttimeralarm.h"

SmartTimerAlarm::SmartTimerAlarm(QString name_, QTime end_time)
{
    name = name_;
    mode = 2;
    work = true;
    time.setDate(QDate::currentDate());
    time.setTime(end_time);
    QDateTime now = QDateTime::currentDateTimeUtc();
    ms = now.msecsTo(time);
    qDebug()<<ms;
    if (ms <= 0)
    {time=time.addDays(1);
    qDebug()<<time.toString();}
    ms = now.msecsTo(time);
    qDebug()<<ms;
    ms_end = ms;
    melodyURL = QUrl("qrc:/sound/sounds/cuckoo-clock-05.wav");
}

void SmartTimerAlarm::change(int a)
{
    if (work)
    {
        QDateTime now = QDateTime::currentDateTimeUtc();
        ms = now.msecsTo(time);
    }
}

void SmartTimerAlarm::pp()
{
    if (work) work=false;
    else work=true;
}

void SmartTimerAlarm::reset()
{
    work = true;
    time.addDays(1);
    QDateTime now = QDateTime::currentDateTimeUtc();
    ms = now.msecsTo(time);
    ms_end = ms;
}
