#ifndef TIMERALARM_H
#define TIMERALARM_H

#include "smarttimer.h"
#include <QDialog>
#include <QDateTime>
#include <QMediaPlayer>

namespace Ui {class timeralarm;}

class timeralarm : public QDialog
{
    Q_OBJECT

public:
    explicit timeralarm(SmartTimer*, QWidget *parent = nullptr);
    ~timeralarm();

private slots:
    void on_closeButton_clicked();

private:
    Ui::timeralarm *ui;
    QMediaPlayer *melody;
};

#endif // TIMERALARM_H
