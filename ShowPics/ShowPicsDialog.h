#ifndef SHOWPICSDIALOG_H
#define SHOWPICSDIALOG_H

#include <QDialog>
#include <QPainter>
#include <QImage>

namespace Ui {
class ShowPicsDialog;
}

class ShowPicsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShowPicsDialog(QWidget *parent = nullptr);
    ~ShowPicsDialog();

private slots:
    void on_m_btnClose_clicked();

    void on_m_btnNext_clicked();

    void on_m_btnPrev_clicked();
private:
    //huizhi shijian
    void paintEvent(QPaintEvent *);
private:
    Ui::ShowPicsDialog *ui;
    int m_idxImage; //tupiansuoyin
};

#endif // SHOWPICSDIALOG_H
