#include <iostream>
using namespace std;

class Animal {
private:

    string name;

public:

    Animal() {
        cout << "Animal created." << endl;
    }; // constructor

    Animal(const Animal& other): name(other.name) { // copy constructor
        cout << "Animal created by copying." << endl;
    };

    ~Animal() {cout << "Destructor called." << endl;}; // destructor

    void setName(string name) {this->name = name;};

    void speak() const {cout << "My name is " << name << "." << endl;};

};

int main() {

    // Animal cat; // the way of instantiating an object that we have already seen 
    // cat.setName("Freddy"); // both the constructor and the destructor are automatically called
    // cat.speak();

    Animal *pCat = new Animal(); // the new operator allocates memory explicitly for a single object
    (*pCat).setName("Sammy");
    (*pCat).speak();

    // you can do this more easily with `pCat->setName("Sammy")`
    // instead of `(*pCat).setName("Sammy")`
    pCat->setName("Bobby");
    pCat->speak();

    delete pCat; // when using new, we have to manually deallocate the memory with delete
    // i.e. we have to call the destructor manually
    // always call DELETE with NEW

    cout << sizeof(pCat) << endl;

    return 0;
}