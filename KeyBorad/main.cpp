#include "KeyboradDialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    KeyboradDialog w;
    w.show();

    return a.exec();
}
