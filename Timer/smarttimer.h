/**
*	@file smarttimer.h
*
*	@brief class for Smart timer
*
*	@author Bondarets Daryna K-29
*
*	@version 3/12/19
*/

#ifndef SMARTTIMER_H
#define SMARTTIMER_H

#include <QMediaPlayer>
#include <QDateTime>
#include <QTime>

/**
* @brief Smart timer class
* @details we set end-time when timer needs to end
* and some addition information about timer (its melody or notes)
*/
class SmartTimer
{
public:
    QString name;
    bool work;
    int mode;

    bool is_note = false;
    QString note = "";

    QString type = "default";

    bool is_melodic = false;
    QUrl melodyURL;

    QDateTime time; //start or end time

    long long ms_end;
    long long ms;

    SmartTimer(){}
    SmartTimer(QString name, int mode, QDateTime time, QTime end_time);
    virtual void change(int a) { ms -= a; }
    virtual void reset(){}
    virtual void pp(){}
    void set_melody(QUrl);
    void set_note(QString);
    void set_type(QString);

};

#include "smarttimeralarm.h"
#include "smarttimertimer.h"
#endif // SMARTTIMER_H
