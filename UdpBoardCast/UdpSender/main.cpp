#include "UdpSenderdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    UdpSenderDialog w;
    w.show();

    return a.exec();
}
