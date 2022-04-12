#include <iostream>
using namespace std;

class Animal { // "abstract class": containts pure virtual functions
public:
    virtual void run() = 0;
    virtual void speak() = 0; // "pure virtual function"
    // no implementation in base class, because we do not need to instantiate
    // an object of class Animal, only child classes of this class
};

class Dog: public Animal {
public:
    virtual void speak() {
        cout << "Woof!" << endl;
    }
};

class Labrador: public Dog {
public:
    Labrador() {
        cout << "New Labrador." << endl;
    }
    virtual void run() {
        cout << "Labrador running." << endl;
    }

};

void test(Animal& a) {
    a.run();
}

int main() {

    // Animal animal; // cannot do that
    // Dog dog; // or that
    // Animals animals[3]; // or that

    Labrador lab;
    lab.run();
    lab.speak();

    cout << endl;
    // but we can do
    Animal* animals[5];
    animals[0] = &lab; // add an object from a concrete class

    animals[0]->speak();

    test(lab);

    return 0;
}