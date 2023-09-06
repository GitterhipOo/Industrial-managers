#include "widget.h"

#include <QApplication>
#include <qfile.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile styleSheet;
    styleSheet.setFileName("://index.css");
    Widget w;
    w.show();
    return a.exec();
}
