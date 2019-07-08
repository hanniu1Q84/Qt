#include <QCoreApplication>
#include <QWaitCondition>
#include <QMutex>
#include <QThread>

const int DataSize = 10;
const int BufferSize = 4;

int buffer[BufferSize]; //仓库
//生产条件，缓冲区不满则可以生产，否则等待
QWaitCondition bufferIsNotFull;

//消费条件，缓冲区不空则可以消费，否则等待
QWaitCondition bufferIsNotEmpty;

//记录当前缓冲区有多少用过的字节
int usedSpace = 0;

QMutex mutex;

//生产者线程
class threadProducer:public QThread{
public:
    void run(void) {
        for(int i = 0; i < DataSize; i++){
            mutex.lock();
            while(usedSpace == BufferSize){
                //wait先解锁，再阻塞
               bufferIsNotFull.wait(&mutex);
            }
            buffer[i%BufferSize] = i + 1;
            qDebug("producer:%d", buffer[i % BufferSize]) ;
            ++usedSpace;

            //唤醒消费者线程
            bufferIsNotEmpty.wakeAll();
            mutex.unlock();
        }
    }
};

//消费者线程
class threadConsumer:public QThread{
    void run(){
        for(int i = 0; i < DataSize; i++){
            mutex.lock();
            while(usedSpace == 0){
                bufferIsNotEmpty.wait(&mutex);
            }
            qDebug("consumer:%d", buffer[i % BufferSize]);
            --usedSpace;
            bufferIsNotFull.wakeAll();
            mutex.unlock();
        }
    }
};

int main(int argc, char* argv[]) {
    QCoreApplication app(argc, argv);
    threadProducer producer;
    threadConsumer consumer;
    producer.start();
    consumer.start();
    producer.wait();
    consumer.wait();

    app.exec();
}
