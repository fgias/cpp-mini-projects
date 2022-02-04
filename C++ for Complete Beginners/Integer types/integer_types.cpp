#include <iostream>
#include <limits>
using namespace std;

int main() {

    int value = 52376;

    cout << value << endl;

    cout << "Maximum integer value: " << INT_MAX << endl;
    cout << "Minimum integer value: " << INT_MIN << endl; 
    // To find other constants, google limits.h

    long long lValue = 32147483647;

    short sValue = 355;

    cout << "Long int: " << lValue << endl;

    cout << "Short int: " << sValue << endl;

    cout << "Size of int in bytes: " << sizeof(int) << endl;

    cout << "4 bytes is 4*8 = 32 bits" << endl;

    cout << "int: 32-bit" << endl;

    cout << "Size of short int in bytes: " << sizeof(short int) << endl;

    cout << "Size of long int in bytes: " << sizeof(long long int) << endl;

    cout << "long long: 64-bit" << endl;

    unsigned int uValue = 2342343; // it can only be positive 

    cout << "Unsinged int: " << uValue << endl;

    cout << "Maximum unsigned integer value: " << UINT_MAX << endl; 
    // you can store a larger integer than INT_MAX

    return 0;
}