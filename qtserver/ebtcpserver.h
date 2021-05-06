#ifndef EBTCPSERVER_H
#define EBTCPSERVER_H

#include <QTcpServer>

class EBTCPServer : public QTcpServer
{
public:
    EBTCPServer(QObject *parent = nullptr);
};

#endif // EBTCPSERVER_H
