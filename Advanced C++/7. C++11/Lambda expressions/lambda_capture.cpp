#include <iostream>
using namespace std;

int main() {
    int one = 1;
    int two = 2;
    int three = 3;

    // capture (from surrounding scope) one and two by value
    [one, two](){cout << "captured variables: " << one << ", " << two << endl;}();

    // capture all local variables by value
    [=](){cout << "captured variables: " << one << ", " << two << ", " << three << endl;}();

    // capture all local variables by reference
    [&](){cout << "captured variables: " << one << ", " << two << ", " << three << endl;}();

    // capture all local variables by value, but three by reference
    [=, &three](){cout << "captured variables: " << one << ", " << two << ", " << three << endl; three = 7;}();
    cout << three << endl;

    // capture all local variables by reference, but two by value
    [&, two](){cout << "captured variables: " << one << ", " << two << ", " << three << endl; one=99;}();
    cout << one << endl;

    return 0;
}