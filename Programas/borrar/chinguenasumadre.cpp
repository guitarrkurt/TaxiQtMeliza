#include "chinguenasumadre.h"
#include "ui_chinguenasumadre.h"
#include <QMessageBox>

chinguenasumadre::chinguenasumadre(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chinguenasumadre)
{
    ui->setupUi(this);
}

chinguenasumadre::~chinguenasumadre()
{
    delete ui;
}

void chinguenasumadre::setVariable(int otra)
{
    variable = otra;
}

void chinguenasumadre::on_pushButton_clicked()
{
    exit(0);
}

void chinguenasumadre::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "title", "Estas en el item: " + QString::number(variable));
}
