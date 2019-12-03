/**
*	@file timeralarm.cpp
*
*	@brief signal that timer is ended
*
*	@author Bondarets Daryna K-29
*
*	@version 3/12/19
*/

#include "timeralarm.h"
#include "ui_timeralarm.h"

/**
* @brief constructor
* @details creates window for signal that timer ends
*/
timeralarm::timeralarm(SmartTimer* end_timer, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::timeralarm)
{
    ui->setupUi(this);

    melody = new QMediaPlayer();
    melody->setMedia(end_timer->melodyURL);
    if (melody->state() == QMediaPlayer::StoppedState)
        melody->setPosition(0);
    melody->play();

    ui->name->setText(end_timer->name);
    if (end_timer->is_note) ui->note->setText(end_timer->note);
}

/**
* @brief destructor
*/
timeralarm::~timeralarm()
{
    delete ui;
}

/**
* @brief button to stop and close signal
*/
void timeralarm::on_closeButton_clicked()
{
    melody->stop();
    delete melody;
    close();
}
