#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    float value1 = 1.1;

    if (value1 == 1.1) {
        cout << "equal" << endl;
    }
    else {
        cout << "not equal" << endl;
    }

    cout << setprecision(10) <<  value1 << endl;

    // hence, you cannot compare two floats with ==

    return 0;
}