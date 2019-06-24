#include <QApplication>
#include "TimeDialog.h"

int main(int argc, char** argv) {
	QApplication app(argc, argv);
	TimeDialog dialog;
	dialog.show();

	return app.exec();
}
