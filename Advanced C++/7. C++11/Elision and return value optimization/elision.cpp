#include <iostream>
#include <vector>
using namespace std;

class Test {
public:
    Test() {
        cout << "constructor" << endl;
    }
    Test(int i) {
        cout << "parameterized constructor" << endl;
    }
    Test(const Test& other) {
        cout << "copy constructor" << endl;
    }
    Test& operator=(const Test& other) {
        cout << "assignment" << endl; 
    }
    ~Test() {
        cout << "destructor" << endl;
    }
    friend ostream& operator<<(ostream& out, const Test& test);
};

ostream& operator<<(ostream& out, const Test& test) {
    cout << "hello from test" << endl;
    return out;
}

Test getTest() {
    return Test();
}

int main() {

    Test test1 = getTest();
    cout << test1 << endl;

    vector<Test> vec;
    vec.push_back(Test());

    return 0;
}


/*

to disable copy elision use the flag -fno-elide-constructors:

g++ -std=c++11 elision.cpp -o elision -fno-elide-constructors; ./elision

*/