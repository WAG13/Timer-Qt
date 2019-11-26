#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QListWidgetItem>

#include "timersetter.h"
#include "smarttimer.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QList<SmartTimer> timers;

private slots:
    void on_add_alarm_button_clicked();
    void on_add_timer_button_clicked();

    void on_delete_button_clicked();

    void on_pushButton_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    int timer_count = 0;
    Ui::MainWindow *ui;
    timersetter *ts;
    bool work = false;

};
#endif // MAINWINDOW_H
