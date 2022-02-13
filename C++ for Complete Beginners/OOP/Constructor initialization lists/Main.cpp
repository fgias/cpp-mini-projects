#include <iostream>
#include "Person.h"
using namespace std;


int main() {

    Person person0;
    cout << person0.toString() << endl;

    Person person1("John");
    cout << person1.toString() << endl;

    Person person2("Bob", 32);
    cout << person2.toString() << endl;

    Person person3("Sam", 72);
    cout << person3.toString() << endl;

    return 0;
}