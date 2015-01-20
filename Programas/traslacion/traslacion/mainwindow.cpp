#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap("/Users/mac/Downloads/carro.jpg"));
        i = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    QApplication::exit();
}

void MainWindow::on_pushButton_clicked()
{
    while(true)
    {
    QApplication::processEvents();

    QPixmap imagen("/Users/mac/Downloads/carro.jpg");
    QPixmap rotacion(imagen.size());

    QPainter pintor(&rotacion);
    pintor.setRenderHint(QPainter::SmoothPixmapTransform);
    pintor.translate(i,0);
    pintor.drawPixmap(0, 0, imagen);
    pintor.end();

    ui->label->setPixmap(rotacion);
    i++;
    }
   }
