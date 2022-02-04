#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 5; i++) {
        // (before starting; condition to check; after each loop)
        cout << i << endl;
    } // the scope of i is within these {}, we cannot use it outside

    return 0;
}