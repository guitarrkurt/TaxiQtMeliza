#ifndef CHINGUENASUMADRE_H
#define CHINGUENASUMADRE_H

#include <QWidget>

namespace Ui {
class chinguenasumadre;
}

class chinguenasumadre : public QWidget
{
    Q_OBJECT

public:
    explicit chinguenasumadre(QWidget *parent = 0);
    ~chinguenasumadre();
    void setVariable(int otra);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::chinguenasumadre *ui;
    int variable;
};

#endif // CHINGUENASUMADRE_H
