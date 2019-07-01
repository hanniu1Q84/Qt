#include "KeyboradDialog.h"
#include "ui_KeyboradDialog.h"

KeyboradDialog::KeyboradDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KeyboradDialog)
{
    ui->setupUi(this);
}

KeyboradDialog::~KeyboradDialog()
{
    delete ui;
}
