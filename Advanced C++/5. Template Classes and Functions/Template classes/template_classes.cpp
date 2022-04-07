#include <iostream>
#include "Complex.h"
using namespace std;
using namespace fgias;

// the STL <vector> for example is a template class

// for template classes you should not put the prototype and the implementation in separate 
// .h and .cpp files, you should put them together in a .h file (i.e. do not separate the implementation)
// here, we put it in this file for convenience

template<class T> // to make a template
class Test {
private:
    T obj;

public:
    Test(T obj){
        this->obj = obj;
    }

    void print() {
        cout << obj << endl;
    }
};

int main() {

    Test<string> test1("Hello");
    test1.print();

    Test<Complex> test2(Complex(2.1,3.2));
    test2.print();

    return 0;
}