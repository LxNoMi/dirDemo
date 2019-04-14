#include <QCoreApplication>
#include<QDir>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug()<<"the rootPath is:"<<QDir::rootPath();
    qDebug()<<"the home path is:"<<QDir::homePath();
    qDebug()<<"the temp path is:"<<QDir::tempPath();
    return a.exec();
}
