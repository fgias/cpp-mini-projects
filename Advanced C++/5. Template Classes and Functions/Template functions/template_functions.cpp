#include <iostream>
#include "Complex.h"
using namespace std;
using namespace fgias;

template<class T> // you can also use `typename` instead of `class`
void print(T obj) {
    cout << "Template version: " << obj << endl;
}

void print(int value) {
    cout << "Non-template version: " << value << endl;
}

template<class T>
void show() {
    cout << T() << endl;
}

int main() {

    print<int>(5);
    print<string>("hello");
    print<>(Complex(2.1, 3.2));

    print(6);
    print<>(6);

    show<int>();
    
    return 0;
}