#include <iostream>
using namespace std;

class Parent {
    int dogs{5};
    string text{"hello"};
public:
    Parent(): Parent("hello") { // delegating constructors
    // call a constructor from another constructor
        cout << "No parameter parent constructor." << endl;
    }
    Parent(string text) {
        this->text = text;
        cout << "String parent constructor." << endl;

    }
};

class Child: public Parent {
public:
    Child() = default;
};

int main() {

    Parent parent("Hello");
    cout << endl;
    Child child;

    return 0;
}