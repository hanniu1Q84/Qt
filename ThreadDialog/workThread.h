#ifndef WORKTHREAD_H
#define WORKTHREAD_H

#include <QThread>
#include <QDebug>

class workThread : public QThread
{
public:
    workThread();
    ~workThread();
    void run(); //xianchengchulihanshu
};

#endif // WORKTHREAD_H
