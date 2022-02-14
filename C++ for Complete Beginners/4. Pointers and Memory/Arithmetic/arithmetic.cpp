#include <iostream>
using namespace std;

/*

* +
* -
* *
* /
* +=
* -=
* /=
* *=
* % (mod operator)
* %=

*/

int main() {
    
    double value1 = 7/2; // C++ is not doing floating point division here
    // even though the type float/double
    cout << value1 << endl; // discards the non-integer part of the number

    // if one number is a float, then it performs floating point division
    value1 = 7.0/2;
    cout << value1 << endl;

    value1 = 7/2.0;
    cout << value1 << endl;

    // obviously, if the type is int, the result is an int, even if 7.0 is a float
    int value2 = 7.0/2;
    cout << value2 << endl;

    // we can also use "casting", to do the same
    value1 = (double)191/2;
    cout << value1 << endl;
    // `(type)value`: converts/casts `value` in type `type`

    int value3 = 12%5;
    cout << value3 << endl;

    double equation = 5.3/2+4*2; // operator "precedence": order of operations
    cout << equation << endl;

    return 0;
}