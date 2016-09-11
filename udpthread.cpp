#include <stdint.h>
#include "udpthread.h"

UDPThread::UDPThread()
{

}

UDPThread::UDPThread(quint16 port)
{
    bool ret;
    udpsocket = new QUdpSocket(this);

    ret = udpsocket->bind(port, QUdpSocket::ShareAddress);
    if(ret)
    {
        connect(udpsocket, SIGNAL(readyRead()), this, SLOT(Udp_Data_Received()));
    }
}

UDPThread::~UDPThread()
{
    delete udpsocket;
}

void UDPThread::run()
{
    //接收队列出队
    while(1)
    {
        //dataToSend;
        //emit DataReceived;
    }
}

void UDPThread::Udp_Data_Received()
{
    uint8_t data_buf[2048];
    uint32_t len;
    //接收队列入队
    while (udpsocket->hasPendingDatagrams())
    {
        len = udpsocket->readDatagram((char *)data_buf, 2048);
    }
}

void UDPThread::DataReceived(const QByteArray &dataReceived)
{

}
