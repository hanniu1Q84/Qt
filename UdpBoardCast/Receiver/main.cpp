#include "UdpReceiverDialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UdpReceiverDialog w;
    w.show();

    return a.exec();
}
