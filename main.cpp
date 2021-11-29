#include <QApplication>
#include <QDialog>
#include <QLabel>

int main(int argc,char* argv[]) {
	QApplication a(argc,argv);
	QDialog w;
	w.resize(400,200);

	QLabel label(&w);
	label.setText(QObject::tr("Hello World!!!"));
	w.show();
	return a.exec();
}