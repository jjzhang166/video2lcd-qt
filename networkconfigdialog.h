#ifndef NETWORKCONFIGDIALOG_H
#define NETWORKCONFIGDIALOG_H

#include <stdint.h>
#include <QDialog>

namespace Ui {
    class NetWorkConfigDialog;
}

class NetWorkConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NetWorkConfigDialog(QWidget *parent = 0);
    ~NetWorkConfigDialog();
    uint16_t getport();
private:
    Ui::NetWorkConfigDialog *ui;
    uint16_t port;
private slots:
    void on_pushButton_clicked();
};

#endif // NETWORKCONFIGDIALOG_H
