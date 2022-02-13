#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

Person::Person() {
    name = "";
    age = 0;
};

Person::Person(string name, int age) {
    this->name = name; // without "this", name assumes the most closely defined variable
    this->age = age;
    cout << "Memory address of the object: " << this << endl;

    // Every object in C++ has access to its own address through an important pointer called `this` pointer. 
    // The this pointer is an implicit parameter to all member functions. Therefore, inside a member function, 
    // this may be used to refer to the invoking object.
};

string Person::toString() {
    stringstream ss;
    ss << " -- The person's name is " << name << " and he is " << age << " years old.";
    ss << " Memory location: " << this;
    return ss.str();
}
