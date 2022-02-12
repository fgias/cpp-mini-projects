#include <iostream>
#include "Person.h"
using namespace std;


int main() {

    Person person1;
    cout << person1.toString() << endl;

    Person person2("Bob", 32);
    cout << person2.toString() << endl;

    return 0;
}