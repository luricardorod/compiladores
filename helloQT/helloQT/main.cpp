#include "helloqt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	helloQT w;
	w.show();
	return a.exec();
}
