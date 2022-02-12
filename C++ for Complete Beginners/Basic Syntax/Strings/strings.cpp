#include <iostream>
using namespace std;

int main() {
    
    string test = "This is a string";

    cout << test << endl;

    string text1 = "Hello";
    string text2 = "Fred";

    cout << text1 << ", " << text2 << "." << endl;

    string text3 = text1 + text2;

    cout << text3 << endl;

    return 0;
}