#ifndef BASEELEMENT_H
#define BASEELEMENT_H

#include <QObject>

class IBaseElement : public QObject{
    Q_OBJECT

public:
    IBaseElement(float x,float y){
        this->x = x;
        this->y = y;
    }

    float getX(){
        return x;
    }
    float getY(){
        return y;
    }

private:
    float x,y;


};

#endif // BASEELEMENT_H
