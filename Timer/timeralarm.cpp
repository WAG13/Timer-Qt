#include "timeralarm.h"
#include "ui_timeralarm.h"

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

timeralarm::~timeralarm()
{
    delete ui;
}

void timeralarm::on_closeButton_clicked()
{
    melody->stop();
    delete melody;
    close();
}
