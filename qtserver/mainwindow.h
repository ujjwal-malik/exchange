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
    void InitTcpServer();

public slots:
    void handleNewTCPConnection();
private:
    EBTCPServer* m_pTcpServer;
};
#endif // MAINWINDOW_H
