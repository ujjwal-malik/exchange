#include "ebtcpserver.h"
#include<QNetworkInterface>
EBTCPServer::EBTCPServer(QObject *parent):
    QTcpServer(parent)
{

}


void EBTCPServer::StartTcpServer()
{
    QString ipAddress;
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    for(QHostAddress &hostAddr : ipAddressesList){
      bool validIpV4 = false;
      hostAddr.toIPv4Address(&validIpV4);
      if( (hostAddr != QHostAddress::LocalHost) && validIpV4)
      {
          ipAddress = hostAddr.toString();
          qDebug()<<ipAddress;
      }
    }
}
