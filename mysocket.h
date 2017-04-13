#ifndef MYSOCKET_H
#define MYSOCKET_H

#include <string>
#include <queue>

#include <QObject>
#include <QTcpSocket>

using namespace std;

class mySocket : public QObject
{
    Q_OBJECT
public:
    explicit mySocket(QObject *parent = 0);

    queue<string> queAccept;

signals:

public slots:
    void newConnect();
    void sendMessage();
    void acceptMessage();

private:
    QTcpSocket *tcpSocket;

};

#endif // MYSOCKET_H
