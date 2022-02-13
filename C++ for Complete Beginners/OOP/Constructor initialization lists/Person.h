#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(): name("unnamed"), age(0) {};
    Person(string name, int age = 100): name(name), age(age) {}; // default age = 100
    string toString();
};

#endif