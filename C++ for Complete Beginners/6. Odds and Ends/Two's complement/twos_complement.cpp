#include <iostream>
using namespace std;

int main() {

    char value = 127; // maximum value of primitive type "char"

    cout << (int)value << endl;

    value++; // c++ does not give an error or warning

    cout << (int)value << endl;

    return 0;
}