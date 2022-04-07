#include <iostream>
#include <sstream>
using namespace std;

// no arguments
void test() {
    cout << "Hello" << endl;
}

// with arguments
// and different return type
string test2(int value, string text) {
    stringstream ss;
    ss << text << " " << value;
    string out = ss.str();
    return out;
}

int main() {

    // no arguments ============================================================

    void (*pTest)(); // define the function pointer

    pTest = &test; // point it to a function

    (*pTest)(); // call it


    // another way

    void (*pTest2)(); // same

    pTest2 = test; // in fact that also works, we don't need the &
    // because the name of the function is already a pointer to that function

    pTest2(); // we also don't need the (*pTest)()
    // because the name of the function is already a pointer to that function
    // therefore we call the function using () after the name, like we always do


    // third way

    void (*pTest3)() = test; // initialize it as well

    pTest3();


    // with arguments ==========================================================
    cout << endl;
    
    string (*pTest4)(int, string) = test2; 
    // a pointer to a function that takes in an int and a string

    string x = pTest4(4, "Fotis");
    cout << x << endl;

    return 0;
}