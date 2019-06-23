#include "CalculatorDialog.h"

// 构造函数中初始化UI界面
CalculatorDialog::CalculatorDialog(void) {
	//设置对话框的标题
	setWindowTitle("加法计算器");
	m_editX = new QLineEdit(this);
	//设置文本右对齐
	m_editX->setAlignment(Qt::AlignRight);
	// 设置验证器，只能输入数字
	m_editX->setValidator(new QDoubleValidator(this));
	
	m_editY = new QLineEdit(this);
	//设置文本右对齐
	m_editY->setAlignment(Qt::AlignRight);
	// 设置验证器，只能输入数字
	m_editY->setValidator(new QDoubleValidator(this));
	
	m_editZ = new QLineEdit(this);
	m_editZ->setAlignment(Qt::AlignRight);
	//设置只读的属性
	m_editZ->setReadOnly(true);
	
	m_btnCalc = new QPushButton("=", this);
	m_btnCalc->setEnabled(false); //设置禁用

	//使用水平布局器，自动调整每个组件的大小和位置
	//创建布局器
	QHBoxLayout* layout = new QHBoxLayout;
	//将组件按照水平顺序添加到布局器中
	layout->addWidget(m_editX);
	layout->addWidget(new QLabel("+"));
	layout->addWidget(m_editY);
	layout->addWidget(m_btnCalc);
	layout->addWidget(m_editZ);
	//设置布局器
	setLayout(layout);	

	//编辑框内容改变时发出信号，尝试使能等号按钮
	connect(m_editX,SIGNAL(textChanged(const QString&)),
			this, SLOT(enableCalcButton()));
	connect(m_editY,SIGNAL(textChanged(const QString&)),
			this, SLOT(enableCalcButton()));

	// 点击等号按钮，计算结果并显示
	connect(m_btnCalc, SIGNAL(clicked()),
			this, SLOT(calcClicked()));
}

void CalculatorDialog::enableCalcButton(void) {
	bool bXOK;
	bool bYOK;

	//获取左右操作数的数据（QString）
	//转换成浮点数
	m_editX->text().toDouble(&bXOK);
	m_editY->text().toDouble(&bYOK);
	//如果左右操作数都是有效的数字，是能等号按钮
	if(bXOK && bYOK) {
		m_btnCalc->setEnabled(true);
	}
	else {
		m_btnCalc->setEnabled(false);
	}

}

void CalculatorDialog::calcClicked(void) {
	//计算结果
	double res = m_editX->text().toDouble() + 
		m_editY->text().toDouble();
	//将结果转换成字符串
	QString str = QString::number(res, 'g', 15);
	//显示结果到m_editZ
	m_editZ->setText(str);
}
