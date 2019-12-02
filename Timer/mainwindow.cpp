#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QTime>
#include <QDateTime>
#include "smarttimer.h"
#include <QDebug>

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
    if(!(ui->listWidget->selectedItems().isEmpty())) timer_count--;
    ui->progressBar->setValue(timer_count);
    qDeleteAll(ui->listWidget->selectedItems());

}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    ui->delete_button->setEnabled(true);

}

void MainWindow::add_element(SmartTimer timer)
{

    if(timer.mode==2)
    {
        addAlarm();
    }else if (timer.mode == 1)
    {
        addTimer(timer);
    }
    ui->listWidget->setCurrentRow(timers.size()-1);
}

void MainWindow::addAlarm()
{
    timer_count++;
    ui->progressBar->setValue(timer_count);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/Timer_icons/alarm.png"),QString::number(timer_count));
    ui->listWidget->addItem(item);
}

void MainWindow::addTimer(SmartTimer timer)
{
    ui->play_button->hide();
    timer_count++;
    ui->progressBar->setValue(timer_count);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/Timer_icons/timer.png"),timer.name);
    ui->listWidget->addItem(item);
    timers.push_back(timer);
}

void MainWindow::show_timer(SmartTimer current_timer)
{
    ui->Timer_name->setText(current_timer.name);
    if (current_timer.mode==1) ui->Timer_mode->setText("Timer");
    if (current_timer.mode==2) ui->Timer_mode->setText("Alarm");

    ui->progressBar->setMaximum(current_timer.ms_end);
    ui->progressBar->setValue(current_timer.ms);

    QTime temp(0,0);
    QTime showt = temp.addMSecs(current_timer.ms);
    QString show_time = showt.toString("hh:mm:ss.z");

    ui->Timer_time->setText(show_time);
    qDebug() << QString::number(current_timer.ms) << "ms";
}

void MainWindow::update_time()
{
    QDateTime current(QDateTime::currentDateTimeUtc());

    if (timers.size()>0)
        show_timer(timers[ui->listWidget->currentRow()]);
    for (int i = 0; i < timers.size(); i++){
        if (timers[i].ms <= 0)
        {
            timers[i].work = false;
        }
        if (timers[i].work)
        {
            timers[i].ms -= 100;
        }
    }
}
