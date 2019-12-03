#ifndef SMARTTIMERALARM_H
#define SMARTTIMERALARM_H

#include "smarttimer.h"
#include <QMediaPlayer>
#include "QDateTime"
#include "QTime"

class SmartTimerAlarm : public SmartTimer
{
public:
    SmartTimerAlarm(QString name, QTime end_time);
    void change(int a);
    void pp();
    void reset();
};

#endif // SMARTTIMERALARM_H
