/**
*	@file timersetter.h
*
*	@brief setting for creating new timer
*
*	@author Bondarets Daryna K-29
*
*	@version 3/12/19
*/

#ifndef TIMERSETTER_H
#define TIMERSETTER_H

#include "smarttimer.h"
#include "smarttimeralarm.h"
#include "smarttimertimer.h"
#include <QDialog>
#include <QDateTime>
#include <QDir>
#include <QFileDialog>

namespace Ui {class timersetter;}

/**
* @brief class of window that sets new timer
*/
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

    void on_melody_button_clicked();

private:
    QUrl melody_path = QUrl("qrc:/sound/sounds/cuckoo-clock-05.wav");
signals:
    void send_element (SmartTimer* a);

};

#endif // TIMERSETTER_H
