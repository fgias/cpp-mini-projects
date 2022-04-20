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

// class Temp {
// private:
//     unique_ptr<Test[]> pTest;
// public:
//     Temp(): pTest(new Test[2]) {

//     }
// };


int main() {
    
    shared_ptr<Test> pTest2(nullptr);

    {
    shared_ptr<Test> pTest1 = make_shared<Test>();
    pTest2 = pTest1;
    }
    //the same as, but better than: shared_ptr<Test> pTest1(new Test());
    
    // pointer automatically deleted only when
    // all the pointers that point to this object go out of scope

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