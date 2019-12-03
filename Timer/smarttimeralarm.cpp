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
    if (ms <= 0)
        time=time.addDays(1);

    ms = now.msecsTo(time);
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
