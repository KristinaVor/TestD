#include "mainwindow.h"

#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowFlags(Qt::FramelessWindowHint);
    int windowWidth = 1568;
    int windowHeight = 960;
    QDesktopWidget *desktop = QApplication::desktop();
    int x = (desktop->width() - windowWidth) / 2;
    int y = (desktop->height() - windowHeight) / 2;
    w.setGeometry(x, y, windowWidth, windowHeight);
    w.show();
    return a.exec();
}
