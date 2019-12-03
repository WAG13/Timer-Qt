#ifndef TIMERSETTER_H
#define TIMERSETTER_H

#include "smarttimer.h"
#include "smarttimeralarm.h"
#include "smarttimertimer.h"
#include <QDialog>
#include <QDateTime>

namespace Ui {class timersetter;}

class timersetter : public QDialog
{
    Q_OBJECT

public:
    explicit timersetter(QWidget *parent = nullptr);
    ~timersetter();
    Ui::timersetter *ts;

private slots:
    void on_pushButton_OK_clicked();
    void on_pushButton_clicked();

private:

signals:
    void send_element (SmartTimer* a);

};

#endif // TIMERSETTER_H
