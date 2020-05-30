/**
*	@file smarttimeralarm.h
*
*	@brief subclass of SmartTimer for timer type
*
*	@author Bondarets Daryna K-29
*
*	@version 3/12/19
*/

#ifndef SMARTTIMERTIMER_H
#define SMARTTIMERTIMER_H

#include "smarttimer.h"
#include <QMediaPlayer>
#include <QDateTime>
#include <QTime>

/**
* @brief SmartTimer of timer type
* @details we set period of time when timer needs to end
*/
class SmartTimerTimer : public SmartTimer
{
public:
    SmartTimerTimer(QString name, QTime end_time);
    void change(int a);
    void reset();
    void pp();
    void pause(){work = false;}
    void play() {work = true;}
};

#endif // SMARTTIMERTIMER_H
