#include "nepopacanski.h"

#include <elements/baseelement.h>


NePoPacanski::NePoPacanski(QWidget *parent) : QGLWidget(parent) {

}


void NePoPacanski::initializeGL() {
    qglClearColor(Qt::black);

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    static GLfloat lightPosition[4] = { 0, 0, 10, 1.0 };
    //    glLightfv(GL_LIGHT0, GMyGLWidgetL_POSITION, lightPosition);
}


void NePoPacanski::resizeGL(int width, int height) {
    int side = qMin(width, height);
    glViewport((width - side) / 2, (height - side) / 2, side, side);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
#ifdef QT_OPENGL_ES_1
    glOrthof(-2, +2, -2, +2, 1.0, 15.0);
#else
    glOrtho(-2, +2, -2, +2, 1.0, 15.0);
#endif
    glMatrixMode(GL_MODELVIEW);
}


void NePoPacanski::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -10.0);
    draw();
}

void NePoPacanski::draw() {
    float x,y,z;
    //    QList<IBaseElement> *list = new QList<IBaseElement>();


    qglColor(Qt::red);
       glPointSize(10);
    glBegin(GL_POINTS); //starts drawing of points
    for(int i = 0 ;i<3;i++){
        x = (qrand()%100)/100.0;
        y = (qrand()%100)/100.0;
        z = (qrand()%100)/100.0;
        IBaseElement *be = new IBaseElement(x,y,z);
        glVertex3f(x,y,z);//upper-right corner


    }
    glEnd();//end drawing of points
}


































