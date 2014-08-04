#ifndef APPTHREAD_H
#define APPTHREAD_H

#include <QThread>
#include <QCoreApplication>
#include <QPointer>

#include "worker.h"

static QPointer<Worker> worker;

class AppThread : public QThread
{
public:
    AppThread();
    ~AppThread();

    // No need for the Q_OBJECT
    QPointer<QCoreApplication> m_app;

    void run() Q_DECL_OVERRIDE
    {
        std::cout << "\n AppThread::run";

        int argc;
        char *argv;

        QCoreApplication app(argc, &argv);

        m_app = &app;

        std::cout << "\nAppThread::run before Worker";
        Worker worker_;
        worker = &worker_;

        std::cout << "\nAppThread::run before app.exec";
        app.exec();
    }

    //using QThread::wait(); // This wouldn't work here.
};

#endif // APPTHREAD_H
