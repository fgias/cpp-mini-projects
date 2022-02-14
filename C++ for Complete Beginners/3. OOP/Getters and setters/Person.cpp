#include <iostream>
#include "Person.h"
using namespace std;

Person::Person() {
    name = "George";
    age = 25;
};

string Person::toString() {
    return "The person's name is " + name + " and he is " + to_string(age) + " years old.";
}

void Person::setName(string newName) {
    name = newName;
}

string Person::getName() {
    return name;
}