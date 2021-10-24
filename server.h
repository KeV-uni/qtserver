#ifndef SERVER_H
#define SERVER_H

#include <QWidget>
#include <QTcpServer>

QT_BEGIN_NAMESPACE
namespace Ui { class Server; }
QT_END_NAMESPACE

class Server : public QWidget
{
    Q_OBJECT

public:
    Server(QWidget *parent = nullptr);
    ~Server();

private:
    void initServer();

private slots:
    void sendRandomMessage();
private:
    Ui::Server *ui;
    //socket servidor
    QTcpServer *serverSocket = nullptr;
    //mensajes
    QVector<QString> randomMessages;

};
#endif // SERVER_H
