#include "timersetter.h"
#include "ui_timersetter.h"

timersetter::timersetter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::timersetter)
{
    ui->setupUi(this);
}

timersetter::~timersetter()
{
    delete ui;
}

void timersetter::on_pushButton_OK_clicked()
{
    //parent->timer_count++;
    //parent->progressBar->setValue(timer_count);
    //QListWidgetItem *item = new QListWidgetItem(QIcon(":/rec/Timer_icons/alarm.png"),QString::number(timer_count));
    //ui->listWidget->addItem(item);
}
