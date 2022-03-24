#include <iostream>
#include <exception>
using namespace std;

class MyException: public exception { // inherit from the std::exception class
public:
    virtual const char* what() const throw() {
        return "Error: Something bad happened.";
    }; // overwrite the what() method
    // https://en.cppreference.com/w/cpp/error/exception
    // const throw(): this method cannot throw an exception, better to not use it

};

class Test {
public:
    void goesWrong() {
        throw MyException();
    }
};

int main() {

    Test test;

    try {
        test.goesWrong();
    }
    catch(MyException& e) {
        cout << e.what() << endl;
    }

    return 0;
}