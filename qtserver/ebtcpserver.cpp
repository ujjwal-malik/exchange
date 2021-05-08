#include "ebtcpserver.h"
#include<QNetworkInterface>
EBTCPServer::EBTCPServer(QObject *parent):
    QTcpServer(parent)
{

}

QHostAddress EBTCPServer::getNonLocalHostAddress()
{
    QHostAddress address;
    if(address.isNull())
    {
        qDebug()<<"Address is null initially";
    }
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    for(QHostAddress &hostAddr : ipAddressesList){
      bool validIpV4 = false;
      hostAddr.toIPv4Address(&validIpV4);
      if( (hostAddr != QHostAddress::LocalHost) && validIpV4)
      {
          address = hostAddr;
          break;
      }
    }
    return address;
}

void EBTCPServer::InitTcpServer()
{
    QHostAddress hostAddr = getNonLocalHostAddress();
    if(!hostAddr.isNull())
    {
        bool bListenOk = this->listen(hostAddr,11121);
        qDebug()<<bListenOk;

    }
}
