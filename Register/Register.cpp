#include "Register.h"

Register::Register(void) {
	//初始化界面
	setupUi(this);
	//ok 按钮发出信号acceped
	connect(m_btnBox,SIGNAL(accepted()),
		this, SLOT(onAccepted()));
	//cancle 按钮发送rejected
	connect(m_btnBox, SIGNAL(rejected()),
		this, SLOT(onRejected()));
}

void Register::onAccepted(void) {
	if(m_editUsername->text() == "wangbin" &&
		m_editPassword->text() == "123456"){
		qDebug("Login success!");
		close();
	}
	else {
		QMessageBox msgBox(QMessageBox::Critical,
			windowTitle(), "用户名或密码错误",
			QMessageBox::Ok, this);
		msgBox.exec();
	}
}

void Register::onRejected(void) {
	//QMessageBox 消息框（简单的dialog）
	//1）消息框风格
	//2）标题
	//3）提示消息
	//4）box按钮
	//5）父窗口的指针
	QMessageBox msgBox(QMessageBox::Question,
		windowTitle(),"确认离开吗",
		QMessageBox::No|QMessageBox::Yes, this);
	if(msgBox.exec() == QMessageBox::Yes)
		close();
}
