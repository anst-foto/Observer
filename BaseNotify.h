#ifndef UNTITLED3_BASENOTIFY_H
#define UNTITLED3_BASENOTIFY_H

#include <vector>

#include "INotify.h"
#include "ISubscriber.h"

using namespace std;

class BaseNotify : public INotify {
protected:
    vector<ISubscriber *> listOfSubscribers;
    string message;

    BaseNotify() = default;

    void notify() override {
        for (auto subscriber: listOfSubscribers) {
            subscriber->subscribe(message);
        }
    }

public:
    void addSubscriber(ISubscriber *subscriber) override {
        listOfSubscribers.push_back(subscriber);
    }

    void delSubscriber(ISubscriber *subscriber) override {
        for (int i = 0; i < listOfSubscribers.size(); i++) {
            if (listOfSubscribers[i] == subscriber) {
                listOfSubscribers.erase(listOfSubscribers.begin() + i);
                break;
            }
        }
    }
};


#endif //UNTITLED3_BASENOTIFY_H
