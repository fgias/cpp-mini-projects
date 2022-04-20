#include <iostream>
#include <functional> // we need for bind
using namespace std; // and this, std::bind
using namespace placeholders;

int add(int a, int b, int c) {
    cout << a << ", " << b << ", " << c << endl;
    return a + b + c;
}

int run(function<int(int, int)> func) {
    return func(127,6);
}

class Test {
public:
    int add(int a, int b, int c) {
        cout << a << ", " << b << ", " << c << endl;
        return a + b + c;
    }
};

int main() {

    cout << add(1, 2, 3) << endl;

    // bind to a function
    auto calculate = bind(add, 3, 4, 5); // pass in the function to bind to 
    // and the arguments with which the passed function will be called
    cout << calculate() << endl; 
    // when we call it, each time the function is called with the specified arguments

    auto calculate_args = bind(add, _1, _2, _3);
    cout << calculate_args(4, 5, 6) << endl; 

    auto calculate_args2 = bind(add, _2, _3, _1);
    cout << calculate_args2(4, 5, 6) << endl; 

    auto calculate_args3 = bind(add, _2, 100, _1);
    cout << calculate_args3(4, 6) << endl; 

    cout << run(calculate_args3) << endl;

    // bind to a method
    cout << endl;
    Test test;
    auto calculate_test = bind(&Test::add, test, 2, 543, 2);
    cout << calculate_test() << endl; 

    return 0;
}