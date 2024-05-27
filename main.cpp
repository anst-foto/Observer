#include <iostream>

#include "Person.h"

using namespace std;

int main() {
    auto person1 = new Person("Person_1");
    auto person2 = new Person("Person_2");
    auto person3 = new Person("Person_3");
    auto person4 = new Person("Person_4");
    auto person5 = new Person("Person_5");
    auto person6 = new Person("Person_6");

    person1->addSubscriber(person2);
    person1->addSubscriber(person3);
    person1->addSubscriber(person4);

    person2->addSubscriber(person1);
    person2->addSubscriber(person5);
    person5->addSubscriber(person6);

    person1->post("Hello");
    person2->post("Privet!");


    return 0;
}
