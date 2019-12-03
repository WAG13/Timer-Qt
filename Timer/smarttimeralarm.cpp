#include "smarttimeralarm.h"

SmartTimerAlarm::SmartTimerAlarm(QString name_, QDateTime time_, int ms_)
{
    name = name_;
    mode = 2;
    work = true;
    time = time_;
    ms = ms_;
    ms_end = ms;
    time_end = time_end.addMSecs(ms);
    melodyURL = QUrl("qrc:/sound/sounds/cuckoo-clock-05.wav");
}
