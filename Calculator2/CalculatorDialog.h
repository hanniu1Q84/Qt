#ifndef __CALCULATORDIALOG_H
#define __CALCULATORDIALOG_H

#include <QDialog>
#include <QDoubleValidator> //双精度的校验器
#include "Ui_CalculatorDialog.h"

class CalculatorDialog:public QDialog,
	public Ui::CalculatorDialog {
	Q_OBJECT // MOC编译器，把类中不符合标准的语法，
		//变成标准的C++语法
public:
	CalculatorDialog(void);
private slots: // 声明私有的槽函数
	void enableCalcButton(void); // 使能等号按钮
	void calcClicked(void); // 计算结果
};


#endif //__CALCULATORDIALOG_H
