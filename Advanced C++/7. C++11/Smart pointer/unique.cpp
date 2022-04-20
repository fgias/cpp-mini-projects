#include <iostream>
#include <memory>
using namespace std;

class Test {
public:
    Test() {
        cout << "Created." << endl;
    }
    void greet() {
        cout << "Hello!" << endl;
    }
    ~Test() {
        cout << "Destroyed." << endl;
    }
};

class Temp {
private:
    unique_ptr<Test[]> pTest;
public:
    Temp(): pTest(new Test[2]) {

    }
};


int main() {

    unique_ptr<Test> pTest(new Test); // this is a type of a smart pointer 
    // memory automatically deallocated by the pointer when variable goes out of scope
    pTest->greet();
    // auto_ptr deprecated

    Temp temp;


    cout << "Finished." << endl;

    return 0;
}

/*

Unique and shared pointers:

Both of these classes are smart pointers, which means that they automatically 
(in most cases) will deallocate the object that they point at when that object 
can no longer be referenced. The difference between the two is how many 
different pointers of each type can refer to a resource.

When using unique_ptr, there can be at most one unique_ptr pointing at any one 
resource. When that unique_ptr is destroyed, the resource is automatically 
reclaimed. Because there can only be one unique_ptr to any resource, any 
attempt to make a copy of a unique_ptr will cause a compile-time error.

*/