#include "NetInfodialog.h"
#include "ui_NetInfodialog.h"

NetInfoDialog::NetInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NetInfoDialog)
{
    ui->setupUi(this);
    getHostInfo();
}

NetInfoDialog::~NetInfoDialog()
{
    delete ui;
}

void NetInfoDialog::on_pushButton_clicked()
{
    //创建保存详细地址信息的字符串
    QString detail;
    //获取所有的网络接口
    QList<QNetworkInterface> list =
            QNetworkInterface::allInterfaces();
    for(int i = 0; i < list.count(); i++){
        QNetworkInterface interface = list.at(i);
        //设备名
        detail = "设备: " + interface.name() + "\n";
        //MAC
        detail += "硬件地址: " +
                interface.hardwareAddress() + "\n";
        //Ip、子网、广播地址
        QList<QNetworkAddressEntry> entrylist =
                interface.addressEntries();
        for(int j = 0; j < entrylist.count()-1; j++){
            QNetworkAddressEntry entry =
                    entrylist.at(j);
            detail += "Ip地址: " +
                    entry.ip().toString() + "\n";
            detail += "子网掩码: " +
                    entry.netmask().toString() + "\n";
            detail += "广播地址: " +
                    entry.broadcast().toString() + "\n";
        }
    }
    //提示对话框
    QMessageBox::information(this, "详细网络信息",detail);

}

void NetInfoDialog::getHostInfo(){
    //获取主机名
    QString hostName = QHostInfo::localHostName();
    //显示主机名到ui
    ui->hostnameEdit->setText(hostName);
    //通过主机名获取对应的地址
    QHostInfo info = QHostInfo::fromName(hostName);
    if(!info.addresses().isEmpty()){
        //获取IPV4地址
        QHostAddress addr = info.addresses().first();
        //显示IPV4地址
        ui->IpAddrEdit->setText(addr.toString());
    }
}
