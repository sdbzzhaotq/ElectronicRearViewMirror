#include <QApplication>
#include "cmainwidget.h"

int main(int argc,char* argv[]) {
	QApplication a(argc,argv);
    CMainWidget w;

    w.show();
	return a.exec();
}
