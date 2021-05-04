#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class EBTCPServer;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void CreateTcpServer();

private:
    EBTCPServer* m_pTcpServer;
};
#endif // MAINWINDOW_H
