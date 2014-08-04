#include "appthread.h"

AppThread::AppThread()
{
    std::cout << "\n AppThread::ctor";
}

AppThread::~AppThread()
{
    std::cout << "\n AppThread::dtor \n";
    m_app->quit();
    wait();
}
