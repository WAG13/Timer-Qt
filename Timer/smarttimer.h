#ifndef SMARTTIMER_H
#define SMARTTIMER_H

#include <QDateTime>

class SmartTimer
{
public:
    int id;
    QString name;
    int mode;
    bool work;
    QDateTime time;
    int ms_end;
    int ms;

    SmartTimer(QString name, int mode, QDateTime time,int ms);
    ~SmartTimer();
};

#endif // SMARTTIMER_H
