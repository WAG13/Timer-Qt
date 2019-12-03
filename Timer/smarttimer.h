#ifndef SMARTTIMER_H
#define SMARTTIMER_H

#include <QDateTime>
#include <QMediaPlayer>

class SmartTimer
{
public:
    int id;
    QString name;
    int mode;
    bool work;
    QUrl melodyURL;
    QDateTime time; //start time

    int ms_end;
    int ms;

    SmartTimer(QString name, int mode, QDateTime time, QDateTime end_time);
    void change(int a) { ms -= a; }
};

#include "smarttimeralarm.h"
#include "smarttimertimer.h"
#endif // SMARTTIMER_H
