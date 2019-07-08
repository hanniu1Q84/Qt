#include "NetInfodialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NetInfoDialog w;
    w.show();

    return a.exec();
}
