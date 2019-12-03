/**
*	@file smarttimer.cpp
*
*	@brief class for Smart timer
*
*	@author Bondarets Daryna K-29
*
*	@version 3/12/19
*/

#include "smarttimer.h"

/**
* @brief constructor
* @details creates SmartTimer and sets name, mode, end-time and current time
*/
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

/**
* @brief sets new melody and changes type to is_melodic
*/
void SmartTimer::set_melody(QUrl url)
{
    is_melodic = true;
    melodyURL = url;
}

/**
* @brief sets notes and changes type to is_note
*/
void SmartTimer::set_note(QString note_)
{
    is_note = true;
    note = note_;
}

/**
* @brief changes type of timer
*/
void SmartTimer::set_type(QString type_)
{
    type = type_;
}


