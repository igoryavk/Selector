#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QStringList list;
    for(int i=1;i<argc; i++)
    {
        list.append(argv[i]);
    }
    w.setListObjects(list);
    w.show();
    return a.exec();
}
