#include "dis.h"
#include "qdebug.h"
#include <QtWidgets/QApplication>
#include <qtimer.h>
#include <qtextedit.h>
#include <qprocess.h>


int main(int argc, char *argv[])
{

	QApplication a(argc, argv);

	dis w;

	w.showMaximized();

	return a.exec();
}
