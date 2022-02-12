#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
    Cat cat;
    cat.happy = false;
    cat.speak();


    Cat bob;
    bob.happy = true;
    bob.speak();

    return 0;
}