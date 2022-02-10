#include <iostream>
#include "Cat.h"
using namespace std;

// you have to compile the two files TOGETHER
// g++ classes.cpp Cat.cpp -o classes

// you can also define a class here
class Dog {
    public:
    void run() {
        cout << "Dog is running." << endl;
    };
    void swim();
};

void Dog::swim() {
    cout << "Dog is swimming." << endl;
};

int main() {

    Cat cat; // same as `int value;` etc

    cat.speak();
    cat.jump();

    Dog dog;

    dog.run();
    dog.swim();

    return 0;
}
