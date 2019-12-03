#include "smarttimertimer.h"

SmartTimerTimer::SmartTimerTimer(QString name_, QDateTime time_, int ms_)
{
    name = name_;
    mode = 1;
    work = true;
    time = time_;
    ms = ms_;
    ms_end = ms;
    melodyURL = QUrl("qrc:/sound/sounds/cuckoo-clock-05.wav");
}
