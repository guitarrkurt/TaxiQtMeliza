#ifndef VENTANITA_H
#define VENTANITA_H

#include <QGLWidget>
#include <QTimer>
class ventanita : public QGLWidget
{
    Q_OBJECT
public:
    explicit ventanita(QWidget *parent = 0);

    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();
    void cuadrado(int i);

private:
    int x1, y1, x2, y2, bandera;
    float i;
    QTimer timer;
};

#endif // VENTANITA_H
