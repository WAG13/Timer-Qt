#ifndef SMARTTIMERTIMER_H
#define SMARTTIMERTIMER_H

#include "smarttimer.h"
#include "QDateTime"

class SmartTimerTimer : public SmartTimer
{
public:
    SmartTimerTimer(QString name, QDateTime time, QDateTime end_time);
    void change(int a);
};

#endif // SMARTTIMERTIMER_H
