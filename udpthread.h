#ifndef UDPTHREAD_H
#define UDPTHREAD_H

#include <QUdpSocket>
#include <QThread>
#include <QQueue>

class UDPThread : public QThread
{
public:
    UDPThread();
    UDPThread(quint16 port);
    ~UDPThread();
    void run();
private:
    QUdpSocket *udpsocket;
    QQueue<QByteArray> recv_data;
private slots:
    void Udp_Data_Received();
signals:
    void DataReceived(const QByteArray &dataReceived);
};

#endif // UDPTHREAD_H
