#include <QApplication>
#include <QSlider>
#include <QSpinBox>
#include <QDialog>

int main(int argc, char** argv) {
	QApplication app(argc,argv);
	//创建父窗口，并设置大小
	QDialog dlg;
	dlg.resize(200, 100);
	//创建水平的花块组件，停靠在父窗口上
	QSlider slider(Qt::Horizontal, &dlg);
	//设置滑块的位置和属性
	slider.move(20, 20);
	slider.setRange(0, 120);
	slider.setPageStep(10);
	slider.setValue(30);

	//创建选值框组件，停靠在父窗口上
	QSpinBox spin(&dlg);
	//设置选值框的位置和属性
	spin.move(120, 20);
	spin.setRange(0, 120);
	spin.setValue(30);
	spin.setSuffix("  岁");
	
	//滑块值改变， 选值框也随之改变
	QObject::connect(&slider, SIGNAL(valueChanged(int)),
			&spin, SLOT(setValue(int)));
	//选值框值改变，滑块值也随之改变
	QObject::connect(&spin,SIGNAL(valueChanged(int)),
			&slider, SLOT(setValue(int)));
	dlg.show();
	return app.exec();
}
