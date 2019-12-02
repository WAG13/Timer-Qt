#include "smarttimer.h"

SmartTimer::SmartTimer(QString name_, int mode_,QDateTime time_,int _ms )
{
    name = name_;
    mode = mode_;
    work = true;
    time = time_;
    ms = _ms;

}
SmartTimer::~SmartTimer()
{

}
