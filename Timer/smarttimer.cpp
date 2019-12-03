#include "smarttimer.h"

SmartTimer::SmartTimer(QString name_, int mode_, QDateTime time_, QTime end_time)
{
    name = name_;
    mode = mode_;
    work = true;
    time = time_;
    ms = end_time.msecsSinceStartOfDay();
    ms_end = ms;
    melodyURL = QUrl("qrc:/sound/sounds/cuckoo-clock-05.wav");
}

void SmartTimer::set_melody(QUrl url)
{
    is_melodic = true;
    melodyURL = url;
}

void SmartTimer::set_note(QString note_)
{
    is_note = true;
    note = note_;
}

void SmartTimer::set_type(QString type_)
{
    type = type_;
}


