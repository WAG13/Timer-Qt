/**
*	@file smarttimeralarm.h
*
*	@brief subclass of SmartTimer for alarm type
*
*	@author Bondarets Daryna K-29
*
*	@version 3/12/19
*/

#ifndef SMARTTIMERALARM_H
#define SMARTTIMERALARM_H

#include "smarttimer.h"
#include <QMediaPlayer>
#include <QDateTime>
#include <QTime>

/**
* @brief SmartTimer of alarm type
* @details we set end-time when timer needs to end
*/
class SmartTimerAlarm : public SmartTimer
{
public:
    SmartTimerAlarm(QString name, QTime end_time);
    void change(int a);
    void reset();
    void pp();
};

#endif // SMARTTIMERALARM_H
