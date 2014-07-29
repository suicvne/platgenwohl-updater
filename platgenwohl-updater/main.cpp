#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //Check the current version against the available version



    //show the gui and crap
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
