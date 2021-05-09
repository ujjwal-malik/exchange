#include "mainwindow.h"
#include<QTcpSocket>
#include<QWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),m_pTCPClient(nullptr)
{

    QWidget *window = new QWidget(this);
    //connectButton.setParent(this);
    connectButton.setText("Connect");
    connectButton.setVisible(true);
    //portNumberInput.setParent(this);
    portNumberInput.setVisible(true);
    vbox.addWidget(&portNumberInput);
    vbox.addWidget(&connectButton);
    window->setLayout(&vbox);
    setCentralWidget(window);

    connect(&connectButton,SIGNAL(clicked()),this,SLOT(connectToServer()));

}



MainWindow::~MainWindow()
{

}

void MainWindow::connectToServer()
{
    int portNumber = portNumberInput.text().toInt();
    if(portNumber  > 0)
    {

    }
}

