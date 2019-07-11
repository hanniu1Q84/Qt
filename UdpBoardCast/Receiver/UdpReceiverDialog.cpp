#include "UdpReceiverDialog.h"
#include "ui_UdpReceiverDialog.h"

UdpReceiverDialog::UdpReceiverDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UdpReceiverDialog)
{
    ui->setupUi(this);
    udpSocket = new QUdpSocket(this);
    isStarted = false;
}

UdpReceiverDialog::~UdpReceiverDialog()
{
    delete ui;
}

void UdpReceiverDialog::on_Start_Button_clicked()
{
    if(isStarted == false){
        //开始接收消息
        isStarted = true;
        //获取端口号
        port = ui->Port_Edit->text().toInt();
        //绑定端口号
        bool result = udpSocket->bind(port);
        if(result == false){
            QMessageBox::information(
                        this, "错误:\n", "绑定端口失败！");
            return;
        }
        ui->Port_Edit->setEnabled(false);
        ui->Start_Button->setText("停止接收");
        connect(udpSocket,SIGNAL(readyRead()),
                this, SLOT(messageReceived()));

     }
    else {
        isStarted = false;
        udpSocket->close();
        ui->Port_Edit->setEnabled(true);
        ui->Start_Button->setText("开始接收");
    }
}
void UdpReceiverDialog::messageReceived(){
    qDebug("%s",__func__);
    //判断udp套接字是否有数据到来
    if(udpSocket->hasPendingDatagrams()) {
        QByteArray datagram;
        //获取数据包大小
        datagram.resize(
                    udpSocket->pendingDatagramSize());
        //读取数据
        udpSocket->readDatagram(
                    datagram.data(),datagram.size());
        //显示消息到UI界面
        QString msg = datagram.data();
        ui->listWidget->addItem(msg);
    }
}
