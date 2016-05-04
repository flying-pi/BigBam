#ifndef BASEELEMENT_H
#define BASEELEMENT_H

#include <QObject>

class IBaseElement : public QObject{
    Q_OBJECT

public:
    IBaseElement(float x,float y,float z){
        this->x = x;
        this->y = y;
        this->z=z;
    }

    inline float getX(){
        return x;
    }
    inline float getY(){
        return y;
    }

    inline  float getZ(){
        return z;
    }

    virtual void nextStep(){
        stepFlag = !stepFlag;
    }

    inline float getSyncx(bool flag){
        return flag == stepFlag? x:oldX;
    }

    inline float getSyncY(bool flag){
        return flag == stepFlag? y:oldY;
    }

    inline float getSyncZ(bool flag){
        return flag == stepFlag? z:oldZ;
    }


protected:
    float x,y,z;
    float oldX,oldY,oldZ;
    bool stepFlag = true;

};

#endif // BASEELEMENT_H

