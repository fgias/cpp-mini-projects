#include <iostream>
#include "Complex.h"
using namespace std;
using namespace fgias;

template<class T> // you can also use `typename` instead of `class`
void print(T obj) {
    cout << obj << endl;
}

int main() {

    print<int>(5);
    print<string>("hello");
    print<Complex>(Complex(2.1, 3.2));

    return 0;
}