#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QDebug>
#include <iostream>

class Worker : public QObject
{
    Q_OBJECT
public:
    Worker();

    void hello();

public slots:
    Q_INVOKABLE void helloImpl();

};

#endif // WORKER_H
