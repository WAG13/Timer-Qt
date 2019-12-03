#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QTime>
#include <QDateTime>
#include <QDebug>
#include "smarttimer.h"


MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    timer->setInterval(100);
    connect(timer,SIGNAL(timeout()),this,SLOT(update_time()));
    timer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_button_clicked()
{
    ts = new timersetter(this);
    ts->show();
}

void MainWindow::on_delete_button_clicked()
{
    if (timers.size()>0)
    {
    timers.removeAt(ui->listWidget->currentRow());
    QListWidgetItem *it = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete it;
    }
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{

}

void MainWindow::add_element(SmartTimer* timer)
{

    if(timer->mode==2)
    {
        addAlarm(timer);
    }else if (timer->mode == 1)
    {
        addTimer(timer);
    }
    ui->listWidget->setCurrentRow(timers.size()-1);
}

void MainWindow::addAlarm(SmartTimer* timer_)
{
    if (timer_)
    {
        QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/Timer_icons/alarm.png"),timer_->name);
        ui->listWidget->addItem(item);
        timers.push_back(timer_);
    }
}

void MainWindow::addTimer(SmartTimer* timer_)
{
    if (timer_)
    {
        QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/Timer_icons/timer.png"),timer_->name);
        ui->listWidget->addItem(item);
        timers.push_back(timer_);
    }
}

void MainWindow::show_timer(SmartTimer* current_timer)
{
    /*if (current_timer->mode == 2)
    {
        ui->play_button->hide();
        ui->reset_button->hide();
    }else
    {
        ui->play_button->show();
        ui->reset_button->show();
    */
    if (current_timer->work)
        ui->play_button->setText("PAUSE");
    else ui->play_button->setText("PLAY");

    ui->Timer_name->setText(current_timer->name);
    if (current_timer->mode==1)
        ui->Timer_mode->setText("Timer "+current_timer->type);
    if (current_timer->mode==2)
        ui->Timer_mode->setText("Alarm "+current_timer->type);

    if (current_timer->is_note)
        ui->notes->setPlainText(current_timer->note);

    ui->progressBar->setMaximum(current_timer->ms_end);
    ui->progressBar->setValue(current_timer->ms);

    QTime temp(0,0);
    QTime showt = temp.addMSecs(current_timer->ms);
    QString show_time = showt.toString("hh:mm:ss.z");

    ui->Timer_time->setText(show_time);
}

void MainWindow::end_signal(SmartTimer* end_timer)
{
    ta = new timeralarm(end_timer, this);
    ta->show();
}

void MainWindow::update_time()
{
    QDateTime current(QDateTime::currentDateTimeUtc());

    if (timers.size()>0)
        show_timer(timers[ui->listWidget->currentRow()]);
    for (int i = 0; i < timers.size(); i++){
        if (timers[i]->ms <= 0)
        {
            if (timers[i]->work) end_signal(timers[i]);
            timers[i]->work = false;
        }
        if (timers[i]->work)
        {
            timers[i]->change(100);
        }
    }
}

void MainWindow::on_play_button_clicked()
{
    timers[ui->listWidget->currentRow()]->pp();
}

void MainWindow::on_reset_button_clicked()
{
    timers[ui->listWidget->currentRow()]->reset();
}
