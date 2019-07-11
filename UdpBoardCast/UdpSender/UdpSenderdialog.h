#ifndef UDPSENDERDIALOG_H
#define UDPSENDERDIALOG_H

#include <QDialog>
#include <QUdpSocket>
#include <QTimer>
#include <QMessageBox>

namespace Ui {
class UdpSenderDialog;
}

class UdpSenderDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UdpSenderDialog(QWidget *parent = nullptr);
    ~UdpSenderDialog();

private slots:
    void on_Start_Button_clicked();
    void sendMessage();//定时发送消息

private:
    Ui::UdpSenderDialog *ui;
private:
    QUdpSocket* udpsocket;//udp套接字
    QTimer* timer; //定时器
    bool isStarted; //标记是否已经开始广播
};

#endif // UDPSENDERDIALOG_H
