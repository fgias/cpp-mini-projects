#include <iostream>
using namespace std;

void changeSomething(double &value) {
    value = 123.4;
}

void square(int &num) {
    num = num*num;
}

int main() {
    int value1 = 8;
    int value2 = value1;
    // we are allocating another part of memory to hold another int with the same value
    // that value1 has now

    value2 = 10;

    cout << endl;
    cout << "value 1: " << value1 << endl;
    cout << "value 2: " << value2 << endl;
    cout << endl;

    int value3 = 8;
    int &value4 = value3; // `int &value4 = value3`: reference variable
    // "value4 is a reference to value3", i.e. another name for value3
    // with the reference we do not allocate more memory


    value4 = 10;

    cout << "value 3: " << value3 << endl;
    cout << "value 4: " << value4 << endl;

    double value = 4.321; // value in the function changeSomething() becomes a reference to 
    // this value here, when passed into the function `void changeSomething(double &value)`
    changeSomething(value);
    cout << value << endl;
    cout << endl;


    int x = 65;
    cout << "The square of " << x << ": " << flush;
    square(x);
    cout << x << endl;
    cout << endl;

    return 0;
}