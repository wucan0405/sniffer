#ifndef SNIFFER_H
#define SNIFFER_H

#include <QMainWindow>

#define HAVE_REMOTE
#include <pcap.h>
#include <remote-ext.h>

namespace Ui {
class Sniffer;
}

class Sniffer : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sniffer(QWidget *parent = 0);
    ~Sniffer();

private:
    Ui::Sniffer *ui;
};

#endif // SNIFFER_H
