#ifndef SMARTTIMER_H
#define SMARTTIMER_H

#include <QMediaPlayer>
#include <QDateTime>
#include <QTime>

class SmartTimer
{
public:
    int id;
    QString name;
    bool work;

    int mode;
    bool is_note=false;
    QString note="";

    QString type="default";

    bool is_melodic=false;
    QUrl melodyURL;

    QDateTime time; //start or end time

    long long ms_end;
    long long ms;

    SmartTimer(){}
    SmartTimer(QString name, int mode, QDateTime time, QTime end_time);
    void change(int a) { ms -= a; }
    void set_melody(QUrl);
    void set_note(QString);
    void set_type(QString);
    virtual void pp(){}
    virtual void reset(){}

};

#include "smarttimeralarm.h"
#include "smarttimertimer.h"
#endif // SMARTTIMER_H
