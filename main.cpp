#include <QCoreApplication>

#include <iostream>
#include <QVariant>
#include <QtNetwork/qtcpsocket.h>
#include <QUdpSocket>
#include <qhostaddress.h>

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QByteArray>

#include <qtcpserver.h>

#include "myhttp.h"
#include "mysocket.h"
#include "myhex.h"

using namespace std;

/*
void myClient(QTcpSocket &client)
{
//    client.connectToHost(QHostAddress::LocalHost,5008);
    client.connectToHost(QHostAddress("175.102.134.67"),12102);

    cout << "If the socket is ready for read or write ?  " << client.isValid() << endl;
    cout << "The state of the connectToHost: " << client.state() << endl;
    cout << (client.peerName()).toStdString() << endl;
    cout << client.peerPort() << endl;

 //   client.abort();

}
void clientSendMess(QTcpSocket &client)
{    
    client.connectToHost(QHostAddress("175.102.134.67"),12102);
//    client.connectToHost(QHostAddress::LocalHost,5008);
    client.write(" this is a message which my client send to server. ");
//    client.abort();
//    client.close();
}

void clientAcceptMess(QTcpSocket &client)
{
    clientSendMess(client);
    while(client.waitForReadyRead()){
        QByteArray recv = client.readAll();
        cout << recv.toStdString() << endl;
    }
}
*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


//    myHttp mytest;

    mySocket client;
    client.acceptMessage();  

//    myHex hex("dd3");
//    cout << hex.toBinex() <<endl;



//    QTcpSocket socket;
//    cout << " test: client connect to server. " << endl;
//    myClient(socket);

//    cout << " test: client send messages to server. " << endl;
//    clientSendMess(socket);

//    cout << " test: client accept message from server. " << endl;
//    clientAcceptMess(socket);


    return a.exec();
}
