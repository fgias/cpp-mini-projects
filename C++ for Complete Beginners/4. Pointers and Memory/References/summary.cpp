#include <iostream>
using namespace std;

int main() {
    int x = 7; // x is an object of type int
    // x has an address (of type pointer to int)
    // an object is a region of storage that has a size, a type, and a lifetime
    // this object was created by the definition of the variable x of type int

    int& r = x; // r is a variable, but it is not an object
    // the variable r refers to (is an alias for) the the object x.
    // r has no address of its own; and it may not occupy any storage at all
    // r is an alias for x, and &r yields the address of x
    // (references are not objects; we can't have arrays of references)
    // (references are not objects; we can't use new to allocate a reference)

    int* p = &x; // p is an object of type pointer to int (initialised with the address of x)
    // p is an object; it has an address (of type pointer to pointer to int) 
    // p is a region of storage that has a size, a type, and a lifetime
    // this object was created by the definition of the variable of type pointer to int 

    return 0;
}