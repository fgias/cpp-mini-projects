#include <iostream>
#include "Cat.h"
using namespace std;

// you have to compile the two files TOGETHER
// g++ classes.cpp Cat.cpp -o classes

int main() {

    Cat cat; // same as `int value;` etc

    cat.speak();
    cat.jump();

    return 0;
}
