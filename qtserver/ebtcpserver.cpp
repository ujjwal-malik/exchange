#include "ebtcpserver.h"
#include<QNetworkInterface>
EBTCPServer::EBTCPServer(QObject *parent):
    QTcpServer(parent)
{

}

QHostAddress EBTCPServer::getNonLocalHostIp()
{

}

void EBTCPServer::InitTcpServer()
{
    QString ipAddress;
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    for(QHostAddress &hostAddr : ipAddressesList){
      bool validIpV4 = false;
      hostAddr.toIPv4Address(&validIpV4);
      if( (hostAddr != QHostAddress::LocalHost) && validIpV4)
      {
          ipAddress = hostAddr.toString();
          this->listen(hostAddr);
          qDebug()<<"Will listen on the address" <<ipAddress << "and port"<<this->serverPort() ;
      }
    }
}
