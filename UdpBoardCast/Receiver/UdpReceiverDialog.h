#ifndef UDPRECEIVERDIALOG_H
#define UDPRECEIVERDIALOG_H

#include <QDialog>
#include <QUdpSocket>
#include <QMessageBox>

namespace Ui {
class UdpReceiverDialog;
}

class UdpReceiverDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UdpReceiverDialog(QWidget *parent = nullptr);
    ~UdpReceiverDialog();

private slots:
    void on_Start_Button_clicked();
    void messageReceived();

private:
    Ui::UdpReceiverDialog *ui;
private:
    bool isStarted;
    quint16 port;
    QUdpSocket* udpSocket;
};

#endif // UDPRECEIVERDIALOG_H
