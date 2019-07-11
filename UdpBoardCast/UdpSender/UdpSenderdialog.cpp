#include "UdpSenderdialog.h"
#include "ui_UdpSenderdialog.h"

UdpSenderDialog::UdpSenderDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UdpSenderDialog)
{
    ui->setupUi(this);
    isStarted = false;
    udpsocket = new QUdpSocket(this);
    timer = new QTimer(this);
    //定时器到时将发送信号timeout
    connect(timer,SIGNAL(timeout()),
            this, SLOT(sendMessage()));
}

UdpSenderDialog::~UdpSenderDialog()
{
    delete ui;
}

void UdpSenderDialog::on_Start_Button_clicked()
{

    if(isStarted == false){
        //按钮显示控制
        isStarted = true;//开始广播状态
        ui->Start_Button->setText("停止广播");
        ui->Port_Edit_2->setEnabled(false);
        ui->Message_Edit->setEnabled(false);
        //开启定时器,每隔1秒发送一次消息
        timer->start(1000);
    }
    else {
        isStarted = false;//停止广播状态
        ui->Start_Button->setText("开始广播");
        ui->Port_Edit_2->setEnabled(true);
        ui->Message_Edit->setEnabled(true);
        timer->stop();//停止定时器
    }
}

void UdpSenderDialog::sendMessage(){
    qDebug("%s",__func__);
    //获取端口号
    quint16 port = ui->Port_Edit_2->text().toInt();

    //获取广播消息字符串
    QString msg = ui->Message_Edit->text();
    if(msg == ""){
        return;
    }
    qDebug() << msg;
    udpsocket->writeDatagram(msg.toLocal8Bit(),
                             QHostAddress::Broadcast, port);

}
