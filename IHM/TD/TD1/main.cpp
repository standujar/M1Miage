#include <QApplication>
#include <QLabel>

int main(int argc, char ∗argv[]) {

QApplication app(argc , argv);
QLabel ∗label = new QLabel("Hello World!");
label−>resize(100, 30);
label−>show();

return app.exec();
}
