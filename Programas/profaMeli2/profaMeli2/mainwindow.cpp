#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include "widgetprueba.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap fondo("/Users/mac/qt/Programas/profaMeli2/Imagenes/taxiFondo.png");
    ui->label->setPixmap(fondo);
    i = 0.0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QPixmap imagen("/Users/mac/qt/Programas/profaMeli2/Imagenes/labelTaxi.png");
    QPixmap rotacion(imagen.size());
        while(i < 500)
        {
            QApplication::processEvents();

            QPainter pintor(&rotacion);
            pintor.setRenderHint(QPainter::SmoothPixmapTransform);
            pintor.translate(i,0);
            pintor.drawPixmap(0, 0, imagen);
            pintor.end();

            ui->label_2->setPixmap(rotacion);
            i += 0.25;
        }

        ui->label_2->close();
        ui->pushButton->close();
        ui->pushButton_2->close();
        ui->label->close();

       // widPrueb = new widgetPrueba(this);
       // widPrueb->show();



}

