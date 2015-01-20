#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "chinguenasumadre.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setPropiaVar(int k);

private slots:
    void on_pushButton_clicked();

    void on_spinBox_editingFinished();

    void on_spinBox_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    chinguenasumadre *w1;
    int propiaVar;
};

#endif // MAINWINDOW_H
