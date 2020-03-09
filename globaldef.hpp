#ifndef GLOBALDEF_HPP
#define GLOBALDEF_HPP
#include <QString>
#include <QDebug>
#include <QFile>

#ifndef LOADQSS
#define LOADQSS(qssFile)                        \
{                                               \
    QFile file(qssFile);                        \
    file.open(QFile::ReadOnly);                 \
    if(file.isOpen())                           \
    {                                           \
        qApp->setStyleSheet(file.readAll());    \
        file.close();                           \
    }                                           \
}
#endif

namespace GlobalSpace
{
const QString BLACK_QSS_FILE_PATH = ":/res/res/stylesheet/black.qss";
const QString LOGO_PATH = ":/res/res/image/root.ico";
}
#endif // GLOBALDEF_HPP
