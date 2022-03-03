#include <iostream>
using namespace std;

class Animal {
private:

    string name; // instance variable

public:

    Animal() {
        cout << "Animal created." << endl;
    }; // constructor

    Animal(const Animal& other): name(other.name) { // copy constructor
        cout << "Animal created by copying." << endl;
    };

    ~Animal() {
        cout << "Destructor called." << endl;
    }; // destructor

    void setName(string name) {
        this->name = name;
    };

    void speak() const {
        cout << "My name is " << name << "." << endl;
    };

};

int main() {

    int* pInt = new int; // we can use new on any type
    *pInt = 8;
    cout << *pInt << endl;
    delete pInt;

    Animal* pAnimal1 = new Animal;
    delete pAnimal1;

    Animal* pAnimal2 = new Animal[10]; // allocate memory for all 4 objects
    pAnimal2[5].setName("George");
    pAnimal2[5].speak();
    delete [] pAnimal2;

    char* pMem = new char[1000];
    delete [] pMem;

    return 0;
}