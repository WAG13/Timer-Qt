#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QListWidgetItem>
#include <QMediaPlayer>

#include "timersetter.h"
#include "timeralarm.h"
#include "smarttimer.h"
#include "smarttimeralarm.h"
#include "smarttimertimer.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QList<SmartTimer*> timers;
    QTimer *timer;

public slots:
    void addAlarm(SmartTimer* timer);
    void addTimer(SmartTimer* timer);
    void add_element(SmartTimer* timer);
    void end_signal(SmartTimer* timer);
    void update_time();

private slots:
    void on_add_button_clicked();
    void on_delete_button_clicked();
    void on_listWidget_itemClicked(QListWidgetItem *item);
    void show_timer(SmartTimer* current_timer);
    void on_play_button_clicked();

    void on_reset_button_clicked();

private:
    Ui::MainWindow *ui;
    timersetter *ts;
    timeralarm *ta;

};
#endif // MAINWINDOW_H
