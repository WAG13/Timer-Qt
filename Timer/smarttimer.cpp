#include "smarttimer.h"

SmartTimer::SmartTimer(QString name_, int mode_,QDateTime time_, int ms_)
{
    name = name_;
    mode = mode_;
    work = true;
    time = time_;
    ms = ms_;
    ms_end=ms;

}
SmartTimer::~SmartTimer()
{

}
