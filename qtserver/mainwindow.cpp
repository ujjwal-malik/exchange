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
}

