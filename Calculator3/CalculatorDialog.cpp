#include "CalculatorDialog.h"
#include "ui_CalculatorDialog.h"

CalculatorDialog::CalculatorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalculatorDialog)
{
    ui->setupUi(this);
    ui->m_editX->setValidator(
                new QDoubleValidator(this));
    ui->m_editY->setValidator(
                new QDoubleValidator(this));
    connect(ui->m_editX,SIGNAL(textChanged(QString)),
            this, SLOT(enableCalcButton()));
    connect(ui->m_editY,SIGNAL(textChanged(QString)),
            this, SLOT(enableCalcButton()));
    connect(ui->btn_CalC,SIGNAL(clicked()),
            this, SLOT(calcCliecked()));
}

CalculatorDialog::~CalculatorDialog()
{
    delete ui;
}
void CalculatorDialog::enableCalcButton(void) {
    bool bXOk, bYOk;
    ui->m_editX->text().toDouble(&bXOk);
    ui->m_editY->text().toDouble(&bYOk);
    ui->btn_CalC->setEnabled(bXOk && bYOk);
}
void CalculatorDialog::calcCliecked(void) {
    double res = ui->m_editX->text().toDouble() +
            ui->m_editY->text().toDouble();
    QString str = QString::number(res, 'g', 15);
    ui->m_editZ->setText(str);
}
