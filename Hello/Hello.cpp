#include <QApplication>
#include <QLabel> //标签组件
#include <QTextCodec>

int main(int argc, char* argv[]) {
	//创建一个QT的应用程序
	QApplication app(argc, argv);

	// 解决编码的两个步骤：
	// 1）用景泰成员汉书codecForName获取编码对象参数为
	// 当前编写代码所用的编码方式
	// 2）通过编码对象调用toUnicode转换为QT内部编码
	QTextCodec *coder = QTextCodec::codecForName("utf8");

	//构建一个标签组件,默认是隐藏的
	QLabel label(coder->toUnicode("今天的最后一节课！"));

	// 显示标签组件
	label.show();

	//让qt应用程序进入事件循环
	return app.exec();
}
