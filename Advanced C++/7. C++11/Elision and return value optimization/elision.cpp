#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
    static const int SIZE = 100;
    int* _pBuffer;
public:
    Test() {
        cout << "constructor" << endl;
        _pBuffer = new int[SIZE]{}; // allocate memory and set to zero
    }
    Test(int i) {
        cout << "parameterized constructor" << endl;
        _pBuffer = new int[SIZE]{};

        for (int i=0; i<SIZE; i++) {
            _pBuffer[i] = 7*i;
        }
    }
    Test(const Test& other) {
        cout << "copy constructor" << endl;
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, sizeof(int)*SIZE);
        // _pBuffer[i] = other._pBuffer[i]
    }
    Test& operator=(const Test& other) {
        cout << "assignment" << endl; 
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, sizeof(int)*SIZE);
        return *this;
    }
    ~Test() {
        cout << "destructor" << endl;
        delete [] _pBuffer;
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