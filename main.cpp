#include "MainWindow.h"

#include <QApplication>

// Comment from Zhenya

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

