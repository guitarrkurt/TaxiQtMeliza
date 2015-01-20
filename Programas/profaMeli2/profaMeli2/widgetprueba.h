#ifndef WIDGETPRUEBA_H
#define WIDGETPRUEBA_H

#include <QWidget>

namespace Ui {
class widgetPrueba;
}

class widgetPrueba : public QWidget
{
    Q_OBJECT

public:
    explicit widgetPrueba(QWidget *parent = 0);
    ~widgetPrueba();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::widgetPrueba *ui;
};

#endif // WIDGETPRUEBA_H
