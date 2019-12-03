/**
*	@file mainwindow.cpp
*
*	@brief Lab#2 smart timer
*
*	@author Bondarets Daryna K-29
*
*	@version 3/12/19
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QTime>
#include <QDateTime>
#include <QDebug>
#include "smarttimer.h"

/**
* @brief constructor
* @details creates main window and sets interval of main timer
*/
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

/**
* @brief destructor
*/
MainWindow::~MainWindow()
{
    delete ui;
}

/**
* @brief adds new timer
* @details opens window whith settings for new timer
*/
void MainWindow::on_add_button_clicked()
{
    ts = new timersetter(this);
    ts->show();
}

/**
* @brief deletes selected timer
* @details deletes selected timer in listWidget
*/
void MainWindow::on_delete_button_clicked()
{
    if (timers.size()>0)
    {
    timers.removeAt(ui->listWidget->currentRow());
    QListWidgetItem *it = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete it;
    }
}

/**
* @brief enables delete button if timer is selected
*/
void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    ui->delete_button->setEnabled(true);
}

/**
* @brief adds new element (timer or alarm)
*/
void MainWindow::add_element(SmartTimer* timer)
{
    ui->comboBox->setCurrentIndex(0);
    if(timer->mode==2)
    {
        add_alarm(timer);
    }else if (timer->mode == 1)
    {
        add_timer(timer);
    }
    ui->listWidget->setCurrentRow(timers.size()-1);
}

/**
* @brief adds new alarm to timers and listWidget
*/
void MainWindow::add_alarm(SmartTimer* timer_)
{
    if (timer_)
    {
        QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/Timer_icons/alarm.png"),timer_->name);
        ui->listWidget->addItem(item);
        timers.push_back(timer_);
    }
}

/**
* @brief adds new timer to timers and listWidget
*/
void MainWindow::add_timer(SmartTimer* timer_)
{
    if (timer_)
    {
        QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/Timer_icons/timer.png"),timer_->name);
        ui->listWidget->addItem(item);
        timers.push_back(timer_);
    }
}

/**
* @brief shows selected timer on the right
*/
void MainWindow::show_timer(SmartTimer* current_timer)
{
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
    else ui->notes->setPlainText("");

    ui->progressBar->setMaximum(current_timer->ms_end);
    ui->progressBar->setValue(current_timer->ms);

    QTime temp(0,0);
    QTime showt = temp.addMSecs(current_timer->ms);
    QString show_time = showt.toString("hh:mm:ss.z");

    ui->Timer_time->setText(show_time);
}

/**
* @brief calls window with end signals
*/
void MainWindow::end_signal(SmartTimer* end_timer)
{
    ta = new timeralarm(end_timer, this);
    ta->show();
}

/**
* @brief time changing of timers
*/
void MainWindow::update_time()
{
    QDateTime current(QDateTime::currentDateTime());

    if (timers.size()>0)
        show_timer(timers[ui->listWidget->currentRow()]);
    for (int i = 0; i < timers.size(); i++){
        if (timers[i]->ms <= 0)
        {
            qDebug()<<current.time().toString("hh:mm:ss");
            if (current.time()<DND_start || current.time()>DND_finish)
                if (timers[i]->work)
                    end_signal(timers[i]);
            timers[i]->work = false;
        }
        if (timers[i]->work)
        {
            timers[i]->change(100);
        }
    }
}

/**
* @brief makes timer work
*/
void MainWindow::on_play_button_clicked()
{
    timers[ui->listWidget->currentRow()]->pp();
}

/**
* @brief makes timer not work
*/
void MainWindow::on_reset_button_clicked()
{
    timers[ui->listWidget->currentRow()]->reset();
}

/**
* @brief fiters listWidget by some properties
*/
void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    if (index==0) ui->delete_button->show();
    else ui->delete_button->hide();

    if (timers.size()>0)
    for (int i = 0; i < timers.size(); i++){
        bool filter=true;

        switch (index)
        {
        case 0: {filter=true;} break;
        case 1: {filter=timers[i]->mode==1;}break;
        case 2: {filter=timers[i]->mode==2;}break;
        case 3: {filter=timers[i]->work;}break;
        case 4: {filter=!(timers[i]->work);}break;
        case 5: {filter=timers[i]->is_note;}break;
        case 6: {filter=timers[i]->is_melodic;}break;
        case 7: {filter=(timers[i]->type == "default");}break;
        case 8: {filter=(timers[i]->type != "default");}break;
        default: break;
        }
        if (filter)
        {
            ui->listWidget->item(i)->setHidden(false);
        }
        else {
            ui->listWidget->item(i)->setHidden(true);
        }
    }

}


void MainWindow::on_group_button_clicked()
{
    QString timer_type = timers[ui->listWidget->currentRow()]->type;
    timers[ui->listWidget->currentRow()]->pp();
    for (int i = 0; i < timers.size(); i++){
        if (timers[i]->type == timer_type && ui->listWidget->currentRow()!=i)
                timers[i]->work = timers[ui->listWidget->currentRow()]->work;
    }
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if (DNDisturb) DNDisturb = false;
    else
    {
        DNDisturb = true;
        DND_start = ui->time_begin->time();
        DND_finish = ui->time_end->time();
    }

}

void MainWindow::on_time_end_userTimeChanged(const QTime &time)
{
    DND_finish = ui->time_end->time();
}

void MainWindow::on_time_begin_userTimeChanged(const QTime &time)
{
    DND_start = ui->time_begin->time();
}
