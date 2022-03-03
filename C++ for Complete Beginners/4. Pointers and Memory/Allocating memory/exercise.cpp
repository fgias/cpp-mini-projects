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

    // exercsise
    Animal* pAnimals = new Animal[26];

    char c = 'a';
    for (int i=0; i<26; i++, c++) {
        string name(1,c);
        pAnimals[i].setName(name);
    }

    for (int i=0; i<26; i++) {
        pAnimals[i].speak();
    }

    delete [] pAnimals;

    return 0;
}
