#ifndef MAINLOOPER_H
#define MAINLOOPER_H

#include <QObject>
#include <QList>
#include "elements/baseelement.h"

class MainLooper : public QObject
{
    Q_OBJECT
public:
    explicit MainLooper(QObject *parent = 0);
    ~MainLooper();

    void startLoop();

private:
    QList<IBaseElement *> *items;

signals:

public slots:
};

#endif // MAINLOOPER_H
