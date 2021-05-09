#include "ebtcpclient.h"
#include<QHostAddress>
#include<QNetworkInterface>
EBTCPClient::EBTCPClient():tcpSocket(nullptr)
{

}

QHostAddress EBTCPClient::getNonLocalHostAddress()
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

void EBTCPClient::connectToServerIpOnPort(QHostAddress ip, quint16 port)
{
    tcpSocket->abort();
    tcpSocket->connectToHost(ip,port);
}
