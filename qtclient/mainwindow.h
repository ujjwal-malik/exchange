#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include<QVBoxLayout>
#include<QLineEdit>
class EBTCPClient;


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void connectToServer();

private:
    EBTCPClient* m_pTCPClient;
    QPushButton connectButton;
    QVBoxLayout vbox;
    QLineEdit   portNumberInput;
    QLineEdit   ipAddressInput;
};
#endif // MAINWINDOW_H
