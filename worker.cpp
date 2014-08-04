#include "worker.h"

void Worker::helloImpl()
{
    std::cout << "\nI'm alive.";
    //qDebug() << "I'm alive.";
}

Worker::Worker()
{
    std::cout << "\nWorker::ctor";
    hello();
}

void Worker::hello()
{
    std::cout << "\nWorker::hello()";
    // This is thread-safe, the method is invoked from the event loop
    QMetaObject::invokeMethod(this, "helloImpl", Qt::QueuedConnection);
}
