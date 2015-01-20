#include "ventana2.h"
#include "ui_ventana2.h"

ventana2::ventana2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ventana2)
{
    ui->setupUi(this);
}

ventana2::~ventana2()
{
    delete ui;
}
