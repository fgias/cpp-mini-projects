#include <iostream>
using namespace std;

double divide(double a, double b) {
    
    double d = a / b;

    if (b==0) {
        throw string("Error: division by zero.");
    }

    return d;
}

int main() {

    try {
        double d = divide(3,0);
        cout << d << endl;
    }
    catch(string e) {
        cout << e << endl;
    }

    try {
        double d = divide(3,2);
        cout << d << endl;
    }
    catch(string e) {
        cout << e << endl;
    }

    return 0;
}