#ifndef VENTANA2_H
#define VENTANA2_H

#include <QMainWindow>

namespace Ui {
class ventana2;
}

class ventana2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventana2(QWidget *parent = 0);
    ~ventana2();

private:
    Ui::ventana2 *ui;
};

#endif // VENTANA2_H
