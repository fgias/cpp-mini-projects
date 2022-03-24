#include <iostream>
#include <exception>
using namespace std;

void goesWrong() {
    bool error1Detected = true;
    bool error2Detected = false;

    if (error1Detected) {
        throw bad_alloc();
    }

    if (error2Detected) {
        throw exception(); // std::bad_alloc is a subclass of std::exception
    }
}

int main() {

    try {
        goesWrong();
    }
    catch(exception& e) { // this is catching the exception, because std::badalloc is a subclass
    // and due to polymorphism, and the method what() being virtual 
    // the method what() gives the correct output
        cout << "Catching std::exception: " << e.what() << endl;
    }
    catch(bad_alloc& e) {
        cout << "Catching std::bad_alloc: " << e.what() << endl;
    }

    // you should capture exceptions with the subclasses before any of the parent classes
    try {
        goesWrong();
    }
    catch(bad_alloc& e) {
        cout << "Catching std::bad_alloc: " << e.what() << endl;
    }
    catch(exception& e) { // this is catching the exception, because std::badalloc is a subclass
    // and due to polymorphism, and the method what() being virtual 
    // the method what() gives the correct output
        cout << "Catching std::exception: " << e.what() << endl;
    }

    return 0;
}