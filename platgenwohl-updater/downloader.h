/*#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QFile>
#include <QObject>
#include <QDebug>

class downloader : public QObject
{
    Q_OBJECT
    //This is where we prototype in QT. Interesting
public:
    explicit downloader(QObject *parent = 0);
    void downloadFile();


signals:

public slots:
    void stateChanged(int state);
    void responseHeaderReceived(const QHttpResponse & resp);
    void requestFinished(int id, bool error);
private:
    QHttp *http;
};

#endif // DOWNLOADER_H*/
