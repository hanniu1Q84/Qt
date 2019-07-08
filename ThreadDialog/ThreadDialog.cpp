#include "ThreadDialog.h"
#include "ui_ThreadDialog.h"

ThreadDialog::ThreadDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThreadDialog)
{
    ui->setupUi(this);
    threadA = new workThread;
    threadB = new workThread;
}

ThreadDialog::~ThreadDialog()
{
    delete ui;
}

void ThreadDialog::on_StartButton_clicked()
{
    threadA->start();
    threadB->start();
    ui->StartButton->setEnabled(false);
    ui->StopButton->setEnabled(true);
}

void ThreadDialog::on_StopButton_clicked()
{
    threadA->terminate();
    threadA->wait();
    threadB->terminate();
    threadB->wait();
    ui->StartButton->setEnabled(true);
    ui->StopButton->setEnabled(false);
}

void ThreadDialog::on_QuitButton_clicked()
{
    close();
}
