#include <iostream>
#include <map>
using namespace std;

int main() {

    map<string, int> ages; // string for key, int for value

    // inserting
    ages["Mike"] = 40; // overloaded array subscript operator
    ages["Raj"] = 20;
    ages["Vicky"] = 30;

    ages["Mike"] = 70; // keys are unique

    pair<string, int> addToMap("Peter", 90);
    ages.insert(addToMap);

    ages.insert(pair<string, int>("John", 55));

    ages.insert(make_pair("Freddy", 340));

    cout << ages["Raj"] << endl;

    cout << endl;
    if (ages.find("Vicky") != ages.end()) {
        // .find will point to the right element if the key is in the list
        // otherwise it will point off the end of the map
        // NB the end is always the element exactly after the last element 
        // of the vector / list / map
        cout << "Found Vicky" << endl;

    }

    cout << endl;
    if (ages.find("Sue") != ages.end()) {
        cout << "Found Sue" << endl;
    }
    else {
        cout << "Did not find Sue" << endl;
    }

    // show all pairs
    cout << endl;
    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
        // use (*it).first or it->first ...
        // first = key, second = value
        cout << it->first << ": " << it->second << endl;
    }

    // show all pairs
    // another way
    cout << endl;
    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
        pair<string, int> age = *it;
        cout << age.first << ": " << age.second << endl;
    }

    return 0;
}

/*

<map> allows you to store key-value pairs,
like a lookup table, or a dictionary in python

*/