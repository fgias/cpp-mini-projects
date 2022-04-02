#include <iostream>
#include "Complex.h"

using namespace std;
using namespace fgias;

int main() {

    Complex z1(3, 4);
    cout << z1 << endl;
    Complex z2(2, 3);
    cout << z2 << endl;

    Complex z3 = z1 + z2;
    cout << z3 << endl;

    cout << endl;
    cout << z1 + z2 + z3 << endl;

    cout << endl;
    Complex z4(4,2);
    cout << z4 << endl;

    Complex z5 = z4 + 2.3;
    cout << z5 << endl;

    cout << endl;
    Complex z6(4,2);
    cout << z6 << endl;

    Complex z7 = 1.1 + z6;
    cout << z7 << endl;

    cout << 6 + z1 + 3 + z3 + 4 + 9 + z5 << endl;

    return 0;
}