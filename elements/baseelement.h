#ifndef BASEELEMENT_H
#define BASEELEMENT_H

#include <QObject>

class IBaseElement : public QObject{
    Q_OBJECT

public:
    IBaseElement(float x,float y,float z){
        this->x = x;
        this->y = y;
    }

    float getX(){
        return x;
    }
    float getY(){
        return y;
    }

    float getZ(){
        return z;
    }

private:
    float x,y,z;

};

#endif // BASEELEMENT_H
