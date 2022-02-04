#include <iostream>
using namespace std;

int main() {

    bool bValue = false;
    bValue = true;

    cout << bValue << endl;

    char cValue = 55;

    cout << cValue << endl;

    char cValue2 = '7';
    cout << "The position of the character 7, in the ascii table: " 
    <<(int)cValue2 << endl; 
    // find the actual position of the ascii character
    // this is known as "casting"

    char cValue3 = 'g';
    cout << cValue3 << endl;

    cout << "Size of char, in bytes: " << sizeof(char) << endl;

    wchar_t wValue = 'i';
    cout << wValue << endl;
    cout << (char)wValue << endl;

    cout << "Size of wchar, in bytes: " << sizeof(wchar_t) << endl;

    char cValue4 = 'a';
    cout << "Position of 'a' in the ascii table: " <<
    (int)cValue4 << endl;

    char cValue5 = 97;
    cout << cValue5 << endl;

    return 0;
}