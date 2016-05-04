#ifndef SIMPLEELEMENT_H
#define SIMPLEELEMENT_H

#include "baseelement.h"

#include <QObject>

class SimpleElement : public IBaseElement
{

    Q_OBJECT

public:
    SimpleElement(float x,float y,float z);
    void nextStep();

public:

private:
    double angle;
    double step = 0.04f;
};

#endif // SIMPLEELEMENT_H
