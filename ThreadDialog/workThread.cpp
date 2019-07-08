#include "workThread.h"

workThread::workThread()
{

}
workThread::~workThread()
{

}
void workThread::run()
{
    unsigned long threadId =
            reinterpret_cast<unsigned long>(currentThreadId());
    while(1) {
        for(int i = 0; i < 100; i++) {
            msleep(200);
            qDebug("%lu:%d",threadId, i);
        }
    }
}

