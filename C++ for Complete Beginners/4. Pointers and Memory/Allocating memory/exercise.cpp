#include <iostream>
using namespace std;

class Animal {
private:

    char name; // instance variable

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

    void setName(char name) {
        this->name = name;
    };

    void speak() const {
        cout << "My name is " << name << "." << endl;
    };

};

int main() {

    // exercsise
    Animal* pAnimals = new Animal[26];

    char c = 'a';

    for (int i=0; i<26; i++, c = (char)((int)c+1)) {
        pAnimals[i].setName(c);
    }

    for (int i=0; i<26; i++, c = (char)((int)c+1)) {
        pAnimals[i].speak();
    }

    delete [] pAnimals;

    return 0;
}
