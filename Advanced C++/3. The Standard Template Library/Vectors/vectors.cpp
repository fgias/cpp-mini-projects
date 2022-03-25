#include <iostream>
#include <vector>
using namespace std;


int main() {

    vector<string> strings;
    // to pre-size: vector<string> strings(5);

    strings.push_back("one"); // vector is resizable
    strings.push_back("two");
    strings.push_back("three");

    cout << strings.size() << endl; // = 3

    // iterate through the vector
    cout << endl;

    for (int i=0; i<strings.size(); i++) {
        cout << strings[i] << endl;
    }

    // better way to iterate through vector
    cout << endl;

    vector<string>::iterator it = strings.begin();

    for (vector<string>::iterator it = strings.begin(); it!=strings.end() ; it++) {
        // strings.end() points to the element AFTER the end
        cout << *it << endl; // pointer is overloaded, as well as ++
    }

    return 0;
}