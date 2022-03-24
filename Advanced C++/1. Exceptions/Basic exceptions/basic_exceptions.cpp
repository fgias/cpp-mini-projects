#include <iostream>
using namespace std;

void mightGoWrong() {
    bool error1 = false;
    bool error2 = true;

    if (error1) {
        throw "Something went wrong"; // throw an error
    }

    if (error2) {
        throw string("Something else went wrong"); // creating an object from the string class
    }
}

void usesMightGoWrong() { // exceptions are thrown all the way out of the stack of funtion calls
    mightGoWrong();   
}

int main() {
    try {
        usesMightGoWrong();
    }
    catch(int e) { // "catch" / "handle" the exception with an appropriate action
        cout << "Error code: " << e << "." << endl;
    }
    catch(char const * e) {
        cout << "Error message: " << e << "." << endl;
    } 
    catch(string& e) {
        cout << "String error message: " << e << "." << endl;
    }

    cout << "Program still running." << endl;

    return 0;
}