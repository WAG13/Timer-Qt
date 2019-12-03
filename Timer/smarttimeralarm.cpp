/**
*	@file smarttimeralarm.h
*
*	@brief subclass of SmartTimer for alarm type
*
*	@author Bondarets Daryna K-29
*
*	@version 3/12/19
*/

#include "smarttimeralarm.h"

/**
* @brief constructor
* @details creates SmartTimerAlarm and sets name and end-time
*/
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

/**
* @brief changes time
*/
void SmartTimerAlarm::change(int a)
{
    if (work)
    {
        QDateTime now = QDateTime::currentDateTimeUtc();
        ms = now.msecsTo(time);
    }
}

/**
* @brief changes working mode of timer
* @details if timer is playing then pause
* and if timer is paused then plays it back
*/
void SmartTimerAlarm::pp()
{
    if (work) work=false;
    else work=true;
}

/**
* @brief reset timer to begining condition
* @details if end-time is earlier than now-time then sets end-time + 1 day
*/
void SmartTimerAlarm::reset()
{
    work = true;
    time.addDays(1);
    QDateTime now = QDateTime::currentDateTimeUtc();
    ms = now.msecsTo(time);
    ms_end = ms;
}
