#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
    static const int SIZE = 100;
    int* _pBuffer{nullptr};
public:
    Test() {
        _pBuffer = new int[SIZE]{}; // allocate memory and set to zero
    }
    Test(int i) {
        _pBuffer = new int[SIZE]{};

        for (int i=0; i<SIZE; i++) {
            _pBuffer[i] = 7*i;
        }
    }
    Test(const Test& other) {
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, sizeof(int)*SIZE);
        // _pBuffer[i] = other._pBuffer[i]
    }


    // "move constructor"
    Test(Test&& other) {
        cout << "move constructor" << endl;
        _pBuffer = other._pBuffer; // steal the resources from the temprary object
        other._pBuffer = nullptr; // move it somewhere else
        // so that it will not be destroyed but the destructor
    }


    Test& operator=(const Test& other) {
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, sizeof(int)*SIZE);
        return *this;
    }


    // "move assignment operator"
    Test& operator=(Test&& other) {
        cout << "move assignment operator" << endl;
        delete [] _pBuffer; // allocate previous memory first
        _pBuffer = other._pBuffer;
        other._pBuffer = nullptr;
        return *this;
    }


    ~Test() {
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

    vector<Test> vec;
    vec.push_back(Test());

    Test test;
    test = getTest(); // assigning an rvalue

    return 0;
}
