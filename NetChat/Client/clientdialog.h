#ifndef CLIENTDIALOG_H
#define CLIENTDIALOG_H

#include <QDialog>
#include <QHostAddress>
#include <QTcpSocket>
#include <QMessageBox>

namespace Ui {
class ClientDialog;
}

class ClientDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClientDialog(QWidget *parent = nullptr);
    ~ClientDialog();

private slots:
    //发送消息按钮的槽函数
    void on_send_Button_clicked();
    //链接服务器按钮的槽函数
    void on_connect_Button_clicked();
    //和服务器连接时调用的槽函数
    void onConnected(void);
    //和服务器断开连接时调用的槽函数
    void onDisconnected(void);
    //接收聊天消息的槽函数
    void slotDataReceived(void);
    //网络异常处理的槽函数
    void slotSocketError(QAbstractSocket::SocketError);

private:
    Ui::ClientDialog *ui;
    bool status;//标记客户端的链接状态，true在线，false离线
    QTcpSocket tcpSocket;//和服务器通信的套接字
    quint16 port;//通信的端口号
    QHostAddress serverIp;//服务器通信的IP地址
    QString userName;//聊天室昵称
};

#endif // CLIENTDIALOG_H
