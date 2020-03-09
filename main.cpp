#include "mainwindow.h"
#include <globaldef.hpp>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);//高DPI支持
    QApplication a(argc, argv);
    MainWindow w;
    LOADQSS(GlobalSpace::BLACK_QSS_FILE_PATH);//载入QSS样式表
    w.show();

    return a.exec();
}
