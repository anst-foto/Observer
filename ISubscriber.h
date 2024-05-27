#ifndef UNTITLED3_ISUBSCRIBER_H
#define UNTITLED3_ISUBSCRIBER_H

#include <string>

using namespace std;

class ISubscriber {
public:
    virtual void subscribe(string message) = 0;
};


#endif //UNTITLED3_ISUBSCRIBER_H
