#include <QMessageBox>
#include "networkconfigdialog.h"
#include "ui_networkconfigdialog.h"

NetWorkConfigDialog::NetWorkConfigDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NetWorkConfigDialog)
{
    ui->setupUi(this);
}

NetWorkConfigDialog::~NetWorkConfigDialog()
{
    delete ui;
}

void NetWorkConfigDialog::on_pushButton_clicked()
{
    bool ret;
    QString strport;
//    strip = ui->lineEdit->text();
    strport = ui->lineEdit_2->text();
    if(strport.isEmpty())
    {
        QMessageBox::warning(this, tr("WARNING"),tr("ipaddr or port cannot be empty!"), QMessageBox::Ok, QMessageBox::Ok);
    }else{
        port = strport.toUShort(&ret, 10);
        QDialog::accept();
    }
}

uint16_t NetWorkConfigDialog::getport()
{
    return port;
}
