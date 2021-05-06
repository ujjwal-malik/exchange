#include "mainwindow.h"
#include "ebtcpserver.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    ,m_pTcpServer(0)
{
    m_pTcpServer = new EBTCPServer(this);
    m_pTcpServer->listen();
}

MainWindow::~MainWindow()
{
}

void MainWindow::CreateTcpServer(){

}

