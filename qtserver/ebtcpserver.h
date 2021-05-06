#ifndef EBTCPSERVER_H
#define EBTCPSERVER_H

#include <QTcpServer>

class EBTCPServer : public QTcpServer
{
public:
    EBTCPServer(QObject *parent = nullptr);
    void InitTcpServer();
};

#endif // EBTCPSERVER_H
