#ifndef KEYBORADDIALOG_H
#define KEYBORADDIALOG_H

#include <QDialog>

namespace Ui {
class KeyboradDialog;
}

class KeyboradDialog : public QDialog
{
    Q_OBJECT

public:
    explicit KeyboradDialog(QWidget *parent = nullptr);
    ~KeyboradDialog();

private:
    Ui::KeyboradDialog *ui;
};

#endif // KEYBORADDIALOG_H
