#ifndef __TIMEDIALOG_H
#define __TIMEDIALOG_H

#include <QDialog>
#include <QTime>
#include <QVBoxLayout> //垂直布局器
#include <QPushButton>
#include <QLabel>

class TimeDialog:public QDialog {
	Q_OBJECT
public:
	TimeDialog(void);
private:
	QLabel* m_labTime;
	QPushButton* m_btnTime;
private slots:
	void timeClicked(void);
signals://自定义信号，只声明不能写定义
	void setText(const QString&);

};

#endif //__TIMEDIALOG_H
