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
};

string Person::toString() {
    stringstream ss;
    ss << "The person's name is " << name << " and he is " << age << " years old.";
    return ss.str();
}
