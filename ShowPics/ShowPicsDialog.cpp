#include "ShowPicsDialog.h"
#include "ui_ShowPicsDialog.h"

ShowPicsDialog::ShowPicsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowPicsDialog)
{
    ui->setupUi(this);
}


ShowPicsDialog::~ShowPicsDialog()
{
    delete ui;
}

void ShowPicsDialog::paintEvent(QPaintEvent *) {
    //zhiding huizhishebei ,dangqian de dialog chuangkou
    QPainter painter(this);
    // huode frame de juxingbiankuang
    QRect rcImage = ui->m_fmImage->frameRect();
    // rcImage he painter shiyong xiangtong zuobiaoxi
    rcImage.translate(ui->m_fmImage->pos());
    //goujian yizhang yao xianshi de tupian
    QImage image(":/image/" + QString::number(m_idxImage + 2)+ ".jpg");
    //jiang tupian xianshi dao frame zhong
    painter.drawImage(rcImage, image);
}

void ShowPicsDialog::on_m_btnClose_clicked()
{
    close();
}

void ShowPicsDialog::on_m_btnNext_clicked()
{
    if(++m_idxImage > 8) {
        m_idxImage = 0;
    }
    update(); //gengxinjiemian

}

void ShowPicsDialog::on_m_btnPrev_clicked()
{
    if(--m_idxImage < 0){
        m_idxImage = 8;
    }
    update();
}
