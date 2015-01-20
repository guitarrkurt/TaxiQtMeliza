#include "ventanita.h"

ventanita::ventanita(QWidget *parent) :
    QGLWidget(parent)
{
    i= 0.0;
    bandera = 0; // bandera apagada
    connect(&timer, SIGNAL(timeout()), this, SLOT(updateGL()));
    timer.start(16);
}

void ventanita::initializeGL()
{
    glClearColor(1,1,1,1);
}

void ventanita::resizeGL(int width, int height)
{
    glViewport(0, 0, width, height);
}

void ventanita::cuadrado(int i)
{
    glPushMatrix();
    glScalef(0.2,0.2,0.2);
    glTranslatef(-4,4,0);
    glTranslatef(i,0,0);
    glBegin(GL_QUADS);
        glVertex3f(-0.5, -0.5, 0.0);
        glVertex3f(0.5, -0.5, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
        glVertex3f(-0.5, 0.5, 0.0);
    glEnd();
    glPopMatrix();
}
void ventanita::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();


    glColor3f(1,0,0);
    glLineWidth(10);
    glBegin(GL_TRIANGLES);
        glVertex3f(-0.5, -0.5, 0.0);
        glVertex3f(0.5, -0.5, 0.0);
        glVertex3f(0.0, 0.5, 0.0);
    glEnd();

    glColor3f(0,1,1);

    if(i > 10)
    {
        bandera = 1;
    }
    if(i < 0)
    {
        bandera = 0;
    }
    if(bandera == 0)
    {
        i+=.25;
        cuadrado(i);
    }
    if(bandera == 1)
    {
        i=i-0.25;
        cuadrado(i);
    }




}
