#ifndef UNTITLED3_PERSON_H
#define UNTITLED3_PERSON_H

#include <iostream>
#include <vector>

#include "BaseNotify.h"
#include "ISubscriber.h"

using namespace std;

class Person : public BaseNotify, public ISubscriber {
private:
    string name;
public:
    vector<string> messagesFromFriends;

    explicit Person(const string &name) : name(name) {}

    void subscribe(string message) override {
        messagesFromFriends.push_back(message);

        //BUG
        cout << name << ": " << message << endl;
    }

    void post(const string &message) {
        this->message = message;
        notify();
    }
};


#endif //UNTITLED3_PERSON_H
