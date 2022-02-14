// for loop, with 10,000,000,000 steps, that prints a dot (on the same line) every 200,000,000 iterations

#include <iostream>
#include <sstream>
using namespace std;

int main() {

    for (long long int i=1; i<=10000000000; i++) {
        if (i%200000000 == 0) {
            cout << "." << flush;
        }
    }

    return 0;
};