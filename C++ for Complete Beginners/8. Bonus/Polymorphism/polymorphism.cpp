#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { // add "virtual" in the base method
        cout << "??????" << endl;
    }
    // we can delete this method completely and make this an
    // "abstract" base class, can use:
    // `virtual void speak()=0;`
    // forcing all subclasses to implement this method

    virtual ~Animal() {} // destructors should generally always be declared virtual
};

class Cat: public Animal {
public:
    virtual void speak() { // add "virtual" here as well for clarity, even though it is not necessary
        cout << "RRrrrrRrrr" << endl;
    }
    virtual ~Cat() {} // destructors should generally always be declared virtual
};

class HouseCat: public Cat {
public:
    virtual void speak() { // add "virtual" here as well for clarity, even though it is not necessary
        cout << "Meeooowww" << endl;
    }
    virtual ~HouseCat() {} // destructors should generally always be declared virtual
};

int main() {

    Animal* pAnimal1 = new Cat;
    Animal* pAnimal2 = new HouseCat;

    pAnimal1->speak();
    pAnimal2->speak(); // the Animal speak method is called 
    // because the type of the pointer is Animal, and not Cat or HouseCat
    // but if I make the base method "virtual", this does not happen
    // the method is overridden but the methods in the subclasses

    // therefore, when you create a class that you anticipate could have 
    // subclasses with overridden methods, make those public methods virtual


    delete pAnimal1;
    delete pAnimal2;

    return 0;
}

