#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    Person(); // three constructors, no arguments
    Person(string); // one argument
    Person(string, int); // two arguments
    string toString();
    void setName(string);
    string getName();
};

#endif