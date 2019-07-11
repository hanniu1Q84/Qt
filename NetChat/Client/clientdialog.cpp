#include "clientdialog.h"
#include "ui_clientdialog.h"

ClientDialog::ClientDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientDialog)
{
    ui->setupUi(this);
    status = false;//初始化链接状态
    ui->send_Button->setEnabled(false);
    //和服务器连接时发送connected信号
    connect(&tcpSocket,SIGNAL(connected()),
            this,SLOT(onConnected()));
    //断开链接发送disconnected信号
    connect(&tcpSocket, SIGNAL(disconnected()),
            this, SLOT(onDisconnected()));
    //当服务器发送数据过来时发送readyRead信号
    connect(&tcpSocket, SIGNAL(readyRead()),
            this, SLOT(slotDataReceived()));
    //网络异常
    connect (&tcpSocket,
            SIGNAL(error(QAbstractSocket::SocketError)),
            this,
            SLOT(slotSocketError(QAbstractSocket::SocketError)));
}

ClientDialog::~ClientDialog()
{
    delete ui;
}

//发送消息按钮的槽函数
void ClientDialog::on_send_Button_clicked()
{
    //获取用户输入的消息
    if(ui->send_Edit->text() == ""){
        return;
    }
    QString msg = userName + ":" + ui->send_Edit->text();
    //发送消息到服务器
    tcpSocket.write(msg.toLocal8Bit());
    //清空消息框
    ui->send_Edit->clear();
}

//链接服务器按钮的槽函数
void ClientDialog::on_connect_Button_clicked()
{
    //当前无连接，建立连接
    if(status == false){
        //从界面获取IP、port
        QString ip = ui->Ip_Edit->text();
        if(serverIp.setAddress(ip) == false){
             QMessageBox::information(
                     this,"错误","请输入正确的IP地址");
            return;
        }
        serverIp = QHostAddress(ip);
        if(ui->user_Edit->text() == ""){
            QMessageBox::information(
                    this,"错误","请输入聊天室昵称");
            return;
        }
        userName = ui->user_Edit->text();

        if(ui->port_Edit->text() == ""){
            QMessageBox::information(
                    this,"错误","请输入正确的端口号");
            return;
        }
        port = ui->port_Edit->text().toUInt();
        //连接服务器
        tcpSocket.connectToHost(serverIp, port);
        status = true;//标记为在线状态
    }
    else {
        //发送下线消息
        QString msg = userName + "离开聊天室";
        tcpSocket.write(msg.toLocal8Bit());
        //关闭和服务器的连接
        tcpSocket.disconnectFromHost();
        status = false;//标记为离线状态
    }
}

//和服务器连接时调用的槽函数
void ClientDialog::onConnected(void)
{
    ui->send_Button->setEnabled(true);
    //连接服务器，按钮文本改为 离开服务器
    ui->connect_Button->setText("离开服务器");
    //禁用：IP、port、用户名输入
    ui->Ip_Edit->setEnabled(false);
    ui->port_Edit->setEnabled(false);
    ui->user_Edit->setEnabled(false);
    //向服务器发送一条进入聊天室的消息
     QString msg = userName + "加入聊天室";
    tcpSocket.write(msg.toLocal8Bit());

}

//和服务器断开连接时调用的槽函数
void ClientDialog::onDisconnected(void)
{
    //禁用发送按钮
    ui->send_Button->setEnabled(false);
    //使能：IP、port、用户名输入
    ui->Ip_Edit->setEnabled(true);
    ui->port_Edit->setEnabled(true);
    ui->user_Edit->setEnabled(true);

    ui->connect_Button->setText("连接服务器");
}
//接收聊天消息的槽函数
void ClientDialog::slotDataReceived(void)
{
    if(tcpSocket.bytesAvailable()){
        QByteArray buf;
        buf.resize(tcpSocket.bytesAvailable());
        tcpSocket.read(buf.data(), buf.size());

        //显示消息到界面
        QString msg = buf.data();
        ui->listWidget->addItem(msg);
    }

}
//网络异常处理的槽函数
void ClientDialog::slotSocketError(QAbstractSocket::SocketError)
{
    QMessageBox::critical(this,"网络异常",
                          tcpSocket.errorString());
}
