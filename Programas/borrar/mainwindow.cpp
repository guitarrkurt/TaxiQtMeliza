#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "chinguenasumadre.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setPropiaVar(int k)
{
    propiaVar = k;
}

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->close();

    w1 = new chinguenasumadre(this);

    w1->setVariable(propiaVar);
    w1->show();
}

void MainWindow::on_spinBox_editingFinished()
{

}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    propiaVar = arg1;
}
