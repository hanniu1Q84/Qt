#include <QApplication>
#include <QPushButton>
#include <QLabel>

int main(int argc, char** argv) {
	QApplication app(argc, argv);
	QLabel label("QT Day02!");
	QPushButton button("点击关闭标签");
	label.show();
	button.show();
	
	// 建立按钮 信号和标签 槽的连接
	QObject::connect(&button, SIGNAL(clicked()),
			&label, SLOT(close()));

	app.exec();
}
