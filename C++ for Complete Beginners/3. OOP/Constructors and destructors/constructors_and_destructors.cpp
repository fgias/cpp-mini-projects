#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
    cout << "Starting program ..." << endl;

    {
        Cat cat;
        cat.speak();
    } // the cat is being destroyed here, memory is deallocated

    cout << "Ending program ..." << endl;
    return 0;
}