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
    connect(timer,SIGNAL(timeout()),this,SLOT(updateTime()));
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

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    ui->delete_button->setEnabled(true);
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
    timer_count++;
    ui->progressBar->setValue(timer_count);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/Timer_icons/timer.png"),timer.name);
    ui->listWidget->addItem(item);
    timers.push_back(timer);
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
}


void MainWindow::updateTime()
{
    //ui->listWidget->addItem("Asd");
    QDateTime current(QDateTime::currentDateTimeUtc());

    for (int i = 0; i < timers.size(); i++){
        if (timers[i].ms <= 0){
            timers[i].work = false;
        }
        if (timers[i].work){
            timers[i].ms -= 100;
            QTime time;
            time.addMSecs(timers[i].ms);
            ui->Timer_time->setText(time.toString("h:mm:ss"));
            qDebug() << QString::number(timers[i].ms) << "ms";

        }
    }
    //current.msec();

}
