#ifndef MAINLOOPER_H
#define MAINLOOPER_H

#include <QObject>

class MainLooper : public QObject
{
    Q_OBJECT
public:
    explicit MainLooper(QObject *parent = 0);

signals:

public slots:
};

#endif // MAINLOOPER_H