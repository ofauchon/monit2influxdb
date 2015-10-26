#include "fetchthread.h"
#include <QThread>

int main(int argc, char *argv[])
{


    FetchThread ft;
    while (true){
        ft.process("localhost");
        QThread::sleep(60);
    }
}
