#include <QApplication>
#include "Register.h"

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);
	Register do_register;
	do_register.show();

	return app.exec();
}
