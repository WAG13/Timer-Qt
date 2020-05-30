/**
*	@file smarttimeralarm.cpp
*
*	@brief subclass of SmartTimer for timer type
*
*	@author Bondarets Daryna K-29
*
*	@version 3/12/19
*/

#include "smarttimertimer.h"

/**
* @brief constructor
* @details creates SmartTimerTimer and sets name and period of ending
*/
SmartTimerTimer::SmartTimerTimer(QString name_, QTime ms_)
{
    name = name_;
    mode = 1;
    work = true;
    time = QDateTime::currentDateTime();
    ms = ms_.msecsSinceStartOfDay();
    ms_end = ms;
    melodyURL = QUrl("qrc:/sound/sounds/cuckoo-clock-05.wav");
}

/**
* @brief changes time
*/
void SmartTimerTimer::change(int a)
{
    if (work)
    {
        ms -= a;
    }
}

/**
* @brief changes working mode of timer
* @details if timer is playing then pause
* and if timer is paused then plays it back
*/
void SmartTimerTimer::pp()
{
    if (work) pause();
    else play();
}

/**
* @brief reset timer to begining condition
*/
void SmartTimerTimer::reset()
{
    work = true;
    time = QDateTime::currentDateTime();
    ms = ms_end;
}
