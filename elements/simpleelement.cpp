#include "simpleelement.h"
#include <math.h>
#include <QDebug>

SimpleElement::SimpleElement(float x, float y, float z):IBaseElement(x,y,z)
{
    angle = ((float)qrand())/(M_PI*2.f);
}

void SimpleElement::nextStep()
{
    IBaseElement::nextStep();

    angle += 0.01f;
    x+= cos(angle)*step;
    y +=sin(angle)*step;
    z +=sin(angle)*step;

    qDebug()<<x <<" "<<y << " "<< z;
}
