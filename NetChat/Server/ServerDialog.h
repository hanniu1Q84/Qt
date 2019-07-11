#ifndef SERVERDIALOG_H
#define SERVERDIALOG_H

#include <QDialog>
#include <QTcpServer>
#include <QTcpSocket>

namespace Ui {
class ServerDialog;
}

class ServerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ServerDialog(QWidget *parent = nullptr);
    ~ServerDialog();

private slots:
    //创建聊天室对应的槽函数
    void on_create_Button_clicked();
    //当客户端和服务器建立链接时发送信号newconnection
    void onNewConnection();
    //连接readyReady（）信号
    void slotDataReceived();
private:
    //转发消息给所有的客户端
    void sendMessage(const QByteArray&);
private:
    QTcpServer tcpServer;//服务器对象
    qint16 port;//服务器端口
    //保存所有和客户端通信的套接字
    QList<QTcpSocket* > tcpClientlist;

private:
    Ui::ServerDialog *ui;
};

#endif // SERVERDIALOG_H
