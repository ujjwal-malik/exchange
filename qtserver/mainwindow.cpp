#include "mainwindow.h"
#include "ebtcpserver.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    ,m_pTcpServer(0)
{
    m_pTcpServer = new EBTCPServer(this);
    InitTcpServer();
}

MainWindow::~MainWindow()
{
}

void MainWindow::InitTcpServer(){
    m_pTcpServer->InitTcpServer();
    connect(m_pTcpServer,SIGNAL(newConnection()), this, SLOT(handleNewTCPConnection()));
}

void MainWindow::handleNewTCPConnection()
{
    qDebug()<<"Got new connection..";
}

