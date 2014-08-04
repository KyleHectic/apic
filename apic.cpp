#include "apic.h"

#include "appthread.h"

void WINAPI kyleHello()
{
    worker->hello();
}

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, LPVOID)
{
    static AppThread *thread;
    
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:
        thread = new AppThread;
        thread->start();
        break;
    case DLL_PROCESS_DETACH:
        delete thread;
        break;
    default:
        break;
    }
    
    return TRUE;
};
