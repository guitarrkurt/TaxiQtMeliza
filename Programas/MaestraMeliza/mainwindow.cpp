#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap imag00("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/puebla2.png");
    QPixmap imag1("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/bodega2.png");
    QPixmap imag2("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/burgerKing2.png");
    QPixmap imag3("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/chedraui2.png");
    QPixmap imag4("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/cityClub2.png");
    QPixmap imag5("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/comer2.png");
    QPixmap imag6("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/coppel2.png");
    QPixmap imag7("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/costco2.png");
    QPixmap imag8("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/dominos2.png");
    QPixmap imag9("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/donaPelos2.png");
    QPixmap imag10("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/elektra2.png");
    QPixmap imag11("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/extra2.png");
    QPixmap imag12("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/famsa2.png");
    QPixmap imag13("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/farmaciasGuadalajara2.png");
    QPixmap imag14("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/granBodega2.png");
    QPixmap imag15("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/homeDepot2.png");
    QPixmap imag16("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/italian2.png");
    QPixmap imag17("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/kfc2.png");
    QPixmap imag18("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/laOriental2.png");
    QPixmap imag19("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/McDonalds2.png");
    QPixmap imag20("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/pemex2.png");
    QPixmap imag21("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/PizzaHut2.png");
    QPixmap imag22("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/oxxo2.png");
    QPixmap imag23("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/puntaDelCielo2.png");
    QPixmap imag24("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/sams2.png");
    QPixmap imag25("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/soriana2.png");
    QPixmap imag26("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/starbucks2.png");
    QPixmap imag27("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/vips2.png");
    QPixmap imag28("/Users/mac/qt/Programas/MaestraMeliza/Imagenes/walmart2.png");

    // Imagen de Fondo
    ui->label->setPixmap(imag00);
    // Cambiando su estilo
   /* QLabel{
        border: 2px solid green;
        border-radius: 4px;
        padding: 2px;
        // Info: http://qt-project.org/doc/qt-4.8/stylesheet-examples.html
    }*/
    QString cadena("QLabel{border: 2px solid lightblue;border-radius: 4px;padding: 4p");
    QString lightblue("QLabel{border: 2px solid lightblue;border-radius: 4px;padding: 4px;}");
    QString red("QLabel{border: 2px solid red;border-radius: 4px;padding: 4px;}");
    QString blue("QLabel{border: 2px solid blue;border-radius: 4px;padding: 4px;}");
    QString orange("QLabel{border: 2px solid orange;border-radius: 4px;padding: 4px;}");
    QString pink("QLabel{border: 2px solid pink;border-radius: 4px;padding: 4px;}");
    QString green("QLabel{border: 2px solid green;border-radius: 4px;padding: 4px;}");
    QString yellow("QLabel{border: 2px solid yellow;border-radius: 4px;padding: 4px;}");
    QString purple("QLabel{border: 2px solid purple;border-radius: 4px;padding: 4px;}");
    QString white("QLabel{border: 2px solid white;border-radius: 4px;padding: 4px;}");
    QString brown("QLabel{border: 2px solid brown;border-radius: 4px;padding: 4px;}");
    QString lightgreen("QLabel{border: 2px solid lightgreen;border-radius: 4px;padding: 4px;}");

    // Cargando Demas Imagenes
    ui->label1->setStyleSheet(green);
    ui->label1->setPixmap(imag1);

    ui->label2->setStyleSheet(red);
    ui->label2->setPixmap(imag2);

    ui->label3->setStyleSheet(orange);
    ui->label3->setPixmap(imag3);

    ui->label4->setStyleSheet(red);
    ui->label4->setPixmap(imag4);

    ui->label5->setStyleSheet(orange);
    ui->label5->setPixmap(imag5);

    ui->label6->setStyleSheet(yellow);
    ui->label6->setPixmap(imag6);

    ui->label7->setStyleSheet(blue);
    ui->label7->setPixmap(imag7);

    ui->label8->setStyleSheet(lightblue);
    ui->label8->setPixmap(imag8);

    ui->label9->setStyleSheet(pink);
    ui->label9->setPixmap(imag9);

    ui->label10->setStyleSheet(yellow);
    ui->label10->setPixmap(imag10);

    ui->label11->setStyleSheet(blue);
    ui->label11->setPixmap(imag11);

    ui->label12->setStyleSheet(purple);
    ui->label12->setPixmap(imag12);

    ui->label13->setStyleSheet(lightblue);
    ui->label13->setPixmap(imag13);

    ui->label14->setStyleSheet(orange);
    ui->label14->setPixmap(imag14);

    ui->label15->setStyleSheet(white);
    ui->label15->setPixmap(imag15);

    ui->label16->setStyleSheet(green);
    ui->label16->setPixmap(imag16);

    ui->label17->setStyleSheet(red);
    ui->label17->setPixmap(imag17);

    ui->label18->setStyleSheet(brown);
    ui->label18->setPixmap(imag18);

    ui->label19->setStyleSheet(red);
    ui->label19->setPixmap(imag19);

    ui->label20->setStyleSheet(green);
    ui->label20->setPixmap(imag20);

    ui->label21->setStyleSheet(yellow);
    ui->label21->setPixmap(imag21);

    ui->label22->setStyleSheet(red);
    ui->label22->setPixmap(imag22);

    ui->label23->setStyleSheet(lightblue);
    ui->label23->setPixmap(imag23);

    ui->label24->setStyleSheet(lightgreen);
    ui->label24->setPixmap(imag24);

    ui->label25->setStyleSheet(orange);
    ui->label25->setPixmap(imag25);

    ui->label26->setStyleSheet(green);
    ui->label26->setPixmap(imag26);

    ui->label27->setStyleSheet(orange);
    ui->label27->setPixmap(imag27);

    ui->label28->setStyleSheet(blue);
    ui->label28->setPixmap(imag28);


}

MainWindow::~MainWindow()
{
    delete ui;
}
