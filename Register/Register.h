#ifndef _REGISTER_H
#define _REGISTER_H

#include <QDialog>
#include <QMessageBox>
#include "Ui_Register.h"

class Register:public QDialog,
	public Ui::Register {
	Q_OBJECT
public:
	Register(void);
private slots:
	void onAccepted(void); //处理确定按钮
	void onRejected(void); //处理取消按钮
};

#endif //_REGISTER_H
