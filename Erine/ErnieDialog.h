#ifndef ERNIEDIALOG_H
#define ERNIEDIALOG_H

#include <QDialog>
#include <QVector> //baocunsuoyoutupiande rongqi
#include <QPair> //muban(baocun yidui duixiang)
#include <QImageReader> // duqutupian de geshi
#include <QDir> //mulu
#include <QPainter> //huizhitupian
#include <QTime>

namespace Ui {
class ErnieDialog;
}

class ErnieDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ErnieDialog(QWidget *parent = nullptr);
    ~ErnieDialog();
private slots:
    //kaishi naniu de cao hanshu
    void on_m_btnStart_clicked();
private:
    void paintEvent(QPaintEvent*); // huizhishijian
    void timerEvent(QTimerEvent*); // dingshiqishijian

    void updateName(int idxPhoto); //gengxin xianshi renming
    void updateClock(int secClock); // gengxin xianshi shijian
    // jiazaipathzhidingmuluxia de suoyoutupian
    void loadPthotos(const QString& path);
private:
    Ui::ErnieDialog *ui;
private:
    //dingyi baocun(tupian mingzi ,tupian ) rongqi
    QVector< QPair<QString , QImage> > m_vecPhotos;

    int m_idxPhoto; //tupian suoyin
    int m_secClock; //yaojiang shengyu shijian
    int m_idtPhoto; //qiehuan tupian dingshi qi
    int m_idtClock; //gengxin shizhongdingshiqi
    int m_idtStop; //yaojiangtingzhidingshiqi
};

#endif // ERNIEDIALOG_H
