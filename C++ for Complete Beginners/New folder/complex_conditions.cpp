#include <iostream>
using namespace std;

int main() {

    int value1 = 3;
    int value2 = 4;
    int value3 = 4;

    if (value1 <= value2) {
        cout << "greater or equal to" << endl;
    }

    if (value1 != value2 && value2 == value3) {
        cout << "correct!" << endl;
    }

    // &&: logical AND, &: bitwise AND
    // ||: logical OR, |: bitwise OR

    if ((value1 != value2 && value2 == value3) || value1 < 10) {
        cout << "also correct!" << endl;
    }

    bool cond1 = value1 != value2 && value2 == value3;
    cout << cond1 << endl;

    bool cond2 = value1 < 10;
    cout << cond2 << endl;


    if (cond1 || cond2) {
        cout << "good" << endl;
    }

    return 0;
}