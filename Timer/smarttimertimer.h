#ifndef SMARTTIMERTIMER_H
#define SMARTTIMERTIMER_H

#include "smarttimer.h"
#include <QMediaPlayer>
#include "QDateTime"
#include "QTime"

class SmartTimerTimer : public SmartTimer
{
public:
    SmartTimerTimer(QString name, QTime end_time);
    void change(int a);
    void pause(){work = false;}
    void play() {work = true;}
    void pp();
    void reset();
};

#endif // SMARTTIMERTIMER_H
