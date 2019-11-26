#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QDateTime>


MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_alarm_button_clicked()
{
    ts = new timersetter(this);
    ts->show();
}

void MainWindow::on_add_timer_button_clicked()
{
    timer_count++;
    ui->progressBar->setValue(timer_count);
    QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/Timer_icons/timer.png"),QString::number(timer_count));
    ui->listWidget->addItem(item);
}

void MainWindow::on_delete_button_clicked()
{
    if(!(ui->listWidget->selectedItems().isEmpty())) timer_count--;
    ui->progressBar->setValue(timer_count);
    qDeleteAll(ui->listWidget->selectedItems());

    for(int row(0); row < timer_count; row++ )
    {
        //ui->listWidget->item(row)->checkState();
    }

}

void MainWindow::on_pushButton_clicked()
{

}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    ui->delete_button->setEnabled(true);
}
