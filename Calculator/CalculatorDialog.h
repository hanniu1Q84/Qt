#ifndef __CALCULATORDIALOG_H
#define __CALCULATORDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit> //输入文本的组件
#include <QDoubleValidator> //双精度的校验器
#include <QHBoxLayout> // 水平布局器

class CalculatorDialog:public QDialog {
	Q_OBJECT // MOC编译器，把类中不符合标准的语法，
		//变成标准的C++语法
public:
	CalculatorDialog(void);
private:
	QLineEdit* m_editX; //左操作数
	QLineEdit* m_editY; // 右操作数
	QPushButton* m_btnCalc; // 等号按钮
	QLineEdit* m_editZ; // 保存结果，只读属性
private slots: // 声明私有的槽函数
	void enableCalcButton(void); // 使能等号按钮
	void calcClicked(void); // 计算结果
};


#endif //__CALCULATORDIALOG_H
