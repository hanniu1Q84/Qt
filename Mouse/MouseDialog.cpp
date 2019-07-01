#include "MouseDialog.h"
#include "ui_MouseDialog.h"

MouseDialog::MouseDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MouseDialog)
{
    ui->setupUi(this);
}

MouseDialog::~MouseDialog()
{
    delete ui;
}
void MouseDialog::mousePressEvent(QMouseEvent* event){
    if(event->button() == Qt::LeftButton){
        //huoqu label de juxing quyu
        QRect rcBlock = ui->m_label->frameRect();
        //pingyi,rang rcBlock he chuangkou zuobiaoxi yizhi
        rcBlock.translate(ui->m_label->pos());
        if(rcBlock.contains(event->pos()) == true){
            m_bDrag = true;
            //jisuan xiang dui pianyiliang
            m_ptPos = ui->m_label->pos() - event->pos();
        }
    }
}
void  MouseDialog::mouseReleaseEvent(QMouseEvent* event){
    if(event->button() == Qt::LeftButton){
        m_bDrag = false;
    }

}
void  MouseDialog::mouseMoveEvent(QMouseEvent* event){
    if(m_bDrag){
        //jisuan xinzuobiao
        QPoint ptPos = event->pos() + m_ptPos;
        //huoqu chuangkou de daxiao
        QSize szClient = size();
        //huoqu huakuai weizhi
        QRect rcBlock = ui->m_label->frameRect();
        //x zhou quzhi fanwei (0 -- chuangkou X-label kuandu)
        if(ptPos.x() < 0)
            ptPos.setX(0);
        else if(ptPos.x() > szClient.width() - rcBlock.width())
            ptPos.setX(szClient.width() - rcBlock.width());
        //Y zuobiaofanwei(0 -- chuangkou y- labelgaodu)
        if(ptPos.y() < 0)
            ptPos.setY(0);
        else if(ptPos.y() > szClient.height() - rcBlock.height())
            ptPos.setY(szClient.height() - rcBlock.height());

        //yidong dao xin de weizhi
        ui->m_label->move(ptPos);
    }
}
