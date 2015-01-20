#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::paintEvent(QPaintEvent *e)
{
    QPainter p1(this);
    QPen pen(Qt::red);
    pen.setWidth(9);

    p1.setPen(pen);
    p1.drawLine(0,0,200,200);
    p1.drawLine(200,200,400,200);
}
