#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

// Person::Person(): name("unnamed"), age(0) {}; // initialization list

// Person::Person(string name, int age): name(name), age(age) {}; // initialization list

string Person::toString() {
    stringstream ss;
    ss << " - The person's name is " << name << " and he is " << age << " years old.";
    return ss.str();
}
