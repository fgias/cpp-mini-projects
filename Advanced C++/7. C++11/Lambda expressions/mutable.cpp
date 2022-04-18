#include <iostream>
using namespace std;

int main() {

    int cats = 5;

    [cats]() mutable {
        cats = 8; // you cannot do that without the mutable keyword
        cout << cats << endl;
    }();

    cout << cats << endl;

    return 0;
}