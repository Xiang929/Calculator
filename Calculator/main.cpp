#include "Calculator.h"
#include "Stack.cpp"
#include <QtWidgets/QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QApplication::setStyle(QStyleFactory::create("Fusion"));
	Calculator w;
	w.show();
	return a.exec();
}
