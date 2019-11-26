#ifndef SMARTTIMER_H
#define SMARTTIMER_H

#include <QTimer>

class SmartTimer
{
public:
    int id;
    QString name;
    int mode;

    bool work;
    QTimer *timer;

    SmartTimer();
};

#include <alarm.h>
//#include <Timer.h>
#endif // SMARTTIMER_H
