#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

Person::Person() {
    name = "undefined";
    age = 0;
};

Person::Person(string newName) {
    name = newName;
    age = 0;
};

Person::Person(string newName, int newAge) {
    name = newName;
    age = newAge;
};

string Person::toString() {
    stringstream ss;
    ss << "The person's name is " << name << " and he is " << age << " years old.";
    return ss.str();
}
