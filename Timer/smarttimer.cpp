#include "smarttimer.h"

SmartTimer::SmartTimer(QString name_, int mode_,QDateTime time_, QDateTime end_time)
{
    name = name_;
    mode = mode_;
    work = true;
    time = time_;
    ms = ms_;
    ms_end = ms;
    melodyURL = QUrl("qrc:/sound/sounds/cuckoo-clock-05.wav");

}


