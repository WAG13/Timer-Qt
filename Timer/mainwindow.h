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
    QStringList str;
    QTimer *timer;
    unsigned int timer_count = 0;
    unsigned int timer_id = 0;
    bool work = false;

public slots:
    void addAlarm();
    void addTimer(SmartTimer timer);
    void add_element(SmartTimer timer);

    void updateTime();
private slots:
    void on_add_button_clicked();

    void on_delete_button_clicked();

    void on_pushButton_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    timersetter *ts;

};
#endif // MAINWINDOW_H
