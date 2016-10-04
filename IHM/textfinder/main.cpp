#include "textfinder.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication qapp(argc, argv);
    textfinder w;

    w.show();

    return qapp.exec();
}
