/*#include "downloader.h"


downloader::downloader(QObject *parent) :
    QObject(parent)
{

}

void downloader::Do_Download()
{
    http = new QHttp(this);
    connect(http, SIGNAL(stateChanged(int)), this, SLOT(stateChanged(int));
            connect(http, SIGNAL(responseHeaderReceived()))
}

void downloader::stateChanged(int state)
{
    switch(state)
    {
        case0:
            qDebug() << "Unconnected";
            break;
        case1:
            qDebug() << "Host Lookup";
            break;
        case2:
            qDebug() << "Connecting";
            break;
        case3:
            qDebug() << "Sending ";
            break;
        case4:
            qDebug() << "Reading";
            break;
        case5:
            qDebug() << "Connect";
            break;
        case6:
            qDebug() << "Closing";
            break;
    }
}
void downloader::responseHeaderReceived(const QHttpResponse &resp)
{
    qDebug() << "Size " << resp.contentLength();
    qDebug() << "Type " << resp.contentType();
    qDebug() << "Status Code " << resp.statusCode();
}
void downloader::requestFinished(int id, bool error)
{
    if(error)
    {
        qDebug << "Error! ";
    }
    else
    {
        qDebug << "Everythings gucci";
    }
}*/
