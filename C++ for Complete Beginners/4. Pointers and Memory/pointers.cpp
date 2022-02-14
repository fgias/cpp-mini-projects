#include <iostream>
using namespace std;

void manipulate(double value) {
    cout << "2. Value of double in manipulate:" << value << endl;
    value = 10;
    cout << "3. Value of double in manipulate: " << value << endl;
};



int main() {

    int nValue = 8;

    int* pnValue = &nValue; // `int*` = "int pointer", which means a pointer to an int, 
    // `&nValue` = "memory address of nValue"

    nValue = 9;

    cout << "int value: " << nValue << endl;
    cout << "pointer to int address: " << pnValue << endl; // memory address is a number in hexadecimal (0x prefix)

    cout << "int value via pointer: " << *pnValue << endl; // this is called "dereferencing a pointer"

    cout << endl << "=================================" << endl;
    double dValue = 123.4;
    cout << "1. dValue: " << dValue << endl;
    manipulate(dValue);
    cout << "4. dValue: " << dValue << endl;



    return 0;
};


// int*: type of the variable, pointer to an int
// &: get memory address
// *pnValue: access the value that the pointer points to