#ifndef NETINFODIALOG_H
#define NETINFODIALOG_H

#include <QDialog>
#include <QHostInfo>
#include <QNetworkInterface>
#include <QHostAddress>
#include <QMessageBox>

namespace Ui {
class NetInfoDialog;
}

class NetInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NetInfoDialog(QWidget *parent = nullptr);
    ~NetInfoDialog();

private slots:
    void on_pushButton_clicked();
public:
    //获取网络接口
    //获取主机名和ip地址
    // 网络配置对应文件"/etc/hosts"
    void getHostInfo();

private:
    Ui::NetInfoDialog *ui;
};

#endif // NETINFODIALOG_H
