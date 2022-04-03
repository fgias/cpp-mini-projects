#include <iostream>
#include "Complex.h"

using namespace std;
using namespace fgias;

int main() {

    Complex z1(3,2);
    Complex z2(3,2);

    if (z1 == z2) {
        cout << "Equal" << endl;
    }
    else { 
        cout << "Not equal" << endl;
    }

    if (z1 != z2) {
        cout << "Not equal" << endl;
    }
    else { 
        cout << "Equal" << endl;
    }

    return 0;
}