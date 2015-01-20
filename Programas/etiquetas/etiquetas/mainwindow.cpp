#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    imag = QPixmap("/Users/mac/Pictures/DAVE.jpg");
    ui->label->setPixmap(imag);



}

MainWindow::~MainWindow()
{
    delete ui;
}
