#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QWidget>
#include <QDialog>
#include <QMainWindow>

int main(int argc, char** argv) {
	QApplication app(argc, argv);
	// 创建一个父窗口
	QWidget* parent = new QWidget;
	//QDialog* parent = new QDialog;
	//QMainWindow* parent = new QMainWindow;
	
	//改变父窗口的大小
	parent->resize(500, 500);
	// 改变位置
	parent->move(100, 100);

	//创建标签组件，停靠到父窗口
	QLabel label("Hello World", parent);
	//创建按钮组件，停靠到父窗口
	QPushButton button("关闭标签", parent);

	//调整子窗口相对于父窗口的位置
	label.move(0, 200);
	button.move(200,200);

	//调整按钮大小
	button.resize(100, 30);

	//连接按钮和标签对象
	QObject::connect(&button, SIGNAL(clicked()),
			 &label, SLOT(close()));

	//点击按钮，关闭父窗口
	QPushButton pbutton("关闭父窗口", parent);
	QObject::connect(&pbutton, SIGNAL(clicked()),
			 parent, SLOT(close()));

	// 显示父窗口，包含所有的子窗口
	parent->show();
	return app.exec();
}
