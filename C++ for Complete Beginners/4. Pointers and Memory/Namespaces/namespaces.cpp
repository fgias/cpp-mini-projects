#include <iostream>
#include "Cat.h"
#include "Animals.h"
using namespace std;

using namespace fgias;

int main() {

    Cat cat1;
    cat1.speak(); 
    cout << CATNAME << endl;

    fgias::Cat cat2; // specify namespace with: namespace::class
    cat2.speak(); // equivalent with: using namespace fgias
    cout << fgias::CATNAME << endl;

    fgias2::Cat cat3; 
    cat3.speak();
    cout << fgias2::CATNAME << endl;

    return 0;
}