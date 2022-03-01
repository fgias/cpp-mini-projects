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

Animal* createAnimal() {
    Animal* pAnimal = new Animal(); // the new operator here avoids the object being destryoed
    // when reaching the outer bracket `}`
    // the memory will not be deallocated
    pAnimal->setName("Bertie");
    return pAnimal;
}

int main() {

    // Animal cat; // the way of instantiating an object that we have already seen 
    // cat.setName("Freddy"); // both the constructor and the destructor are automatically called
    // cat.speak();

    Animal *pCat = new Animal(); // the new operator allocates memory explicitly for a single object
    pCat->setName("Sammy");
    pCat->speak();

    delete pCat; // when using new, we have to manually deallocate the memory with delete
    // i.e. we have to call the destructor manually
    // always call DELETE with NEW

    Animal* pFrog = createAnimal(); // `Animal*`: a pointer to an animal
    // more efficient to return a reference to an object, than the object itself
    pFrog->speak();
    delete pFrog;

    return 0;
}

// Memory: Stack vs Heap
// - Stack: 
//  * local variables 
//  * for example in main() `int value = 3`
//  * function calls
//  * exceeding the amount of memory: "stack overflow"
// - Heap: 
//  * all the memory available to the computer
//  * for example with operator `new`
//  * a large object needs to be allocated it to the heap, in order to avoid stack overflow