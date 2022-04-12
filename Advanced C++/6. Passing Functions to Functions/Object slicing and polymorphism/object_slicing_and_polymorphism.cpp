#include <iostream>
using namespace std;

class Parent {
private:
    int one;

public:
    Parent(): one(0) { // we lose the default constructor when we implement the copy constructor

    }

    Parent(const Parent& other): one(0) {
        one = other.one;
        cout << "copy parent" << endl;
    }

    virtual void print() {
        cout << "parent" << endl;
    }

    virtual ~Parent() {

    }
};

class Child: public Parent {
private:
    int two;
public:
    Child(): two(0) {

    }

    void print() {
        cout << "child" << endl;
    }
};

int main() {

    Child c1;
    c1.print();
    Parent&  p1 = c1;
    p1.print();

    Parent p2 = Child(); // "object slicing", "upcasting"
    // part of child that are not in parent are sliced and thrown away, e.g. the variable `two`
    p2.print();

    return 0;
}