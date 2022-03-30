#include <iostream>
using namespace std;

class Test {
private:
    int id;
    string name;
public:
    Test(): id(0), name("") {}
    Test(int id, string name): id(id), name(name) {}
    void print() {cout << id << ": " << name << endl;}

    const Test& operator=(const Test& other) {
        cout << "Assignment running" << endl;

        id = other.id;
        name = other.name;

        return *this;
    }
    Test(const Test& other) {
        cout << "Copy constructor running" << endl;
        *this = other; // use the already implemented assignment operator
    }
};


int main() {

    Test test1(10, "Mike");
    cout << "Print test1: " << flush;
    test1.print();
    
    cout << endl;
    Test test2(20, "Bob");

    test2 = test1; // we can think of this as a method call on test2 
    // with test1 passed as an argument (and test1 as an implicit argument)
    // default implementation of the assignment operator
    // "shallow-copy": copy all the values of the variables from test1 to test2
    // you might want instead a "deep-copy"
    cout << "Print test2: " << flush;
    test2.print();

    cout << endl;
    Test test3(23,"Vicky");

    test3.operator=(test2); // same as test3 = test2;
    // we can think of this as a method call
    // with a const reference to the object Test as an argument
    // and we have to return a const reference to Test 
    // because we should be able to do something like this:
    // test3 = test2 = test1
    cout << "Print test3: " << flush;
    test3.print();

    cout << endl;
    // copy initialization
    Test test4 = test1;
    cout << "Print test4: " << flush;
    test4.print();


    return 0;
}

/* 

Rule of 3: 
* Assignment (=) operator
* Copy constructor
* Destructor

-> If you implement any of the 3 above, you have to implement all of them.

*/