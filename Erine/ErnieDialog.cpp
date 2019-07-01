#include "ErnieDialog.h"
#include "ui_ErnieDialog.h"

ErnieDialog::ErnieDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErnieDialog)
{
    ui->setupUi(this);
    //jiazaitupaindaorongqi,zhuyilujing
    loadPthotos("./photo");
    //panduan jiazai de tupian shifou weikong
    if(!m_vecPhotos.empty()){
        // shezhisuijizhongzi
        qsrand(QTime::currentTime().msec());
        //cong rongqi zhong suiji huoqu yige yuansu
        m_idxPhoto = qrand() % m_vecPhotos.size();
        //gengxin xianshi
        updateName(m_idxPhoto);
        updateClock(m_secClock = 0);
        //shineng kaishi anniu
        ui->m_btnStart->setEnabled(true);
    }
}

ErnieDialog::~ErnieDialog()
{
    delete ui;
}

void ErnieDialog::on_m_btnStart_clicked(){
    //qidong dingshiqi, jingyong kaishi anniu
    ui->m_btnStart->setEnabled(false);
    m_secClock = 5;//meici yaojiang shijian
    updateClock(m_secClock); //gengxin xianshi shengyu shijian

    m_idtPhoto = startTimer(50); // 50ms genghuan yige tupian
    m_idtClock = startTimer(1000); // daojishi
    m_idtStop = startTimer(5* 1000); //tingzhi
}
void ErnieDialog::paintEvent(QPaintEvent*){
    if(!m_vecPhotos.empty()){
        QPainter painter(this);
        QRect rcPhoto = ui->m_fmPhoto->frameRect();
        rcPhoto.translate(ui->m_fmPhoto->pos());
        painter.drawImage(rcPhoto,
                 m_vecPhotos[m_idxPhoto].second);
    }
}
void ErnieDialog::timerEvent(QTimerEvent* event){
    if(event->timerId() == m_idtPhoto){
        // sui ji cong rong qi zhong nachu yizhang tupian
        m_idxPhoto = qrand()%m_vecPhotos.size();
        //gengxinxianshimingzi
        updateName(m_idxPhoto);
        repaint();
    }
    else if(event->timerId() == m_idtClock) {
        updateClock(--m_secClock);
    }
    else if(event->timerId() == m_idtStop){
        //guan bi suoyou dingshiqi
        killTimer(m_idtClock);
        killTimer(m_idtPhoto);
        killTimer(m_idtStop);

        ui->m_btnStart->setEnabled(true);
    }
}
void ErnieDialog::updateName(int idxPhoto){
    ui->m_labName->setText(
                m_vecPhotos[idxPhoto].first);
}
void ErnieDialog::updateClock(int secClock){
    QString str = QTime(0, 0, secClock).toString("hh:mm:ss");
    ui->m_labClock->setText(str);
}
void ErnieDialog::loadPthotos(const QString& path){
    // chuangjian guolvqi,baocun zhichi tupian geshi
    QStringList filters;
    foreach(QByteArray format,
            QImageReader::supportedImageFormats()) {
        //baocun :*.bmp, *git
        filters += "*"+format;
    }
    QDir dir(path);
        foreach(QString file,
                dir.entryList(filters, QDir::Files)){
            QString name = file;
            //qu diao tupian mingzi de houzhui,dedao tupian de mingcheng
            name.resize(name.lastIndexOf('.'));
            //gouzaotupian,baohanlujing
            QImage image(path + "/" + file);
            //cunfangdao rongqi
            m_vecPhotos << qMakePair(name, image);
        }
        // chulizimulu,bubaokuo".", ".."
        foreach(QString subDir,
                dir.entryList(QDir::Dirs|QDir::NoDotAndDotDot)){
            loadPthotos(path + "/" + subDir);
        }
}
