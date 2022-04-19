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
        // cout << "constructor" << endl;
        _pBuffer = new int[SIZE]{}; // allocate memory and set to zero
    }
    Test(int i) {
        // cout << "parameterized constructor" << endl;
        _pBuffer = new int[SIZE]{};

        for (int i=0; i<SIZE; i++) {
            _pBuffer[i] = 7*i;
        }
    }
    Test(const Test& other) {
        // cout << "copy constructor" << endl;
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, sizeof(int)*SIZE);
        // _pBuffer[i] = other._pBuffer[i]
    }
    Test& operator=(const Test& other) {
        // cout << "assignment" << endl; 
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, sizeof(int)*SIZE);
        return *this;
    }
    ~Test() {
        // cout << "destructor" << endl;
        delete [] _pBuffer;
    }
    friend ostream& operator<<(ostream& out, const Test& test);
};

ostream& operator<<(ostream& out, const Test& test) {
    // cout << "hello from test" << endl;
    return out;
}

Test getTest() {
    return Test();
}

int main() {

    Test test1 = getTest();

    vector<Test> vec;
    vec.push_back(Test());

    int value1 = 7;

    int* pValue1 = &value1; // lvalue
    // int* pValue2 = &7; // rvalue - does not work

    Test* pTest1 = &test1; // lvalue
    // Test* pTest2 = &getTest(); // rvalue – does not work because it is has a temporary value

    int* pValue3 = &++value1; // ++value1: lvalue, works with pre-fix operator
    // int* pValue4 = &value1++; // value1++: rvalue, does not work with the post-fix operator
    cout << *pValue3 << endl;

    // int* pValue5 = &(7 + value1);

    return 0;
}

/*

In general, lvalue = left, rvalue = right in an assingment:
lvalue = rvalue.

In c++, this idea is extended. 
Lvalue: anything you can take the address of
Rvalue: anything you cannot take the address of


*/