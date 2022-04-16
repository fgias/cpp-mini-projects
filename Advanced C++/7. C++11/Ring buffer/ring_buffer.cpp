#include <iostream>
#include "ring.h"
using namespace std;

int main() {

    ring<string> textring(3);

    textring.add("one");
    textring.add("two");
    textring.add("three");
    // textring.add("four");

    // simple style  
    for (int i=0; i<textring.size(); i++) {
        cout << textring.get(i) << endl;
    }

    // c++98 style
    cout << endl; 
    for (ring<string>::iterator it=textring.begin(); it!=textring.end(); it++) {
        cout << *it << endl;
    }

    // c++11 style
    cout << endl; 
    for (auto value: textring) {
        cout << value << endl;
    }

    return 0;
}