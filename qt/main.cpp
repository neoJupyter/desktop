#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.load(QUrl(QStringLiteral("https://youtube.com")));
    w.show();
    return a.exec();
}
