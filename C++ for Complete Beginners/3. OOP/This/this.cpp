#include <iostream>
#include "Person.h"
using namespace std;


int main() {

    Person person1;
    cout << person1.toString() << endl;

    Person person2("Bob", 32);
    cout << person2.toString() << endl << "Also with `&obj`: " << &person2 << endl;

    Person person3("Sam", 72);
    cout << person3.toString() << endl << "Also with `&obj`: " << &person3 << endl;

    return 0;
}