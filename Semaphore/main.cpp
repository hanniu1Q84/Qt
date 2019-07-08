#include <QCoreApplication> //无界面应用程序
#include <QSemaphore>
#include <QThread>

const int DataSize = 10;  //生产的产品总量
const int BufferSize = 4; //仓库大小
//定义全局缓冲区
int buffer[BufferSize];

//控制生产的信号量
QSemaphore freeSpace(BufferSize);

//控制消费的信号量
QSemaphore usedSpace(0);

//生产者线程
class threadProducer:public QThread {
public:
    void run(void){
        for(int i = 0; i < DataSize; i++){
            //P:生产者信号量-1
            freeSpace.acquire();
            buffer[i % BufferSize] = i + 1;
            qDebug("producer:%d", buffer[1% BufferSize]);
            //V:消费者信号量+1
            usedSpace.release();
        }
    }
};

//消费者线程
class threadConsumer:public QThread{
public:
    void run(void){
        for(int i = 0; i < DataSize; i++) {
           // P：消费者信号量-1
            usedSpace.acquire();
            qDebug("Consumer:%d", buffer[i % BufferSize]);
            //V：生产者信号量+1
            freeSpace.release();
            msleep(200);
        }
    }
};

int main(int argc, char* argv[]) {
    QCoreApplication app(argc, argv);
    threadConsumer consumer;
    threadProducer producer;

    producer.start();
    consumer.start();
    producer.wait();
    consumer.wait();

    return app.exec();

}
