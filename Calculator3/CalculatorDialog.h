#ifndef CALCULATORDIALOG_H
#define CALCULATORDIALOG_H

#include <QDialog>
#include <qvalidator.h>

namespace Ui {
class CalculatorDialog;
}

class CalculatorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CalculatorDialog(QWidget *parent = nullptr);
    ~CalculatorDialog();
private slots:
    void enableCalcButton(void);
    void calcCliecked(void);
private:
    Ui::CalculatorDialog *ui;
};

#endif // CALCULATORDIALOG_H
