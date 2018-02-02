#include "mainwindow.h"
#include <QApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
	qDebug("fuck you visual studio");
	qDebug("fuck you vs");

    w.show();
    return a.exec();
}
