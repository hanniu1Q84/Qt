#ifndef MOUSEDIALOG_H
#define MOUSEDIALOG_H

#include <QDialog>
#include <QMouseEvent>

namespace Ui {
class MouseDialog;
}

class MouseDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MouseDialog(QWidget *parent = nullptr);
    ~MouseDialog();
    void mousePressEvent(QMouseEvent* );
    void mouseReleaseEvent(QMouseEvent* );
    void mouseMoveEvent(QMouseEvent* );

private:
    Ui::MouseDialog *ui;
    bool m_bDrag; //panduan shifou shi zuojian xuanzhong
    QPoint m_ptPos; // jilushubiao he label de xiangduiweizhi
};

#endif // MOUSEDIALOG_H
