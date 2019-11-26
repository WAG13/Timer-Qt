#ifndef TIMERSETTER_H
#define TIMERSETTER_H

#include <QDialog>

namespace Ui {
class timersetter;
}

class timersetter : public QDialog
{
    Q_OBJECT

public:
    explicit timersetter(QWidget *parent = nullptr);
    ~timersetter();

private slots:
    void on_pushButton_OK_clicked();

private:
    Ui::timersetter *ui;
};

#endif // TIMERSETTER_H
