#include <iostream>
using namespace std;

class Animal {// usually declaree class in a header file
// and the implementations in a separate cpp file
private:
    string name;
public:
    void setName(string name) {this->name = name;};
    void speak() const {cout << "My name is " << name << "." << endl;}; 
    // if we know that the method does not change any of the instance data
};

int main() {
    const double PI = 3.141592;
    cout << PI << endl;

    Animal animal;

    animal.setName("Freddy");
    animal.speak();

    //==========================================================================

    int value = 8;
    const int* pValue = &value; // a pointer to a const-int (read backwards)
    cout << *pValue << endl;

    int number = 11;
    pValue = &number; // it is okay to change the address
    cout << *pValue << endl; 

    // *pValue = 13; // error with this: const int* pValue = &value;
    // cout << *pValue << endl;

    //==========================================================================

    int* const pValue2 = &value; // a const-pointer to an int (read backwards)
    cout << *pValue2 << endl;

    // pValue2 = &number; // error with this: int* const pValue2 = &value;
    // cout << *pValue << endl; 

    *pValue2 = 13; //
    cout << *pValue2 << endl; // it is okay to change the value of the int

    //==========================================================================
    // you can also combine:
    const int* const pValue3 = &value; // a const-pointer to a const-int
    cout << *pValue3 << endl;

    return 0;
}