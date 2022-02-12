#include <iostream>
#include "Cat.h"
using namespace std;

void Cat::speak() {
    if (happy) {
        cout << "Meowww!" << endl;
    }
    else {
        cout << "Sssss!" << endl;
    }
}