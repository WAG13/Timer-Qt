#ifndef SMARTTIMERALARM_H
#define SMARTTIMERALARM_H

#include "smarttimer.h"
#include "QDateTime"

class SmartTimerAlarm : public SmartTimer
{
public:
    QDateTime time_end;
    SmartTimerAlarm(QString name, QDateTime time, QDateTime end_time);
    void change(int a);
};

#endif // SMARTTIMERALARM_H
