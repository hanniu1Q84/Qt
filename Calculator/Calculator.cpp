#include "CalculatorDialog.h"
#include <QApplication>

int main(int argc, char** argv){
	QApplication app(argc, argv);
	CalculatorDialog dialog;
	dialog.show();
	return app.exec();
}
