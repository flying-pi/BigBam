#ifndef NEPOPACANSKI_H
#define NEPOPACANSKI_H

#include <QGLWidget>

class NePoPacanski : public QGLWidget
{
    Q_OBJECT
public:
    explicit NePoPacanski(QWidget *parent = 0);


signals:

public slots:

    // QGLWidget interface
protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
    void draw ();
};

#endif // NEPOPACANSKI_H
