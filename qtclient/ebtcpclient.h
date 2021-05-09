#ifndef EBTCPCLIENT_H
#define EBTCPCLIENT_H
#include<QTcpSocket>

class EBTCPClient
{
public:
    EBTCPClient();
    QHostAddress getNonLocalHostAddress();
    void connectToServerIpOnPort(QHostAddress ip, quint16 port);
private:
    QTcpSocket* tcpSocket;
};

#endif // EBTCPCLIENT_H
