#ifndef THREADDIALOG_H
#define THREADDIALOG_H

#include <QDialog>
#include "workThread.h"

namespace Ui {
class ThreadDialog;
}

class ThreadDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ThreadDialog(QWidget *parent = nullptr);
    ~ThreadDialog();

private slots:
    void on_StartButton_clicked();

    void on_StopButton_clicked();

    void on_QuitButton_clicked();

private:
    Ui::ThreadDialog *ui;
private:
    workThread* threadA;
    workThread* threadB;
};

#endif // THREADDIALOG_H
