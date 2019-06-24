#include "TimeDialog.h"

TimeDialog::TimeDialog(void){
	setWindowTitle("时间显示");
	m_labTime = new QLabel;
	//设置显示时间标签属性
	//设置凹陷效果
	m_labTime->setFrameStyle(
		QFrame::Panel|QFrame::Sunken);
	//设置水平和垂直方式居中显示
	m_labTime->setAlignment(
		Qt::AlignCenter|Qt::AlignHCenter);

	m_btnTime = new QPushButton("当前系统时间");
	//垂直布局器
	QVBoxLayout* layout = new QVBoxLayout;
	layout->addWidget(m_labTime);
	layout->addWidget(m_btnTime);
	setLayout(layout);
	//点击按钮，调用相应的槽函数获取时间并显示
	connect(m_btnTime, SIGNAL(clicked()),
			this, SLOT(timeClicked()));
	connect(this,SIGNAL(setText(const QString&)),
			m_labTime, SLOT(setText(const QString&)));
}

void TimeDialog::timeClicked(void) {
#if 0
	m_labTime->setText(
		QTime::currentTime().toString("hh:mm:ss"));
#else
	//emit 发送信号
	emit setText(
		QTime::currentTime().toString("hh:mm:ss"));
#endif
}
