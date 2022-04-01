#include <iostream>
#include "Complex.h"

using namespace std;
using namespace fgias;


int main() {

    Complex z1(2,3);
    Complex z2 = z1;
    Complex z3;
    z3 = z1;

    cout << z1 << endl;
    cout << z3 << z2 << z1 << endl;


    return 0;
}