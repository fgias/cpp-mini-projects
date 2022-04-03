#include <iostream>
#include "Complex.h"

using namespace std;
using namespace fgias;

int main() {

    Complex z1(2,3);

    cout << z1 << endl;
    cout << *z1 << endl;

    cout << *(Complex(3,2) + *z1) << endl;

    return 0;
}