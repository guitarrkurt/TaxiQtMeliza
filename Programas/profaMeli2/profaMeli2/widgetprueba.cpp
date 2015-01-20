#include "widgetprueba.h"
#include "ui_widgetprueba.h"

widgetPrueba::widgetPrueba(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widgetPrueba)
{
    ui->setupUi(this);
    QPixmap eresUnTurista("/Users/mac/qt/Programas/profaMeli2/Imagenes/eresUnTurista.png");
    ui->label->setPixmap(eresUnTurista);
}

widgetPrueba::~widgetPrueba()
{
    delete ui;
}
