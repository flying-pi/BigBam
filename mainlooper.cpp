#include "mainlooper.h"
#include "elements/simpleelement.h"
#include <QTime>

MainLooper::MainLooper(QObject *parent) : QObject(parent)
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
    items = new  QList<IBaseElement *>();
    for(int i=0;i<1;i++){
        items->append(new  SimpleElement((float)(qrand()%10)/10.f,(float)(qrand()%10)/10.f,(float)(qrand()%10)/10.f));
    }
}

MainLooper::~MainLooper()
{
    for(int i=0;i<items->size();i++) delete items->at(i);
    delete items;
}

void MainLooper::startLoop()
{
    while(true)
    for(int i=0;i<items->size();i++)  items->at(i)->nextStep();
}
