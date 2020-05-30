#include "mainwindow.h"
#include "timersetter.h"

#include <QApplication>

/**
* @brief creates main window
*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
