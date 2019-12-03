/**
*	@file mainwindow.h
*
*	@brief Lab#2 smart timer
*
*	@author Bondarets Daryna K-29
*
*	@version 3/12/19
*/

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

/**
* @brief class of main window
*/
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QList<SmartTimer*> timers;
    QTimer *timer;

public slots:
    void add_element(SmartTimer* timer);
    void add_alarm(SmartTimer* timer);
    void add_timer(SmartTimer* timer);
    void end_signal(SmartTimer* timer);
    void update_time();

private slots:
    void on_add_button_clicked();
    void on_delete_button_clicked();
    void on_listWidget_itemClicked(QListWidgetItem *item); 
    void on_comboBox_currentIndexChanged(int index);
    void on_play_button_clicked();
    void on_reset_button_clicked();
    void show_timer(SmartTimer* current_timer);

private:
    Ui::MainWindow *ui;
    timersetter *ts;
    timeralarm *ta;

};
#endif // MAINWINDOW_H
