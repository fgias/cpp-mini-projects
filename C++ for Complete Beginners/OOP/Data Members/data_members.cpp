#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
    Cat cat;
    cat.makeHappy();
    cat.speak();


    Cat bob;
    bob.makeSad();
    bob.speak();

    return 0;
}