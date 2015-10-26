#ifndef FETCHTHREAD_H
#define FETCHTHREAD_H

#include <QDebug>
#include <QList>
#include "common.h"




class FetchThread : QObject

{
    Q_OBJECT

public:
    FetchThread();

    void process(QString phost);

private:

};

#endif // FETCHTHREAD_H
