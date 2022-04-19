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

void check(Test& value) {
    cout << "lvalue function" << endl;
}

void check(Test&& value) {
    cout << "rvalue function" << endl;
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


    // normal reference
    // "lvalue reference"
    Test& lTest1 = test1; // we can bind a normal reference ("lvalue reference") to lvalues

    // Test& lTest1 = getTest(); // functions return rvalues, so we cannot do that
    // we cannot bind a normal reference ("lvalue reference") to mutable rvalues
    const Test& lTest2 = getTest(); // but we can do this
    // we can actually bind a normal const reference ("lvalue reference") to rvalues
    // the lifetime of the rvalue is extended


    // new type of reference
    // "rvalue reference"
    Test&& rTest1 = getTest(); // we can bind an rvalue reference to rvalues
    // Test&& rTest1 = test1; // we cannot bind an rvalue reference to an lvalue

    check(test1);
    check(getTest());
    check(Test());

    return 0;
}

/*

In general, lvalue = left, rvalue = right in an assingment:
lvalue = rvalue.

In c++, this idea is extended. 
Lvalue: anything you can take the address of
Rvalue: anything you cannot take the address of

*/

/*

L-value: "l-value" refers to memory location which identifies an object. 
l-value may appear as either left hand or right hand side of an assignment 
operator(=). l-value often represents as identifier.

R-value: "r-value" refers to data value that is stored at some address in 
memory. A r-value is an expression that can’t have a value assigned to it 
which means r-value can appear on right but not on left hand side of an 
assignment operator(=).

*/