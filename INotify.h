#ifndef UNTITLED3_INOTIFY_H
#define UNTITLED3_INOTIFY_H

#include "ISubscriber.h"

class INotify {
public:
    virtual void notify() = 0;

    virtual void addSubscriber(ISubscriber *subscriber) = 0;
    virtual void delSubscriber(ISubscriber *subscriber) = 0;
};


#endif //UNTITLED3_INOTIFY_H
