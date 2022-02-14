#include <iostream>
using namespace std;

void point(int x = 3, int y = 4); // set defaults in the prototype

int main() {
    point();
    point(1);
    point(2);
    // point(,10): this does not work, default parameters must be rightmost 
    point(8,9);
    return 0;
}

void point(int x, int y) {
    cout << "(" << x << ", " << y << ")" << endl;
};
