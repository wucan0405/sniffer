#include "sniffer.h"
#include "ui_sniffer.h"

Sniffer::Sniffer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sniffer)
{
    ui->setupUi(this);
}

Sniffer::~Sniffer()
{
    delete ui;
}
