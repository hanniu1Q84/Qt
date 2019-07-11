#include "ServerDialog.h"
#include "ui_ServerDialog.h"

ServerDialog::ServerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ServerDialog)
{
    ui->setupUi(this);
    connect(&tcpServer, SIGNAL(newConnection()),
            this, SLOT(onNewConnection()));
}

ServerDialog::~ServerDialog()
{
    delete ui;
}

//创建聊天室对应的槽函数
void ServerDialog::on_create_Button_clicked()
{
    port = ui->port_Edit->text().toShort();
    //开启服务器
    if(tcpServer.listen(QHostAddress::Any, port)){
        qDebug("TCP服务器创建成功");
        //禁用创建按钮和端口输入
        ui->create_Button->setEnabled(false);
        ui->port_Edit->setEnabled(false);
    }
    else {
        qDebug("TCP服务器创建失败");
    }
}

//当客户端和服务器建立链接时发送信号newconnection
void ServerDialog::onNewConnection(){
    //获取和客户端通信的套接字
    QTcpSocket* tcpClientSocket =
            tcpServer.nextPendingConnection();
    //保存套接字到容器中
    tcpClientlist.append(tcpClientSocket);
    //收到数据时，将会发送readyRead（）
    connect(tcpClientSocket,SIGNAL(readyRead()),
            this, SLOT(slotDataReceived()));

}
//连接readyReady（）信号
void ServerDialog::slotDataReceived(){
    //遍历所有的客户端,检查是否有数据到来
    for(int i = 0; i < tcpClientlist.count(); i++){
        //检查当前客户端是都有数据到来
        if(tcpClientlist.at(i)->bytesAvailable()){
            //接收客户端发来的消息
            QByteArray readbuf =
                    tcpClientlist.at(i)->readAll();
            //显示到服务器ui
            ui->listWidget->addItem(readbuf);
            //转发消息给所有的客户端
            sendMessage(readbuf);
        }
    }

}
//转发消息给所有的客户端
void ServerDialog::sendMessage(const QByteArray& msg){
    for(int i = 0; i < tcpClientlist.count();i++){
        tcpClientlist.at(i)->write(msg);
    }
}
