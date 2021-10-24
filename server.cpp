#include "server.h"
#include "ui_server.h"

Server::Server(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Server)
{
    ui->setupUi(this);
    initServer();
    connect(ui->pBtn_Close,&QAbstractButton::clicked,this,&QWidget::close);
}

Server::~Server()
{
    delete ui;
}

void Server::initServer()
{
    qDebug() <<"initServer() start ...";
    serverSocket= new QTcpServer(this);
    if(!serverSocket->listen()){
        qDebug() <<"Server error : "<< serverSocket->errorString();
        return ;
    }
    qDebug() <<"initServer() end ...";
}

void Server::sendRandomMessage()
{
    qDebug() <<"sendRandomMessage() start..";
}
